{
    "codecaves": {
        "player_initialize_ygb_flag": {
            "code": "\
8B 05 006F4A00 \
83 8E 4C660100 10 \
E9 [0x44102A] \
            "
        },
    },
	"binhacks": {
        "change_hitbox_mult": {
            "addr": "0x443a33", // 3.6 to 2.6, check global.js if you wanna disable it
            "code": "F3 0F59 05 {f32:2.6}",
            "enable": "<option:hitboxmultflag>",
        },
        "ygb_flag_canshoot": {
            "addr": "0x4435aa",
            "code": "<nop:2>"
        },
        "ygb_flag_initialize_1": {
            "addr": "0x441025",
            "code": "E9 [codecave:player_initialize_ygb_flag]"
        },
        "change_initial_player_scale": {
            "addr": "0x441A29",
            "code": "C7 86 C8C70200 00004040"
        },
        // you're welcome LMAO
        "ECL_funcset_dont_reset_season_gauge": {
            "addr": "0x4253C1",
            "code": "<nop:6>"
        }
	}
}