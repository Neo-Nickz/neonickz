{
    "codecaves": {
        "player_initialize_ygb_flag": {
            "code": "\
8B 05 BC9B4E00 \
83 8E 94620100 10 \
E9 [0x4533C8] \
            "
        },
    },
	"binhacks": {
        "change_hitbox_mult": {
            "addr": "0x455d50", // 3.6 to 2.6, check global.js if you wanna disable it
            "code": "F3 0F59 05 {f32:2.6}",
            "enable": "<option:hitboxmultflag>",
        },
        "ygb_flag_canshoot": {
            "addr": "0x4557ee",
            "code": "<nop:2>"
        },
        "ygb_flag_initialize_1": {
            "addr": "0x4533c3",
            "code": "E9 [codecave:player_initialize_ygb_flag]"
        },
        "change_initial_player_scale": {
            "addr": "0x453dfb",
            "code": "C7 86 44C00200 00004040"
        },
	}
}
