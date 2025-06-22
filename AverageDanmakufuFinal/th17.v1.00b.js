{
	"binhacks": {
		wide_playfield_camera3_width: {
            addr: "0x442764",
            code: "C7 86 A4060000 80020000"
        },
		wide_playfield_camera3_height: {
            addr: "0x44276e",
            code: "C7 86 A8060000 E0010000"
        },
		wide_playfield_camera3_x_center: {
            addr: "0x44273f",
            code: "F3 0F5C 05 {f32:640}"
        },
		wide_playfield_camera3_y_center: {
            addr: "0x442778",
            code: "F3 0F5C 05 {f32:480}"
        },
		wide_playfield_camera2_unk_x: {
            addr: "0x442630",
            code: "<nop:6>"
        },
        wide_playfield_camera2_unk_y: {
            addr: "0x44264a",
            code: "<nop:6>"
        },
		wide_playfield_camera2_unk_width: {
            addr: "0x442658",
            code: "F3 0F59 05 {f32:640}"
        },
        wide_playfield_camera2_unk_height: {
            addr: "0x442672",
            code: "F3 0F59 05 {f32:480}"
        },
		wide_playfield_camera1_x: {
            addr: "0x4426bc",
            code: "<nop:6>"
        },
        wide_playfield_camera1_y: {
            addr: "0x4426d6",
            code: "<nop:6>"
        },
		wide_playfield_camera1_width: {
            addr: "0x4426e4",
            code: "F3 0F59 05 {f32:640}"
        },
        wide_playfield_camera1_height: {
            addr: "0x4426fe",
            code: "F3 0F59 05 {f32:480}"
        },

        wide_playfield_bullet_offscreen_width1: {
            addr: "0x41535b",
            code: "F3 0F10 2D {f32:-330}"
        },
        wide_playfield_bullet_offscreen_width2: {
            addr: "0x4151C7",
            code: "F3 0F10 3D {f32:330}"
        }, 
        wide_playfield_bullet_offscreen_height: {
            addr: "0x4151CF",
            code: "F3 0F10 25 {f32:470}"
        },


        // wide_playfield_laser_offscreen_width1: {
        //     addr: "0x433217",
        //     code: "F3 0F10 3D {f32:320}"
        // },
        // wide_playfield_laser_offscreen_width2: {
        //     addr: "0x4331F5", 
        //     code: "F3 0F10 35 {f32:-320}"
        // },
        enemy_x_left_check: {
            addr: "0x41f40b", 
            code: "F3 0F10 05 {f32:-310}"
        },
        enemy_x_right_check: { 
            addr: "0x41f427", 
            code: "0F2F 1D {f32:310}"
        },
        "change_exbounce_x_bounds": {
			"addr": "0x416ddd",
			"code": "C7 83 E00A0000 00002044",
		},
		"change_exbounce_y_bounds": {
			"addr": "0x416DD5",
			"code": "F3 0F10 05 {f32:480}",
		},
		"disable_shot_delete_based_on_res": {
            "addr": ["0x44ae8a", "0x44aeb2"],
            "code": "<nop:2>",
        },
        
        "X_LEFT_POS_CORRECTION_1": {
            "addr": "0x4473b9",
			"code": "81 F9 0064FFFF",
		},
        "X_LEFT_POS_CORRECTION_2": {
            "addr": "0x4473c1",
			"code": "C7 87 1C060000 0064FFFF",
		},
        "X_LEFT_POS_CORRECTION_3": {
            "addr": "0x4473CB",
            "code": "B9 0064FFFF"
        },
        "X_RIGHT_POS_CORRECTION_1": {
            "addr": "0x4473d2",        
			"code": "81 F9 009C0000",
		},
        "X__RIGHT_POS_CORRECTION_2": {
            "addr": "0x4473da",
			"code": "C7 87 1C060000 009C0000",
		},
        "X_RIGHT_POS_CORRECTION_3": {
            "addr": "0x4473E4",
            "code": "B9 009C0000"
        },
		"Y_UP_POS_CORRECTION_1": {
			"addr": "0x4473ef",        
			"code": "3D 70FDFFFF",
		},
		"Y_UP_POS_CORRECTION_2": {
			"addr": "0x4473f6",
			"code": "C7 87 20060000 70FDFFFF",
		},
        "Y_UP__POS_CORRECTION_3": {
            "addr": "0x447400",
            "code": "B8 70FDFFFF"
        },
		"Y_DOWN_POS_CORRECTION_1": {
			"addr": "0x447407",        
			"code": "3D 00E10000",      
		},
		"Y_DOWN_POS_CORRECTION_2": {
			"addr": "0x44740e",
			"code": "C7 87 20060000 00E10000",
		},
        "Y_DOWN_CORRECTION_3": {
            "addr": "0x447418",
            "code": "B8 00E10000"
        },

        "post_spell_time_fix_clear_time_int": {
            "addr": "0x42C9CE",
            "code": "C7 44 24 38 00 00 9C 43"
        },
        "post_spell_time_fix_clear_time_decimal": {
            "addr": "0x42CA8F",
            "code": "C7 44 24 44 0000B243"
        },
        "post_spell_time_real_time_int": {
            "addr": "0x42CB1B",
            "code": "C7 44 24 34 00009C43"
        },
        "post_spell_time_real_time_dec": {
            "addr": "0x42CBF2",
            "code": "C7 44 24 54 0000B243"
        },

        
        "stage_clear_ascii_pos": {
            "addr": "0x42c73e",
            "code": "C7 44 24 38 0000A043"
        }
	}
}
