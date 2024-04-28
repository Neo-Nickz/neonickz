{
    "binhacks": {
        no_sakuya_opt_angle: {
            addr: "0x45DB18",
            code: "E9[0x45DBA8]"
        },
        sakuya_freeze_opt_on_focus_jmp: {
            addr: "0x45BCDA",
            code: "E9[codecave:sakuya_freeze_opt_on_focus_cave] 90"
        }
    },
    "codecaves": {
        sakuya_freeze_opt_on_focus_cave: {
            access: "rx",
            code: "F6467802 7512 833D<0x4CCCF4>02 750E F605<0x4CA428>08 7405 E9[0x45BD0B] E9[0x45BCE0]"
        }
    }
}