table! {
    followings (id) {
        id -> Int8,
        user_id -> Int8,
        following_user_id -> Int8,
    }
}

table! {
    statuses (id) {
        id -> Int8,
        user_id -> Int8,
        text -> Text,
        created_at -> Timestamp,
    }
}

table! {
    users (id) {
        id -> Int8,
        screen_name -> Text,
        hash -> Int8,
    }
}

allow_tables_to_appear_in_same_query!(
    followings,
    statuses,
    users,
);
