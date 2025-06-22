{
	"binhacks": {
		wide_playfield_camera3_width: {
            addr: "0x43CDA7",
            code: "C7 86 A4060000 80020000"
        },
		wide_playfield_camera3_height: {
            addr: "0x43CDB1",
            code: "C7 86 A8060000 E0010000"
        },
		wide_playfield_camera3_x_center: {
            addr: "0x43CD81",
            code: "F3 0F5C 05 {f32:640}"
        },
		wide_playfield_camera3_y_center: {
            addr: "0x43cdbb",
            code: "F3 0F5C 05 {f32:480}"
        },
		wide_playfield_camera2_unk_x: {
            addr: "0x43cc73",
            code: "<nop:6>"
        },
        wide_playfield_camera2_unk_y: {
            addr: "0x43cc8d",
            code: "<nop:6>"
        },
		wide_playfield_camera2_unk_width: {
            addr: "0x43cc9b",
            code: "F3 0F59 05 {f32:640}"
        },
        wide_playfield_camera2_unk_height: {
            addr: "0x43ccb5",
            code: "F3 0F59 05 {f32:480}"
        },
		wide_playfield_camera1_x: {
            addr: "0x43ccff",
            code: "<nop:6>"
        },
        wide_playfield_camera1_y: {
            addr: "0x43cd19",
            code: "<nop:6>"
        },
		wide_playfield_camera1_width: {
            addr: "0x43CD27",
            code: "F3 0F59 05 {f32:640}"
        },
        wide_playfield_camera1_height: {
            addr: "0x43CD41",
            code: "F3 0F59 05 {f32:480}"
        },


        wide_playfield_bullet_offscreen_width1: {
            addr: "0x4123A5",
            code: "F3 0F10 05 {f32:-330}"
        },
        wide_playfield_bullet_offscreen_width2: {
            addr: "0x4123DB",
            code: "0F2F 1D {f32:330}"
        },
        wide_playfield_bullet_offscreen_height: {
            addr: "0x412433",
            code: "0F2F 1D {f32:470}"
        },
        wide_playfield_laser_offscreen_width1: {
            addr: "0x433217",
            code: "F3 0F10 3D {f32:390}"
        },
        wide_playfield_laser_offscreen_width2: {
            addr: "0x4331F5", 
            code: "F3 0F10 35 {f32:-390}"
        },
        "laser_thing": {
            "addr": "0x433253",
            "code": "F3 0F10 1D {f32:-390}"
        },
        enemy_x_left_check: {
            addr: "0x41C153", 
            code: "F3 0F10 05 {f32:-310}"
        },
        enemy_x_right_check: { 
            addr: "0x41C16F", 
            code: "0F2F 15 {f32:310}"
        },
        "change_exbounce_x_bounds": {
			"addr": "0x413CDF",
			"code": "C7 83 DC100000 00002044",
		},
		"change_exbounce_y_bounds": {
			"addr": "0x413CE9",
			"code": "C7 83 E0100000 0000F043",
		},

		"disable_shot_delete_based_on_res": {
            "addr": ["0x445813", "0x44583B"],
            "code": "<nop:2>",
        },
        
        "X_LEFT_POS_CORRECTION_1": {
            "addr": "0x4420E3",
			"code": "3D 0064FFFF",
		},
        "X_LEFT_POS_CORRECTION_2": {
            "addr": "0x4420EA",
			"code": "C7 87 1C060000 0064FFFF",
		},
        "X_RIGHT_POS_CORRECTION_1": {
            "addr": "0x4420F6",        
			"code": "3D 009C0000",
		},
        "X__RIGHT_POS_CORRECTION_2": {
            "addr": "0x4420FD",
			"code": "C7 87 1C060000 009C0000",
		},
		"Y_UP_POS_CORRECTION_1": {
			"addr": "0x44210D",        
			"code": "3D 70FDFFFF",
		},
		"Y_UP_POS_CORRECTION_2": {
			"addr": "0x442114",
			"code": "C7 87 20060000 70FDFFFF",
		},
		"Y_DOWN_POS_CORRECTION_1": {
			"addr": "0x442120",        
			"code": "3D 00E10000",      
		},
		"Y_DOWN_POS_CORRECTION_2": {
			"addr": "0x442127",
			"code": "C7 87 20060000 00E10000",
		},

        "post_spell_time_clear_time_int": {
            "addr": "0x429150",
            "code": "C7 44 24 38 00009C43"
        },
        "post_spell_time_fix_clear_time_decimal": {
            "addr": "0x429211",
            "code": "C7 44 24 44 0000B243"
        },
        "post_spell_time_real_time_int": {
            "addr": "0x429298",
            "code": "C7 44 24 34 00009C43"
        },
        "post_spell_time_real_time_dec": {
            "addr": "0x4292FF",
            "code": "C7 44 24 48 0000B243"
        },

        "stage_clear_ascii_pos": {
            "addr": "0x428ebc",
            "code": "C7 44 24 38 0000A043"
        },
        "season_level_ascii_pos": {
            "addr": "0x4299C7",
            "code": "C7 44 24 34 000079C3"
        }
	}
}
