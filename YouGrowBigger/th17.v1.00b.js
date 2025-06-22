{
    "codecaves": {
        "player_initialize_ygb_flag": {
            "code": "\
8B 05 24A35200 \
83 8F 8C8E0100 10 \
E9 [0x44641E] \
            "
        },
    },
	"binhacks": {
        "change_hitbox_mult": {
            "addr": "0x448f40", // 3.6 to 2.6, check global.js if you wanna disable it
            "code": "F3 0F59 05 {f32:2.6}",
            "enable": "<option:hitboxmultflag>",
        },
        "ygb_flag_canshoot": {
            "addr": "0x448a92",
            "code": "<nop:2>"
        },
        "ygb_flag_initialize_1": {
            "addr": "0x446419",
            "code": "E9 [codecave:player_initialize_ygb_flag]"
        },
        "change_initial_player_scale": {
            "addr": "0x446d0f",
            "code": "C7 86 78900100 00004040"
        },
	}
}