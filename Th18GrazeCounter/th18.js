{
    "binhacks": { 
        "grazehud": {
            "addr": "0x43D50F", 
            "code": "E9 [codecave:makegrazehud] 90",
            // "ignore": true,
        },
    },
    codecaves: {
        makegrazehud: {
            code: "\
            50 \
            E8 [0x419DD0] \
            8B 0D ACF24C00 \
            C7 45 EC 00006043 \
            C7 81 28920100 b5b5b5FF \
            C7 81 2C920100 FFFFFFFF \
            8B 47 4C \
            0FB6 80 27050000 \
            88 81 2B920100 \
            8B 47 4C \
            0FB6 80 27050000 \
            88 81 2F920100 \
            8D 45 E8 \
            FF 35 0CCD4C00 \
            50 \
            E8 [0x419DD0] \
            E9 [0x43D515] \
            ",
            // push eax
            // call 00419DD0
            // mov ecx,[004CF2AC] // ASCII_MANAGER_PTR
            // mov [ebp-14],43600000 // Y POS
            // mov [ecx+00019228],FF707070 // primary color
            // mov [ecx+0001922C],FFFFFFFF // outline color
            // mov eax,[edi+4C]
            // movzx eax,byte ptr [eax+00000527]
            // mov [ecx+0001922B],al // primary color alphaTime
            // mov eax,[edi+4C]
            // movzx eax,byte ptr [eax+00000527]
            // mov [ecx+0001922F],al // outline color alphaTime
            // lea eax,[ebp-18]
            // push [004CCD0C]
            // push eax
            // call 00419DD0
        },
    },
}
