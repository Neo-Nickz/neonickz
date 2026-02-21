{
        "options": {
        "SakuyaReplayMenuName": { 
            "type": "s", 
            "val": "SakuyaB" 
        },
    },
    "codecaves": {
        "bullet_spawn_anm_effect_and_increase_field_in_player_struct_based_on_bullet_lifespan": {
            "code": "\
55 \
8B EC \
83 EC 14 \
56 \
8B F1 \
B9 409A4E00 \
57 \
89 75 F8 \
E8 [0x403840] \
F3 0F10 4E 64 \
31 C9 \
F3 0F10 15 3CFF4C00 \
D9 5D FC \
F3 0F10 45 FC \
F3 0F59 05 28FE4C00 \
F3 0F58 C8 \
F3 0F10 05 68FF4C00 \
0F2F CA \
F3 0F11 4D FC \
0F86 1A000000 \
8B C1 \
F3 0F5C C8 \
41 \
83 F8 20 \
0F8F 05000000 \
0F2F CA \
77 EB \
F3 0F11 4D FC \
F3 0F10 15 00014D00 \
0F2F D1 \
0F86 1A000000 \
8B C1 \
F3 0F58 C8 \
41 \
83 F8 20 \
0F8F 05000000 \
0F2F D1 \
77 EB \
F3 0F11 4D FC \
80 3D 863D5000 00 \
8D 7E 48 \
8B 05 789A4E00 \
53 \
8B 58 0C \
0F84 11000000 \
68 <0x503D00> \
FF 15 78E04B00 \
FE 05 813D5000 \
FF 83 34010000 \
E8 [0x489460] \
8B F0 \
8B CB \
68 97000000 \
56 \
E8 [0x40B880] \
81 4E 1C 00040000 \
5B \
85 FF \
0F85 1D000000 \
0F57 C0 \
C7 45 F4 00000000 \
8B 45 F4 \
0F14 C0 \
66 0FD6 86 EC050000 \
E9 0F000000 \
F3 0F7E 07 \
66 0FD6 86 EC050000 \
8B 47 08 \
F3 0F10 45 FC \
8B CE \
89 86 F4050000 \
F3 0F11 46 4C \
E8 [0x477E10] \
56 \
8D 45 FC \
C7 86 34050000 00000000 \
50 \
E8 [0x487BD0] \
80 3D 863D5000 00 \
5F \
5E \
0F84 11000000 \
68 <0x503D00> \
FF 15 7CE04B00 \
FE 0D 813D5000 \
8B 47 10 \
83 F8 02 \
7D 07 \
B9 1E000000 \
EB 28 \
83 F8 04 \
7D 07 \
B9 19000000 \
EB 1C \
83 F8 06 \
7D 07 \
B9 14000000 \
EB 10 \
B9 0F000000 \
BA 23000000 \
83 F8 0A \
0F4C CA \
8B 05 B89B4E00 \
01 88 4CC00200 \
8B 4D F8 \
E8 [0x459910] \
8B E5 \
5D \
C2 0C00 \
            "
        }, 
        "bullet_increase_field_in_player_struct_based_on_flag0_value": {
            "code": "\
55 \
8B EC \
83 EC 14 \
53 \
56 \
57 \
8B F1 \
89 75 F8 \
8B 75 F8 \
8B 86 AC000000 \
8B D0 \
0FB6 C0 \
6B C0 58 \
C1 FA 08 \
8B 1D B89B4E00 \
8B 8B 08C00200 \
03 84 91 E0000000 \
8B 50 38 \
01 93 48C00200 \
8B 4D F8 \
E8 [0x459910] \
5F \
5E \
5B \
8B E5 \
5D \
C2 0C00 \
            "
        }, 
        "bullet_change_angle_based_on_flag0_value": {
            "code": "\
8B 81 AC000000 \
8B F0 \
0FB6 C0 \
69 C0 58000000 \
C1 FE 08 \
8B 15 B89B4E00 \
8B 92 08C00200 \
03 84 B2 E0000000 \
8B 50 38 \
8B 41 10 \
39 D0 \
0F85 07000000 \
C7 41 64 DB0FC9BF \
31 C0 \
C3 \
            "
        }, 
        "new_ontick_table": {
            "code": "\
00 00 00 00 \
D0 99 45 00 \
10 9E 45 00 \
80 A7 45 00 \
20 AA 45 00 \
00 00 00 00 \
FF FF FF FF \
00 00 00 00 \
<codecave:bullet_change_angle_based_on_flag0_value> \
            "
        }, 
        "new_onhit_table": {
            "code": "\
00 00 00 00 \
D0 9B 45 00 \
80 A1 45 00 \
A0 A7 45 00 \
E0 A8 45 00 \
B0 AB 45 00 \
10 AD 45 00 \
00 00 00 00 \
<codecave:bullet_spawn_anm_effect_and_increase_field_in_player_struct_based_on_bullet_lifespan> \
<codecave:bullet_increase_field_in_player_struct_based_on_flag0_value> \
            "
        }, 
	},
	"binhacks": {
    // update: 2/20/2026
    // actually ported the shottype's ontick/onhit functions to this game
    // bomb sometime
        "expand_ontick_table": {
            "addr": "0x455A96",
            "code": "<codecave:new_ontick_table>"
        },
        "expand_onhit_table": {
            "addr": "0x455AB0",
            "code": "<codecave:new_onhit_table>"
        },
        "replace_reisen_name_cuz_fuck_her_amirite": {
            "addr": "0x4cb31c",
            "code": "<option:SakuyaReplayMenuName>"
        },
	}
}