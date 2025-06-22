{
    "codecaves": {
        "player_initialize_ygb_flag": {
            "code": "\
8B 87 AC760400 \
83 8F 9C770400 10 \
E9 [0x45BEBA] \
            "
        },
    },
	"binhacks": {
        "change_hitbox_mult": {
            "addr": "0x45cdf3", // 3.6 to 2.6, check global.js if you wanna disable it
            "code": "F3 0F59 05 {f32:2.6}",
            "enable": "<option:hitboxmultflag>",
        },
        "ygb_flag_canshoot": {
            "addr": "0x45c978",
            "code": "<nop:2>"
        },
        "ygb_flag_initialize_1": {
            "addr": "0x45BEB4",
            "code": "E9 [codecave:player_initialize_ygb_flag] <nop:1>"
        },
        "change_initial_player_scale": {
            "addr": "0x45adae",
            "code": "C7 86 7C790400 00004040"
        },
	}
}