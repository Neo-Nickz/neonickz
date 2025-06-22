{
    binhacks: {
        wide_playfield_camera3_width: {
            addr: "0x454EB4",
            code: "80 02"
        },
        wide_playfield_camera3_height: {
            addr: "0x454EBE",
            code: "E0 01"
        },
        wide_playfield_camera3_x_center: {
            addr: "0x454E8D",
            code: "{f32:640}"
        },
        wide_playfield_camera3_y_center: {
            addr: "0x454EDA",
            code: "{f32:480}"
        },
        wide_playfield_camera2_unk_x: {
            addr: "0x454C90",
            code: "<nop:6>"
        },
        wide_playfield_camera2_unk_y: {
            addr: "0x454CAA",
            code: "<nop:6>"
        },
        wide_playfield_camera2_unk_width: {
            addr: "0x454CBC",
            code: "{f32:640}"
        },
        wide_playfield_camera2_unk_height: {
            addr: "0x454CD6",
            code: "{f32:480}"
        },
        wide_playfield_camera1_x: {
            addr: "0x454DD5",
            code: "<nop:6>"
        },
        wide_playfield_camera1_y: {
            addr: "0x454DEF",
            code: "<nop:6>"
        },
        wide_playfield_camera1_width: {
            addr: "0x454E01",
            code: "{f32:640}"
        },
        wide_playfield_camera1_height: {
            addr: "0x454E1B",
            code: "{f32:480}"
        },
        wide_playfield_camera0_x: {
            addr: "0x454D17",
            code: "<nop:6>"
        },
        wide_playfield_camera0_y: {
            addr: "0x454D31",
            code: "<nop:6>"
        },
        wide_playfield_camera0_width: {
            addr: "0x454D43",
            code: "{f32:640}"
        },
        wide_playfield_camera0_height: {
            addr: "0x454D5D",
            code: "{f32:480}"
        },
        wide_playfield_bullet_offscreen_width1: {
            addr: "0x42464F",
            code: "{f32:320}"
        },
        wide_playfield_bullet_offscreen_width2: {
            addr: "0x4247EB",
            code: "{f32:-320}"
        },
        wide_playfield_bullet_offscreen_bottom: {
            addr: "0x424657",
            code: "{f32:480}"
        },
        wide_playfield_player_bullet_offscreen_width: {
            addr: "0x45EEBF",
            code: "{f32:640}"
        },
        wide_playfield_player_bullet_offscreen_height: {
            addr: "0x45EEC7",
            code: "{f32:480}"
        },
        wide_playfield_low_res_x_width: {
            addr: "0x47384E",
            code: "{f32:640}"
        },
        wide_playfield_low_res_y_height: {
            addr: "0x473870",
            code: "{f32:480}"
        },
        wide_playfield_enemy_distortion_width: {
            addr: "0x42FCB8",
            code: "{f32:640}"
        },
        wide_playfield_enemy_distortion_height: {
            addr: "0x42FD17",
            code: "{f32:480}"
        },
        wide_playfield_some_stage_func_width: {
            addr: "0x41CDEC",
            code: "{f32:640}"
        },
        wide_playfield_some_stage_func_height: {
            addr: "0x41CDFA",
            code: "{f32:480}"
        },
        wide_playfield_some_stage_func_height: {
            addr: "0x41CDFA",
            code: "{f32:480}"
        },
        enemy_x_left_check: {
            addr: "0x42EAE4", 
            code: "F3 0F10 05 {f32:-310}"
        },
        enemy_x_right_check: { 
            addr: "0x42EB04", 
            code: "0F2F 15 {f32:310}"
        },

        "change_exbounce_x_bounds": {
         "addr": "0x4262FA",
			"code": "C7 83 F80B0000 00002044",
		},
        "change_exbounce_y_bounds": {
			"addr": "0x4262f2",
			"code": "F3 0F10 05 {f32:480}",
		},
        
        "X_RIGHT_POS_CORRECTION_1": {
            "addr": "0x45B7AD",        
			"code": "81 F9 00 9C 00 00",
		},
        
        "X__RIGHT_POS_CORRECTION_2": {
            "addr": "0x45B7B5", 
			"code": "C7 87 2C060000 009C0000",
		},
        "X__RIGHT_POS_CORRECTION_3": {
            "addr": "0x45B7BF", 
			"code": "B9 009C0000",
		},
        "X_LEFT_POS_CORRECTION_1": {
            "addr": "0x45B735",   
			"code": "81 F9 0064FFFF",
		},
        "X__LEFT_POS_CORRECTION_2": {
            "addr": "0x45B73D",
			"code": "C7 87 2C060000 0064FFFF",
		},
        "X__LEFT_POS_CORRECTION_3": {
            "addr": "0x45B747",
			"code": "B9 0064FFFF",
		},
        "Y_UP_POS_CORRECTION_1": {
            "addr": "0x45B7C4",
			"code": "81 FA 00000000",
		},
        "Y_UP_POS_CORRECTION_2": {
            "addr": "0x45B7CC",
			"code": "C7 87 30060000 00000000",
		},
        "Y_UP__POS_CORRECTION_3": {
            "addr": "0x45B7D6",
			"code": "B8 00000000",
		},
        "Y_DOWN_POS_CORRECTION_1": {
            "addr": "0x45B7DF",     
			"code": "81 FA 00E10000",
		},
        "Y_DOWN__POS_CORRECTION_2": {
            "addr": "0x45B7E7", 
			"code": "C7 87 30060000 00E10000",
		},
        "Y_DOWN__POS_CORRECTION_3": {
            "addr": "0x45B7F1",
			"code": "B8 00E10000",
		},
        
        "post_spell_time_clear_time_int": {
            "addr": "0x43CE93",
            "code": "C7 45 E8 00009C43"
        },
        "post_spell_time_fix_clear_time_decimal": {
            "addr": "0x43CF60",
            "code": "C7 45 E8 0000B243"
        },
        "post_spell_time_real_time_int": {
            "addr": "0x43CFC4",
            "code": "C7 45 E8 00009C43"
        },
        "post_spell_time_real_time_dec": {
            "addr": "0x43D09B",
            "code": "C7 45 E8 0000B243"
        },

        "stage_clear_ascii_pos": {
            "addr": "0x43CD57",
            "code": "C7 45 E8 0000A043"
        }
    }
}