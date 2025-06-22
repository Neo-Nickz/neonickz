{
	"binhacks": {
		wide_playfield_camera3_width: {
            addr: "0x44E58B",
            code: "C7 86 AC060000 80020000"
        },
		wide_playfield_camera3_height: {
            addr: "0x44E595",
            code: "C7 86 B0060000 E0010000"
        },
		wide_playfield_camera3_x_center: {
            addr: "0x44e565",
            code: "F3 0F5C 05 {f32:640}"
        },
		wide_playfield_camera3_y_center: {
            addr: "0x44e59f",
            code: "F3 0F5C 05 {f32:480}"
        },
		wide_playfield_camera2_unk_x: {
            addr: "0x44e457",
            code: "<nop:6>"
        },
        wide_playfield_camera2_unk_y: {
            addr: "0x44e471",
            code: "<nop:6>"
        },
		wide_playfield_camera2_unk_width: {
            addr: "0x44e47f",
            code: "F3 0F59 05 {f32:640}"
        },
        wide_playfield_camera2_unk_height: {
            addr: "0x44e499",
            code: "F3 0F59 05 {f32:480}"
        },
		wide_playfield_camera1_x: {
            addr: "0x44e4e3",
            code: "<nop:6>"
        },
        wide_playfield_camera1_y: {
            addr: "0x44e4fd",
            code: "<nop:6>"
        },
		wide_playfield_camera1_width: {
            addr: "0x44e50b",
            code: "F3 0F59 05 {f32:640}"
        },
        wide_playfield_camera1_height: {
            addr: "0x44e525",
            code: "F3 0F59 05 {f32:480}"
        },
        
        wide_playfield_bullet_offscreen_width1: {
            addr: "0x419990", 
            code: "F3 0F10 05 {f32:-330}"
        },
        wide_playfield_bullet_offscreen_width2: {
            addr: "0x4199a5", 
            code: "0F2F 15 {f32:330}"
        },
        wide_playfield_bullet_offscreen_height: {
            addr: "0x4199da",
            code: "0F2F 15 {f32:490}"
        },
        wide_playfield_laser_offscreen_width1: {
            addr: "0x443369",
            code: "F3 0F10 35 {f32:-320}"
        },
        wide_playfield_laser_offscreen_width2: {
            addr: "0x44338B", 
            code: "F3 0F10 3D {f32:320}"
        },

        enemy_x_left_check: {
            addr: "0x427835",
            code: "F3 0F10 05 {f32:-330}"
        },
        enemy_x_right_check: {
            addr: "0x427851",
            code: "0F2F 15 {f32:330}"
        },


        "change_exbounce_x_bounds": {
        	"addr": "0x41B5FC",
        	"code": "C7 83 F8100000 00002044", 
        },
        "change_exbounce_y_bounds": {
        	"addr": "0x41B606", 
        	"code": "C7 83 FC100000 0000F043",
        },
        // "change_exwrap_x_left_bounds_1": {
        // 	"addr": "0x41A380",
        // 	"code": "F3 0F10 35 {f32:-310}", 
        // },
        // "change_exwrap_x_right_bounds_1": {
        // 	"addr": "0x41A388",
        // 	"code": "F3 0F10 3D {f32:310}", 
        // },
        // "change_exwrap_y_down_bounds": {
        // 	"addr": "0x41A390", 
        // 	"code": "F3 0F10 25 {f32:470}",
        // },
        // "exwrap_thing_1": {
        //     "addr": "0x41A3B3",
        //     "code": "F3 0F59 2D {f32:1}", 
        // },
        // "exwrap_thing_2": {
        //     "addr": "0x41A3DE",
        //     "code": "F3 0F59 35 {f32:1}", 
        // },
        // "exwrap_thing_3": {
        //     "addr": "0x41A3F3",
        //     "code": "F3 0F10 3D {f32:1}", 
        // },
        // "exwrap_thing_4": {
        //     "addr": "0x41A40A",
        //     "code": "F3 0F10 35 {f32:1}", 
        // },
        // "change_exwrap_x_left_bounds_2": {
        //     "addr": "0x41A46A", 
        //     "code": "F3 0F58 15 {f32:640}", 
        // },
        // "change_exwrap_x_right_bounds_2": {
        // 	"addr": "0x41A489",
        // 	"code": "F3 0F58 15 {f32:640}", 
        // },

		"disable_shot_delete_based_on_res": {
            "addr": ["0x4592d9", "0x459301"],
            "code": "<nop:2>",
        },

        "X_LEFT_POS_CORRECTION_1": {
            "addr": "0x454589",
            "code": "3D 0064FFFF"
        },
        "X_LEFT_POS_CORRECTION_2": {
            "addr": "0x454590",
            "code": "C7 87 24060000 0064FFFF"
        },
        "X_RIGHT_POS_CORRECTION_1": {
            "addr": "0x45459C",
            "code": "3D 009C0000"
        },
        "X_RIGHT_CORRECTION_2": {
            "addr": "0x4545A3",
            "code": "C7 87 24060000 009C0000"
        },
        "Y_UP_POS_CORRECTION_1": {
            "addr": "0x4545B3",
            "code": "3D 70FDFFFF"
        },
        "Y_UP_POS_CORRECTION_2": {
            "addr": "0x4545BA",
            "code": "C7 87 28060000 70FDFFFF"
        },
        "Y_DOWN_POS_CORRECTION_1": {
            "addr": "0x4545C6",
            "code": "3D 00E10000"
        },
        "Y_DOWN_POS_CORRECTION_2": {
            "addr": "0x4545CD",
            "code": "C7 87 28060000 00E10000"
        },

        "change_new_chap_ascii_pos_1": {
            "addr": "0x436AC2",
            "code": "C7 45 E0 0000C043"
        },
        "change_new_chap_ascii_pos_2": {
            "addr": "0x436B40",
            "code": "C7 45 E0 0000C043"
        },
        "change_new_chap_ascii_pos_3": {
            "addr": "0x436B6D",
            "code": "C7 45 E0 0000C043"
        },

        "post_spell_time_clear_time_int": {
            "addr": "0x436C49",
            "code": "C7 45 E0 00009C43"
        },
        "post_spell_time_fix_clear_time_decimal": {
            "addr": "0x436CF7",
            "code": "C7 45 E0 0000B243"
        },
        "post_spell_time_real_time_int": {
            "addr": "0x436D7A",
            "code": "C7 45 E0 00009C43"
        },
        "post_spell_time_real_time_dec": {
            "addr": "0x436DDA",
            "code": "C7 45 E0 0000B243"
        },

        "stage_clear_ascii_pos": {
            "addr": "0x4369CD",
            "code": "C7 45 E0 0000A043"
        }
	}
}
