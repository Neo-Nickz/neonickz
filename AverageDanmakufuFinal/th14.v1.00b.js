{
	"binhacks": {
		wide_playfield_camera3_width: {
            addr: "0x4468b8",
            code: "C7 86 9C 06 00 00 80 02 00 00"
        },
		wide_playfield_camera3_height: {
            addr: "0x4468CA",
            code: "C7 86 A0 06 00 00 E0 01 00 00"
        },
		wide_playfield_camera3_x_center: {
            addr: "0x446893",
            code: "F3 0F5C 05 {f32:640}"
        },
		wide_playfield_camera3_y_center: {
            addr: "0x4468c2",
            code: "F3 0F5C 05 {f32:480}"
        },
		wide_playfield_camera2_unk_x: {
            addr: "0x446783",
            code: "<nop:6>"
        },
        wide_playfield_camera2_unk_y: {
            addr: "0x44679d",
            code: "<nop:6>"
        },
		wide_playfield_camera2_unk_width: {
            addr: "0x4467ab",
            code: "F3 0F59 05 {f32:640}"
        },
        wide_playfield_camera2_unk_height: {
            addr: "0x4467c5",
            code: "F3 0F59 05 {f32:480}"
        },
		wide_playfield_camera1_x: {
            addr: "0x446810",
            code: "<nop:6>"
        },
        wide_playfield_camera1_y: {
            addr: "0x44682a",
            code: "<nop:6>"
        },
		wide_playfield_camera1_width: {
            addr: "0x446838",
            code: "F3 0F59 05 {f32:640}"
        },
        wide_playfield_camera1_height: {
            addr: "0x446852",
            code: "F3 0F59 05 {f32:480}"
        },
        
        wide_playfield_bullet_offscreen_width1: {
            addr: "0x416caa",
            code: "F3 0F10 05 {f32:-330}"
        },
        wide_playfield_bullet_offscreen_width2: {
            addr: "0x416cc7",
            code: "0F2F 1D {f32:330}"
        },
        wide_playfield_bullet_offscreen_height: {
            addr: "0x416cfc",
            code: "0F2F 1D {f32:490}"
        },
        wide_playfield_laser_offscreen_width1: {
            addr: "0x43C0AE",
            code: "0F2F 35 {f32:320}"
        },
        wide_playfield_laser_offscreen_width2: {
            addr: "0x43C076", 
            code: "F3 0F10 3D {f32:-320}"
        },
        enemy_x_left_check: {
            addr: "0x4236b3", 
            code: "F3 0F10 05 {f32:-310}"
        },
        enemy_x_right_check: { 
            addr: "0x4236cf", 
            code: "0F2F 15 {f32:310}"
        },
        "change_exbounce_x_bounds": {
        	"addr": "0x4185a7",
        	"code": "C7 86 7C100000 00002044", 
        },
        "change_exbounce_y_bounds": {
        	"addr": "0x4185b1", 
        	"code": "C7 86 80100000 0000F043",
        },
        "change_exwrap_x_left_bounds_1": {
        	"addr": "0x41A380",
        	"code": "F3 0F10 35 {f32:-310}", 
        },
        "change_exwrap_x_right_bounds_1": {
        	"addr": "0x41A388",
        	"code": "F3 0F10 3D {f32:310}", 
        },
        "change_exwrap_y_down_bounds": {
        	"addr": "0x41A390", 
        	"code": "F3 0F10 25 {f32:470}",
        },
        "exwrap_thing_1": {
            "addr": "0x41A3B3",
            "code": "F3 0F59 2D {f32:1}", 
        },
        "exwrap_thing_2": {
            "addr": "0x41A3DE",
            "code": "F3 0F59 35 {f32:1}", 
        },
        "exwrap_thing_3": {
            "addr": "0x41A3F3",
            "code": "F3 0F10 3D {f32:1}", 
        },
        "exwrap_thing_4": {
            "addr": "0x41A40A",
            "code": "F3 0F10 35 {f32:1}", 
        },
        "change_exwrap_x_left_bounds_2": {
            "addr": "0x41A46A", 
            "code": "F3 0F58 15 {f32:640}", 
        },
        "change_exwrap_x_right_bounds_2": {
        	"addr": "0x41A489",
        	"code": "F3 0F58 15 {f32:640}", 
        },
		"disable_shot_delete_based_on_res": {
            "addr": ["0x45119d", "0x4511c5"],
            "code": "<nop:2>",
        },

        "X_LEFT_POS_CORRECTION_1": {
            "addr": "0x44D7A8",    
			"code": "81 FA 0064FFFF",
		},
        "X_LEFT_POS_CORRECTION_2": {
            "addr": "0x44D7B0",
			"code": "C7 87 EC050000 0064FFFF",
		},
        "X_RIGHT_POS_CORRECTION_1": {
            "addr": "0x44D7C2",
			"code": "C7 44 24 14 009C0000",
		},
        "X__RIGHT_POS_CORRECTION_2": {
            "addr": "0x44D7CA",
			"code": "81 FA 009C0000",
		},
		"Y_UP_POS_CORRECTION_1": {
			"addr": "0x44D7DB",
			"code": "81 F9 70FDFFFF",
		},
		"Y_UP_POS_CORRECTION_2": {
			"addr": "0x44D7E3",
			"code": "C7 87 F0050000 70FDFFFF",
		},
		"Y_DOWN_POS_CORRECTION": {
			"addr": "0x44D7F5",
			"code": "BA 00E10000",      
		},
 
        "post_spell_time_clear_time_int": {
            "addr": "0x431247",
            "code": "C7 45 E4 00009C43"
        },  
        "post_spell_time_fix_clear_time_decimal": {
            "addr": "0x431355",
            "code": "C7 45 E4 0000B243"
        },  
        "post_spell_time_real_time_int": {
            "addr": "0x431393",
            "code": "C7 45 E4 00009C43"
        }, 
        "post_spell_time_real_time_dec": {
            "addr": "0x4313E8",
            "code": "C7 45 E4 0000B243"
        },

        "stage_clear_ascii_pos": {
            "addr": "0x43118A",
            "code": "C7 45 D8 0000A043"
        }
	}
}
