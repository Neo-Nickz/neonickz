{
    "codecaves": {
        "player_initialize_ygb_flag": {
            "code": "\
8B 05 80B64D00 \
83 8F D4820100 10 \
E9 [0x44C4ED] \
            "
        },
        "player_scale_6": {
            "code": "\
C7 86 DC820100 0000C040 \
E9 [0x450530] \
            "
        },
    },
	"binhacks": {
        "change_hitbox_mult": {
            "addr": "0x44EFF0", // 3.6 to 2.6, check global.js if you wanna disable it
            "code": "F3 0F59 05 {f32:2.6}",
            "enable": "<option:hitboxmultflag>",
        },
        "ygb_flag_canshoot": {
            "addr": "0x44ea42",
            "code": "<nop:2>"
        },
        "ygb_flag_initialize_1": {
            "addr": "0x44C4E8",
            "code": "E9 [codecave:player_initialize_ygb_flag]"
        },
        "change_initial_player_scale": {
            "addr": "0x44D062",
            "code": "C7 86 08830100 00004040"
        },

        "ygb_spell_dont_hide_options": {
            "addr": "0x450503",
            "code": "<nop:5>"
        },
        "ygb_spell_you_grow_even_bigger": {
            "addr": "0x450514",
            "code": "C7 86 08830100 00004040 C7 86 D8820100 00004040 E9 [codecave:player_scale_6]"
        },
        "ygb_spell_you_grow_smaller": {
            "addr": "0x4504ED",
            "code": "83 A6 D4820100 10 C7 86 08830100 00004040"
        },
    }
}
