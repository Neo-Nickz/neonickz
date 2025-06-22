{
    "options": {
        "ToutetsuC1EtBreakSubName": {
            "type": "s",
            "val": "Ecl_EtBreakLv1"
        }
    },
	"binhacks": {
		wide_playfield_camera3_width: {
            addr: "0x44582b",
            code: "C7 86 9C 06 00 00 80 02 00 00"
        }, 
		wide_playfield_camera3_height: {
            addr: "0x445835",
            code: "C7 86 A0 06 00 00 E0 01 00 00"
        },
		wide_playfield_camera3_x_center: {
            addr: "0x445805",
            code: "F3 0F5C 05 {f32:640}"
        },
		wide_playfield_camera3_y_center: {
            addr: "0x44583f",
            code: "F3 0F5C 05 {f32:480}"
        },
		wide_playfield_camera2_unk_x: {
            addr: "0x4456f7",
            code: "<nop:6>"
        },
        wide_playfield_camera2_unk_y: {
            addr: "0x445711",
            code: "<nop:6>"
        },
		wide_playfield_camera2_unk_width: {
            addr: "0x44571f",
            code: "F3 0F59 05 {f32:640}"
        },
        wide_playfield_camera2_unk_height: {
            addr: "0x445739",
            code: "F3 0F59 05 {f32:480}"
        },
		wide_playfield_camera1_x: {
            addr: "0x445783",
            code: "<nop:6>"
        },
        wide_playfield_camera1_y: {
            addr: "0x44579d",
            code: "<nop:6>"
        },
		wide_playfield_camera1_width: {
            addr: "0x4457ab",
            code: "F3 0F59 05 {f32:640}"
        },
        wide_playfield_camera1_height: {
            addr: "0x4457c5",
            code: "F3 0F59 05 {f32:480}"
        },
        
        wide_playfield_bullet_offscreen_width1: {
            addr: "0x4130d3",
            code: "F3 0F10 05 {f32:-330}"
        },
        wide_playfield_bullet_offscreen_width2: {
            addr: "0x4130f0",
            code: "0F2F 1D {f32:330}"
        },
        wide_playfield_bullet_offscreen_height: {
            addr: "0x413125",
            code: "0F2F 1D {f32:490}"
        },
        "change_scorefile": {
            "addr": "0x4C7090",
            "code": "74 68 31 34 33 61 64 66 2E 64 61 74 00 00 00 00"
        },
        "wide_playerfield_laser_offscreen_height_1": {
            "addr": "0x43AAA3",
            "code": "F3 0F10 3D {f32:520}"
        },
        "wide_playerfield_laser_offscreen_height_2": {
            "addr": "0x43AA81",
            "code": "F3 0F10 35 {f32:-520}"
        },
        "change_laser_curve_bounds_y": {
            "addr": "0x43FA84",
            "code": "F3 0F10 25 {f32:640}"
        },
        "change_laser_curve_bounds_x": {
            "addr": "0x43FA8C",
            "code": "F3 0F10 1D {f32:640}"
        },
        "change_laser_curve_bounds_x_2": {
            "addr": "0x43FA79",
            "code": "F3 0F10 2D {f32:-640}"
        },
        "change_exbounce_x_bounds": {
        	"addr": "0x414aa6",
        	"code": "C7 86 7C100000 00002044", 
        },
        "change_exbounce_y_bounds": {
        	"addr": "0x414ab0", 
        	"code": "C7 86 80100000 0000F043",
        },

        "itemgap_change_final_gap_pos_1": {
            "addr": "0x459A73",
            "code": "C7 44 24 14 0000AA43",
        },
        "itemgap_change_final_gap_pos_2": {
            "addr": "0x459A7D",
            "code": "C7 44 24 14 0000AAC3 ",
        },
        "itemgap_change_cangap_1": {
            "addr": "0x4592F0",
            "code": "F3 0F10 05 {f32:-310}", 
        },
        "itemgap_change_cangap_2": {
            "addr": "0x45949D",     
            "code": "0F2F 0D {f32:310}",
        },
		"disable_shot_delete_based_on_res": {
            "addr": ["0x45131b", "0x451343"],
            "code": "<nop:2>",
        },
    
        "X_LEFT_POS_CORRECTION_1": {
            "addr": "0x44D0AC", 
			"code": "81 FA 0064FFFF",
		},
        "X_LEFT_POS_CORRECTION_2": {
            "addr": "0x44D0B4",
			"code": "C7 87 EC 05 00 00 00 64 FF FF",
		},
        "X_RIGHT_POS_CORRECTION_1": {
            "addr": "0x44D0C0",
			"code": "81 FA 00 9C 00 00",
		},
        "X__RIGHT_POS_CORRECTION_2": {
            "addr": "0x44D0C8",  
			"code": "C7 87 EC 05 00 00 00 9C 00 00",
		},
		"Y_UP_POS_CORRECTION_1": {
			"addr": "0x44D0D2",
			"code": "81 F9 70FDFFFF",
		},
		"Y_UP_POS_CORRECTION_2": {
			"addr": "0x44D0DA",
			"code": "C7 87 F0050000 70FDFFFF",
		},
		"Y_DOWN_POS_CORRECTION_1": {
			"addr": "0x44D0E6",
			"code": "81 F9 00 E1 00 00",
		},
		"Y_DOWN_POS_CORRECTION_2": {
			"addr": "0x44D0EE",
			"code": "C7 87 F0050000 00E10000",
		},
	}
}
