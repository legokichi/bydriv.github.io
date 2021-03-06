# 草案: 正規表現の網羅性チェックをできる言語

具体的になにかを実装したわけではないのだけど、アイディアを書きとめておく。
これは数年前から考えてたことなのだけど、当分実装することはないだろうと思うので。

正規表現は（すくなくとも正規言語の範囲なら、理論的には）網羅性チェックができる。
正規表現を言語に組みこめば、 ML のようなパターンマッチで網羅性チェックできる正規表現が可能になる。
なんか、こんな感じに:

```sml
(* String.size s = 0 や String.size s >= 2 の文字列にマッチしないので網羅的ではなく、コンパイルエラーになる *)
fun f s =
  case s of
    /./ => x

(* やはり String.size s = 0 の文字列にマッチしないので網羅的ではなく、コンパイルエラーになる *)
fun g s =
  case s of
    /./ => x
  | /.+/ => xs

(* OK *)
fun h s =
  case s of
    /./ => SOME x
  | /.+/ => SOME xs
  | // => NONE
```

具体的な実装方法としては、

1. 正規表現を DFA に変換する
2. その DFA の和をとる
3. その DFA を最小化する
4. その DFA が `/.*/` と等しいか検査し、等しくなければ網羅的でないとしてコンパイルエラーにする

となる。

もちろん理論的には可能というだけで、実際にこれを実装しようとするとコンパイル時間が爆発してしまうことは容易に想像できる。
そのあたりをどう最適化するかは、プログラマの腕の見せ所（？）だと思う。

また、この場合当然ながら正規表現は第一級の対象ではなくなる。
たとえばユーザの入力にもとづいて動的に正規表現を構築することはできない。
(それをするのが正しいかどうかは置いといて)

## おまけ

正規表現を文字列だけでなく、リスト(値の列)に一般化してもおもしろいかもしれない。
たとえば、さきほどの例は

```sml
fun h' s =
  case s of
    [x] => SOME x
  | [xs]+ => SOME xs
  | [] => NONE
```

のようにすることで、文字の列だけでなくリスト(値の列)で正規表現を使用できるようになる。

`[x]` は長さ1のリスト、 `[xs]+` は長さn>=1のリスト、 `[]` は長さ0のリストにマッチする。

たとえばリストの長さが偶数かどうかを判定したい場合、つぎのように書くことができる:

```sml
fun evenLength s =
  case s of
    [xs, ys]+ => true
  | [] => false
```

工夫次第でもっとおもしろいパターンが書けるかもしれない。

重要なのはこのように拡張しても網羅性チェックは依然として可能だということ (実装はそれなりに難しいだろうが)。
