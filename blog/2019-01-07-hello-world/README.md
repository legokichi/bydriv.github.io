# Hello World

ブログを書く媒体というか方法を GitHub にすることにした。

もともとブログを書くのに HTML を生成するのも面倒で Gist でええんちゃう？　疑惑があったのだけど、いざ Gist で書いてみるとけっこう記事が散在してしまってまとめるのがたいへんだった。

ただ、そのためにリポジトリをつくるのも大仰だなァという感じだった。

そこで試験的にというかなんというか、いっそ bydriv.github.io をごった煮ディレクトリにしてしまって、 `/blog` だけをブログ用のディレクトリにすることにした。

ディレクトリ構成は、こんな感じを予定している:

```
# ブログのディレクトリ
+ /blog
|
| # ブログ・エントリのディレクトリ
+-+ /blog/YYYY-MM-DD-TITLE
  |
  | # 本文
  +-> /blog/YYYY-MM-DD-TITLE/README.md
  | # コードや画像など
  +-> /blog/YYYY-MM-DD-TITLE/*
```

`YYYY-MM-DD` は、その情報が書かれた日付のほか、エントリのソートのために書く。

GitHub でブログを書くメリットのひとつは、コードや画像などの関連ファイルを一覧表示できることだと思う。

`README.md` を本文にして、そのディレクトリにコードや画像などを置くことで、 Appendix 的な使いかたができる。

bydriv.github.io からはこのリポジトリにリンクを張ることにした。

ただ、過去に書いたブログについては、どうしようかなァと考えているところ。

新しく書くブログはこの形式でいいけど、過去のブログをこの形式で書きなおすメリットはないと思う。
ただ、過去のブログをただ捨てるのももったいないし、どうにか方法を考えなきゃなァという感じです。
