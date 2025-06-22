#pragma mapfile "C:\\TouhouTools\\map\\any.anmm"

entry {
    path: "player/pl02/pl03.png",
    img_width: 256,
    img_height: 512,
    img_format: FORMAT_ARGB_4444,
    sprites: {
        sprite0: {x: 1.0, y: 1.0, w: 30.0, h: 46.0},
        sprite1: {x: 33.0, y: 1.0, w: 30.0, h: 46.0},
        sprite2: {x: 65.0, y: 1.0, w: 30.0, h: 46.0},
        sprite3: {x: 97.0, y: 1.0, w: 30.0, h: 46.0},
        sprite4: {x: 129.0, y: 1.0, w: 30.0, h: 46.0},
        sprite5: {x: 161.0, y: 1.0, w: 30.0, h: 46.0},
        sprite6: {x: 193.0, y: 1.0, w: 30.0, h: 46.0},
        sprite7: {x: 225.0, y: 1.0, w: 30.0, h: 46.0},
        sprite8: {x: 1.0, y: 49.0, w: 30.0, h: 46.0},
        sprite9: {x: 33.0, y: 49.0, w: 30.0, h: 46.0},
        sprite10: {x: 65.0, y: 49.0, w: 30.0, h: 46.0},
        sprite11: {x: 97.0, y: 49.0, w: 30.0, h: 46.0},
        sprite12: {x: 129.0, y: 49.0, w: 30.0, h: 46.0},
        sprite13: {x: 161.0, y: 49.0, w: 30.0, h: 46.0},
        sprite14: {x: 193.0, y: 49.0, w: 30.0, h: 46.0},
        sprite15: {x: 225.0, y: 49.0, w: 30.0, h: 46.0},
        sprite16: {x: 1.0, y: 97.0, w: 30.0, h: 46.0},
        sprite17: {x: 33.0, y: 97.0, w: 30.0, h: 46.0},
        sprite18: {x: 65.0, y: 97.0, w: 30.0, h: 46.0},
        sprite19: {x: 97.0, y: 97.0, w: 30.0, h: 46.0},
        sprite20: {x: 129.0, y: 97.0, w: 30.0, h: 46.0},
        sprite21: {x: 161.0, y: 97.0, w: 30.0, h: 46.0},
        sprite22: {x: 193.0, y: 97.0, w: 30.0, h: 46.0},
        sprite23: {x: 225.0, y: 97.0, w: 30.0, h: 46.0},
        sprite24: {x: 0.0, y: 144.0, w: 16.0, h: 16.0},
        sprite25: {x: 16.0, y: 144.0, w: 16.0, h: 16.0},
        sprite26: {x: 32.0, y: 144.0, w: 16.0, h: 16.0},
        sprite27: {x: 48.0, y: 144.0, w: 16.0, h: 16.0},
        sprite28: {x: 0.0, y: 416.0, w: 32.0, h: 32.0},
        sprite29: {x: 32.0, y: 416.0, w: 32.0, h: 32.0},
        sprite30: {x: 64.0, y: 416.0, w: 32.0, h: 32.0},
        sprite31: {x: 96.0, y: 416.0, w: 32.0, h: 32.0},
        sprite32: {x: 0.0, y: 448.0, w: 32.0, h: 64.0},
        sprite33: {x: 32.0, y: 448.0, w: 32.0, h: 64.0},
        sprite34: {x: 64.0, y: 448.0, w: 32.0, h: 64.0},
        sprite35: {x: 96.0, y: 448.0, w: 32.0, h: 64.0},
        sprite36: {x: 240.0, y: 144.0, w: 16.0, h: 16.0},
        sprite37: {x: 0.0, y: 160.0, w: 64.0, h: 64.0},
        sprite38: {x: 64.0, y: 160.0, w: 64.0, h: 64.0},
        sprite39: {x: 128.0, y: 160.0, w: 64.0, h: 64.0},
        sprite40: {x: 192.0, y: 160.0, w: 64.0, h: 64.0},
        sprite41: {x: 0.0, y: 224.0, w: 64.0, h: 64.0},
        sprite42: {x: 64.0, y: 224.0, w: 64.0, h: 64.0},
        sprite43: {x: 128.0, y: 224.0, w: 64.0, h: 64.0},
        sprite44: {x: 192.0, y: 224.0, w: 64.0, h: 64.0},
        sprite45: {x: 0.0, y: 288.0, w: 64.0, h: 64.0},
        sprite46: {x: 64.0, y: 288.0, w: 64.0, h: 64.0},
        sprite47: {x: 128.0, y: 288.0, w: 64.0, h: 64.0},
        sprite48: {x: 192.0, y: 288.0, w: 64.0, h: 64.0},
        sprite49: {x: 0.0, y: 352.0, w: 64.0, h: 64.0},
        sprite50: {x: 64.0, y: 352.0, w: 64.0, h: 64.0},
        sprite51: {x: 128.0, y: 352.0, w: 64.0, h: 64.0},
        sprite52: {x: 192.0, y: 352.0, w: 64.0, h: 64.0},
    },
}


script 0 script0 {
    loop {
        sprite(sprite0);
+5: // 5
        sprite(sprite1);
+5: // 10
        sprite(sprite2);
+5: // 15
        sprite(sprite3);
+5: // 20
        sprite(sprite4);
+5: // 25
        sprite(sprite5);
+5: // 30
        sprite(sprite6);
+5: // 35
        sprite(sprite7);
+5: // 40
    }
}


script 1 script1 {
    sprite(sprite8);
+1: // 1
    sprite(sprite9);
+1: // 2
    sprite(sprite10);
+1: // 3
    sprite(sprite11);
    loop {
+1: // 4
        sprite(sprite12);
+5: // 9
        sprite(sprite13);
+5: // 14
        sprite(sprite14);
+5: // 19
        sprite(sprite15);
+4: // 23
    }
}


script 2 script2 {
    sprite(sprite11);
+1: // 1
    sprite(sprite10);
+1: // 2
    sprite(sprite9);
+1: // 3
    sprite(sprite8);
    loop {
        sprite(sprite0);
+5: // 8
        sprite(sprite1);
+5: // 13
        sprite(sprite2);
+5: // 18
        sprite(sprite3);
+5: // 23
        sprite(sprite4);
+5: // 28
        sprite(sprite5);
+5: // 33
        sprite(sprite6);
+5: // 38
        sprite(sprite7);
+5: // 43
    }
}


script 3 script3 {
    sprite(sprite16);
+1: // 1
    sprite(sprite17);
+1: // 2
    sprite(sprite18);
+1: // 3
    sprite(sprite19);
+1: // 4
    sprite(sprite20);
    loop {
+5: // 9
        sprite(sprite21);
+5: // 14
        sprite(sprite22);
+5: // 19
        sprite(sprite23);
+4: // 23
    }
}


script 4 script4 {
    sprite(sprite19);
+1: // 1
    sprite(sprite18);
+1: // 2
    sprite(sprite17);
+1: // 3
    sprite(sprite16);
    loop {
        sprite(sprite0);
+5: // 8
        sprite(sprite1);
+5: // 13
        sprite(sprite2);
+5: // 18
        sprite(sprite3);
+5: // 23
        sprite(sprite4);
+5: // 28
        sprite(sprite5);
+5: // 33
        sprite(sprite6);
+5: // 38
        sprite(sprite7);
+5: // 43
    }
}


script 5 script5 {
    layer(13);
    sprite(sprite24);
    resampleMode(1);
    scale(1.5, 1.5);

    type(1);
    alpha(192);
    zWriteDisable(1);
    rotateAuto(1);
    stop();

interrupt[1]:
    layer(15);
    alpha(192);
    blendMode(1);
    rgb(255, 255, 128);
    sprite(sprite25);
+8: // 8
    sprite(sprite26);
+8: // 16
    sprite(sprite27);
+8: // 24
    delete();
}


script 6 script6 {
    layer(13);
    type(1);
    zWriteDisable(1);
    scriptNew(script8);
    scale(1.5, 1.5);
    rotate(0.0, 0.0, -1.5707964);
    sprite(sprite53);
+2: // 2
    sprite(sprite54);
+2: // 4
    sprite(sprite55);
+2: // 6
    sprite(sprite56);
+2: // 8
    sprite(sprite57);
+2: // 10
    sprite(sprite58);
+2: // 12
    sprite(sprite59);
+2: // 14
    sprite(sprite60);
+2: // 16
    delete();
}


script 7 script7 {
    layer(13);
    type(1);
    zWriteDisable(1);
    scriptNew(script9);
    rotate(0.0, 0.0, -1.5707964);
    scale(1.5, -1.5);
    sprite(sprite53);
+2: // 2
    sprite(sprite54);
+2: // 4
    sprite(sprite55);
+2: // 6
    sprite(sprite56);
+2: // 8
    sprite(sprite57);
+2: // 10
    sprite(sprite58);
+2: // 12
    sprite(sprite59);
+2: // 14
    sprite(sprite60);
+2: // 16
    delete();
}


script 8 script8 {
    layer(13);
    type(1);
    zWriteDisable(1);
    blendMode(1);
    scale(1.1, 1.1);
    layer(10);
    sprite(sprite53);
+2: // 2
    sprite(sprite54);
+2: // 4
    sprite(sprite55);
+2: // 6
    sprite(sprite56);
+2: // 8
    sprite(sprite57);
+2: // 10
    sprite(sprite58);
+2: // 12
    sprite(sprite59);
+2: // 14
    sprite(sprite60);
+2: // 16
    delete();
}


script 9 script9 {
    layer(13);
    type(1);
    zWriteDisable(1);
    blendMode(1);
    scale(1.1, 1.1);
    layer(10);
    sprite(sprite53);
+2: // 2
    sprite(sprite54);
+2: // 4
    sprite(sprite55);
+2: // 6
    sprite(sprite56);
+2: // 8
    sprite(sprite57);
+2: // 10
    sprite(sprite58);
+2: // 12
    sprite(sprite59);
+2: // 14
    sprite(sprite60);
+2: // 16
    delete();
}


script 10 script10 {
    layer(13);
    type(1);
    zWriteDisable(1);
    scale(1.5, 1.5);
    scriptNew(script12);
    rotate(0.0, 0.0, -1.5707964);
    sprite(sprite61);
+2: // 2
    sprite(sprite62);
+2: // 4
    sprite(sprite63);
+2: // 6
    sprite(sprite64);
+2: // 8
    sprite(sprite65);
+2: // 10
    sprite(sprite66);
+2: // 12
    sprite(sprite67);
+2: // 14
    sprite(sprite68);
+2: // 16
    delete();
}


script 11 script11 {
    layer(13);
    type(1);
    zWriteDisable(1);
    scriptNew(script13);
    rotate(0.0, 0.0, -1.5707964);
    scale(1.5, -1.5);
    sprite(sprite61);
+2: // 2
    sprite(sprite62);
+2: // 4
    sprite(sprite63);
+2: // 6
    sprite(sprite64);
+2: // 8
    sprite(sprite65);
+2: // 10
    sprite(sprite66);
+2: // 12
    sprite(sprite67);
+2: // 14
    sprite(sprite68);
+2: // 16
    delete();
}


script 12 script12 {
    layer(13);
    type(1);
    zWriteDisable(1);
    blendMode(1);
    scale(1.1, 1.1);
    layer(10);
    sprite(sprite61);
+2: // 2
    sprite(sprite62);
+2: // 4
    sprite(sprite63);
+2: // 6
    sprite(sprite64);
+2: // 8
    sprite(sprite65);
+2: // 10
    sprite(sprite66);
+2: // 12
    sprite(sprite67);
+2: // 14
    sprite(sprite68);
+2: // 16
    delete();
}


script 13 script13 {
    layer(13);
    type(1);
    zWriteDisable(1);
    blendMode(1);
    scale(1.1, 1.1);
    layer(10);
    sprite(sprite61);
+2: // 2
    sprite(sprite62);
+2: // 4
    sprite(sprite63);
+2: // 6
    sprite(sprite64);
+2: // 8
    sprite(sprite65);
+2: // 10
    sprite(sprite66);
+2: // 12
    sprite(sprite67);
+2: // 14
    sprite(sprite68);
+2: // 16
    delete();
}


script 14 script14 {
    layer(13);
    sprite(sprite28);
    resampleMode(1);
    scale(1.5, 1.5);
    type(1);
    alpha(136);
    zWriteDisable(1);
    rotateAuto(1);
    stop();

interrupt[1]:
    layer(15);
    alpha(192);
    blendMode(1);
    rgb(255, 255, 128);
    sprite(sprite29);
+8: // 8
    sprite(sprite30);
+8: // 16
    sprite(sprite31);
+8: // 24
    delete();
}


script 15 script15 {
    layer(13);
    sprite(sprite32);
    resampleMode(1);
    scale(1.5, 1.5);
    type(1);
    alpha(136);
    zWriteDisable(1);
    rotateAuto(1);
    stop();

interrupt[1]:
    layer(15);
    alpha(192);
    blendMode(1);
    rgb(255, 255, 128);
    sprite(sprite33);
+8: // 8
    sprite(sprite34);
+8: // 16
    sprite(sprite35);
+8: // 24
    delete();
}


script 16 script16 {
    alpha(0);
    loop {
        scriptNew(script17);
+4: // 4
    }

interrupt[1]:
+4: // 8
    delete();
}


script 17 script17 {
    layer(13);
    blendMode(1);
    type(1);

interrupt[2]:
    scale(1.0 + 0.5, 1.0 + 0.5);
    scaleTime(10, 1, 0.0, 0.0);
    sprite(sprite36);
    F0 = RANDRAD / 20.0;
    F0 += -1.5707964;
    F1 = RANDF * 32.0;
    F1 += 32.0;
    ins_433(16, 1, F0, F1);
+16: // 16
    delete();
}


script 18 script18 {
    layer(10);
    blendMode(2);
    type(1);

interrupt[2]:
    rgb(255, 192, 128);
    sprite(sprite36);
    scale(1.5 + 0.5, 1.5 + 0.5);
    stop();

interrupt[1]:
    scaleTime(10, 0, 0.0, 0.0);
+10: // 10
    delete();
}


script 19 script19 {
    layer(13);
    type(0);
    resampleMode(1);
    pos(0.0, -8.0, 0.0);
    loop {
        scale(1.2 * 2.0, 1.2 * 2.0);
        sprite(sprite37);
+3: // 3
        sprite(sprite38);
+3: // 6
        sprite(sprite39);
+3: // 9
        sprite(sprite40);
+3: // 12
        sprite(sprite41);
+3: // 15
        sprite(sprite42);
+3: // 18
        sprite(sprite43);
+3: // 21
        sprite(sprite44);
+3: // 24
    }

interrupt[2]:
    pos(0.0, -20.0, 0.0);
    loop {
        scale(1.5 * 2.0, 1.5 * 2.0);
        sprite(sprite37);
+3: // 27
        sprite(sprite38);
+3: // 30
        sprite(sprite39);
+3: // 33
        sprite(sprite40);
+3: // 36
        sprite(sprite41);
+3: // 39
        sprite(sprite42);
+3: // 42
        sprite(sprite43);
+3: // 45
        sprite(sprite44);
+3: // 48
    }
}


script 20 script20 {
    layer(13);
    type(0);
    resampleMode(1);
    pos(0.0, -8.0, 0.0);
    loop {
        scale(1.2 * 2.0, 1.2 * 2.0);
        sprite(sprite45);
+3: // 3
        sprite(sprite46);
+3: // 6
        sprite(sprite47);
+3: // 9
        sprite(sprite48);
+3: // 12
        sprite(sprite49);
+3: // 15
        sprite(sprite50);
+3: // 18
        sprite(sprite51);
+3: // 21
        sprite(sprite52);
+3: // 24
    }

interrupt[2]:
    pos(0.0, -20.0, 0.0);
    loop {
        scale(1.5 * 2.0, 1.5 * 2.0);
        sprite(sprite45);
+3: // 27
        sprite(sprite46);
+3: // 30
        sprite(sprite47);
+3: // 33
        sprite(sprite48);
+3: // 36
        sprite(sprite49);
+3: // 39
        sprite(sprite50);
+3: // 42
        sprite(sprite51);
+3: // 45
        sprite(sprite52);
+3: // 48
    }
}


script 21 script21 {
    layer(13);
    type(1);
    sprite(sprite0);
    rgb(60, 0, 255);
    alphaTime(30, 0, 0);
+30: // 30
    delete();
}


script 22 script22 {
    layer(13);
    type(1);
    zWriteDisable(1);
    F0 = RANDRADREP / 8.0;
    F0 += -1.5707964;
    rotate(0.0, 0.0, F0);
    scale(2.0, 2.0);
    sprite(sprite53);
+2: // 2
    sprite(sprite54);
+2: // 4
    sprite(sprite55);
+2: // 6
    sprite(sprite56);
+2: // 8
    sprite(sprite57);
+2: // 10
    sprite(sprite58);
+2: // 12
    sprite(sprite59);
+2: // 14
    sprite(sprite60);
+2: // 16
    delete();
}


script 23 script23 {
    layer(13);
    type(1);
    zWriteDisable(1);
    F0 = RANDRADREP / 8.0;
    F0 += -1.5707964;
    rotate(0.0, 0.0, F0);
    scale(2.0, -2.0);
    sprite(sprite53);
+2: // 2
    sprite(sprite54);
+2: // 4
    sprite(sprite55);
+2: // 6
    sprite(sprite56);
+2: // 8
    sprite(sprite57);
+2: // 10
    sprite(sprite58);
+2: // 12
    sprite(sprite59);
+2: // 14
    sprite(sprite60);
+2: // 16
    delete();
}


script 24 script24 {
    layer(13);
    type(1);
    zWriteDisable(1);
    F0 = RANDRADREP / 8.0;
    F0 += -1.5707964;
    rotate(0.0, 0.0, F0);
    scale(2.3, 2.3);
    sprite(sprite61);
+2: // 2
    sprite(sprite62);
+2: // 4
    sprite(sprite63);
+2: // 6
    sprite(sprite64);
+2: // 8
    sprite(sprite65);
+2: // 10
    sprite(sprite66);
+2: // 12
    sprite(sprite67);
+2: // 14
    sprite(sprite68);
+2: // 16
    delete();
}


script 25 script25 {
    layer(13);
    type(1);
    zWriteDisable(1);
    F0 = RANDRADREP / 8.0;
    F0 += -1.5707964;
    rotate(0.0, 0.0, F0);
    scale(2.3, -2.3);
    sprite(sprite61);
+2: // 2
    sprite(sprite62);
+2: // 4
    sprite(sprite63);
+2: // 6
    sprite(sprite64);
+2: // 8
    sprite(sprite65);
+2: // 10
    sprite(sprite66);
+2: // 12
    sprite(sprite67);
+2: // 14
    sprite(sprite68);
+2: // 16
    delete();
}


entry {
    path: "player/pl02/pl03c.png",
    img_width: 512,
    img_height: 512,
    img_format: FORMAT_ARGB_4444,
    memory_priority: 0,
    sprites: {
        sprite53: {x: 0.0, y: 0.0, w: 128.0, h: 256.0},
        sprite54: {x: 128.0, y: 0.0, w: 128.0, h: 256.0},
        sprite55: {x: 256.0, y: 0.0, w: 128.0, h: 256.0},
        sprite56: {x: 384.0, y: 0.0, w: 128.0, h: 256.0},
        sprite57: {x: 0.0, y: 256.0, w: 128.0, h: 256.0},
        sprite58: {x: 128.0, y: 256.0, w: 128.0, h: 256.0},
        sprite59: {x: 256.0, y: 256.0, w: 128.0, h: 256.0},
        sprite60: {x: 384.0, y: 256.0, w: 128.0, h: 256.0},
    },
}


entry {
    path: "player/pl02/pl03d.png",
    img_width: 512,
    img_height: 512,
    img_format: FORMAT_ARGB_4444,
    memory_priority: 0,
    sprites: {
        sprite61: {x: 0.0, y: 0.0, w: 128.0, h: 256.0},
        sprite62: {x: 128.0, y: 0.0, w: 128.0, h: 256.0},
        sprite63: {x: 256.0, y: 0.0, w: 128.0, h: 256.0},
        sprite64: {x: 384.0, y: 0.0, w: 128.0, h: 256.0},
        sprite65: {x: 0.0, y: 256.0, w: 128.0, h: 256.0},
        sprite66: {x: 128.0, y: 256.0, w: 128.0, h: 256.0},
        sprite67: {x: 256.0, y: 256.0, w: 128.0, h: 256.0},
        sprite68: {x: 384.0, y: 256.0, w: 128.0, h: 256.0},
    },
}


entry {
    path: "player/pl02/pl02d.png",
    img_width: 256,
    img_height: 64,
    memory_priority: 0,
    sprites: {
        sprite69: {x: 0.0, y: 0.0, w: 320.0, h: 16.0},
        sprite70: {x: 0.0, y: 32.0, w: 32.0, h: 32.0},
    },
}


script 26 script26 {
    alpha(0);
    scriptNew(script27);
    scriptNew(script28);
    scriptNew(script29);
    stop();

interrupt[1]:
+4: // 4
    delete();
}


script 27 script27 {
    layer(5);
    type(1);
    sprite(sprite69);
    blendMode(1);
    anchor(1, 0);
    alpha(192);
    scrollX(-0.06);
    scale(0.0, 0.0);
    scaleTime(30, 0, 1.0, 1.0);
    zoomOut(0.0, 1.0);
    zoomOutTime(30, 0, 1.0, 1.0);
    stop();

interrupt[1]:
    alpha(4);
+30: // 30
    delete();
}


script 28 script28 {
    layer(5);
    type(1);
    sprite(sprite69);
    blendMode(1);
    anchor(1, 0);
    scrollX(-0.015);
    alpha(128);
    scale(0.0, 0.0);
    scaleTime(30, 0, 1.0, 2.0);
    zoomOut(0.0, 1.0);
    zoomOutTime(30, 0, 1.0, 2.0);
    stop();

interrupt[1]:
    alpha(4);
+30: // 30
    delete();
}


script 29 script29 {
    layer(5);
    type(1);
    sprite(sprite70);
    blendMode(1);
    scale(0.0, 0.0);
    scaleTime(30, 0, 2.0, 2.0);
    angleVel(0.0, 0.0, 0.3926991);
    stop();

interrupt[1]:
+1: // 1
    delete();
}


script 30 script30 {
    sprite(-1);
    layer(5);
    drawPoly(1.0, 32);
    alpha(64);
    blendMode(2);
    rgb(32, 224, 255);
    rgb2(128, 224, 255);
    alpha2(0);
    scaleTime(60, 1, 600.0, 600.0);
+40: // 40
    alpha2Time(20, 0, 64);
    rgbTime(250, 0, 355, 255, 32);
    rgb2Time(250, 0, 255, 255, 32);
    alphaTime(250, 0, 128);
    alpha2Time(250, 0, 128);
    stop();

interrupt[1]:
    alphaTime(20, 0, 0);
+20: // 60
    delete();
}


entry {
    path: "face/pl02/face_pl02no.png",
    img_width: 222,
    img_height: 189,
    offset_x: 230,
    offset_y: 27,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite71: {x: 0.0, y: 0.0, w: 222.0, h: 189.0}},
}


entry {
    path: "face/pl02/face_pl02n2.png",
    img_width: 222,
    img_height: 189,
    offset_x: 230,
    offset_y: 27,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite72: {x: 0.0, y: 0.0, w: 222.0, h: 189.0}},
}


entry {
    path: "face/pl02/face_pl02hp.png",
    img_width: 222,
    img_height: 189,
    offset_x: 230,
    offset_y: 27,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite73: {x: 0.0, y: 0.0, w: 222.0, h: 189.0}},
}


entry {
    path: "face/pl02/face_pl02an.png",
    img_width: 222,
    img_height: 189,
    offset_x: 230,
    offset_y: 27,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite74: {x: 0.0, y: 0.0, w: 222.0, h: 189.0}},
}


entry {
    path: "face/pl02/face_pl02sw.png",
    img_width: 222,
    img_height: 189,
    offset_x: 230,
    offset_y: 27,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite75: {x: 0.0, y: 0.0, w: 222.0, h: 189.0}},
}


entry {
    path: "face/pl02/face_pl02dp.png",
    img_width: 222,
    img_height: 189,
    offset_x: 230,
    offset_y: 27,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite76: {x: 0.0, y: 0.0, w: 222.0, h: 189.0}},
}


entry {
    path: "face/pl02/face_pl02pr.png",
    img_width: 222,
    img_height: 189,
    offset_x: 230,
    offset_y: 27,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite77: {x: 0.0, y: 0.0, w: 222.0, h: 189.0}},
}


entry {
    path: "face/pl02/face_pl02sp.png",
    img_width: 222,
    img_height: 189,
    offset_x: 230,
    offset_y: 27,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite78: {x: 0.0, y: 0.0, w: 222.0, h: 189.0}},
}


entry {
    path: "face/dummy.png",
    img_width: 4,
    img_height: 4,
    img_format: FORMAT_GRAY_8,
    memory_priority: 0,
    sprites: {sprite79: {x: 0.0, y: 0.0, w: 4.0, h: 4.0}},
}


entry {
    path: "face/pl02/face_pl02no_b.png",
    img_width: 222,
    img_height: 189,
    offset_x: 230,
    offset_y: 27,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite80: {x: 0.0, y: 0.0, w: 222.0, h: 189.0}},
}


entry {
    path: "face/pl02/face_pl02n2_b.png",
    img_width: 222,
    img_height: 189,
    offset_x: 230,
    offset_y: 27,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite81: {x: 0.0, y: 0.0, w: 222.0, h: 189.0}},
}


entry {
    path: "face/pl02/face_pl02hp_b.png",
    img_width: 222,
    img_height: 189,
    offset_x: 230,
    offset_y: 27,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite82: {x: 0.0, y: 0.0, w: 222.0, h: 189.0}},
}


entry {
    path: "face/pl02/face_pl02an_b.png",
    img_width: 222,
    img_height: 189,
    offset_x: 230,
    offset_y: 27,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite83: {x: 0.0, y: 0.0, w: 222.0, h: 189.0}},
}


entry {
    path: "face/pl02/face_pl02sw_b.png",
    img_width: 222,
    img_height: 189,
    offset_x: 230,
    offset_y: 27,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite84: {x: 0.0, y: 0.0, w: 222.0, h: 189.0}},
}


entry {
    path: "face/pl02/face_pl02dp_b.png",
    img_width: 222,
    img_height: 189,
    offset_x: 230,
    offset_y: 27,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite85: {x: 0.0, y: 0.0, w: 222.0, h: 189.0}},
}


entry {
    path: "face/pl02/face_pl02pr_b.png",
    img_width: 222,
    img_height: 189,
    offset_x: 230,
    offset_y: 27,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite86: {x: 0.0, y: 0.0, w: 222.0, h: 189.0}},
}


entry {
    path: "face/pl02/face_pl02sp_b.png",
    img_width: 222,
    img_height: 189,
    offset_x: 230,
    offset_y: 27,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite87: {x: 0.0, y: 0.0, w: 222.0, h: 189.0}},
}


entry {
    path: "face/dummy.png",
    img_width: 4,
    img_height: 4,
    img_format: FORMAT_GRAY_8,
    memory_priority: 0,
    sprites: {sprite88: {x: 0.0, y: 0.0, w: 4.0, h: 4.0}},
}


entry {
    path: "face/pl02/face_pl02bs_b.png",
    img_width: 700,
    img_height: 700,
    offset_x: 110,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite89: {x: 0.0, y: 0.0, w: 700.0, h: 700.0}},
}


entry {
    path: "face/pl02/face_pl02bs.png",
    img_width: 700,
    img_height: 700,
    offset_x: 110,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {
        sprite90: {x: 0.0, y: 0.0, w: 700.0, h: 700.0},
        sprite91: {x: 0.0, y: 0.0, w: 0.0, h: 0.0},
    },
}


script 31 script31 {
    sprite(sprite90);
    anchor(1, 1);
    ins_431(1);
    alpha(0);
    alphaTime(15, 0, 255);
    pos(-96.0, 276.0, 0.0);
    layer(25);
    resolutionMode(2);
    resampleMode(1);

interrupt[3]:
    layer(26);
    resolutionMode(2);
    posTime(15, 2, -64.0, 276.0, 0.0);
    rgbTime(15, 0, 96, 96, 96);
+15: // 15
    stop();

interrupt[2]:
    layer(27);
    resolutionMode(2);
    posTime(15, 5, 0.0, 260.0, 0.0);
    rgbTime(15, 0, 255, 255, 255);
+15: // 30
    stop();

interrupt[7]:
    posTime(2, 0, -8.0, 252.0, 0.0);
+2: // 32
    posTime(2, 0, -4.0, 264.0, 0.0);
+2: // 34
    posTime(2, 0, 8.0, 256.0, 0.0);
+2: // 36
    posTime(2, 0, 4.0, 268.0, 0.0);
+2: // 38
    posTime(2, 0, 0.0, 252.0, 0.0);
+2: // 40
    posTime(2, 0, -8.0, 264.0, 0.0);
+2: // 42
    posTime(2, 0, -4.0, 256.0, 0.0);
+2: // 44
    posTime(2, 0, 8.0, 268.0, 0.0);
+2: // 46
    posTime(2, 0, -4.0, 256.0, 0.0);
+2: // 48
    posTime(2, 0, 0.0, 264.0, 0.0);
+15: // 63
    stop();

interrupt[8]:
    layer(27);
    resolutionMode(2);
    posTime(15, 2, -64.0, 276.0, 0.0);
    rgbTime(15, 0, 96, 96, 240);
+15: // 78
    stop();

interrupt[1]:
    posTime(30, 6, -96.0, 276.0, 0.0);
    alphaTime(30, 0, 0);
+30: // 108
    delete();

interrupt[17]:
interrupt[18]:
interrupt[19]:
interrupt[20]:
interrupt[21]:
interrupt[22]:
interrupt[23]:
interrupt[24]:
    sprite(sprite90);
    caseReturn();

interrupt[27]:
interrupt[28]:
interrupt[29]:
interrupt[30]:
interrupt[31]:
interrupt[32]:
interrupt[33]:
interrupt[34]:
    sprite(sprite89);
    caseReturn();

interrupt[25]:
    sprite(sprite91);
    caseReturn();
}


script 32 script32 {
    layer(25);
    sprite(sprite71);
    anchor(1, 1);
    ins_431(1);
    alpha(0);
    alphaTime(15, 0, 255);
    pos(24.0, 303.0, 0.0);
    layer(25);
    resolutionMode(2);
    resampleMode(1);

interrupt[3]:
    layer(26);
    resolutionMode(2);
    posTime(15, 2, 56.0, 303.0, 0.0);
    rgbTime(15, 0, 96, 96, 96);
+15: // 15
    stop();

interrupt[2]:
    layer(27);
    resolutionMode(2);
    posTime(15, 5, 120.0, 287.0, 0.0);
    rgbTime(15, 0, 255, 255, 255);
+15: // 30
    stop();

interrupt[7]:
    posTime(2, 0, 112.0, 279.0, 0.0);
+2: // 32
    posTime(2, 0, 116.0, 291.0, 0.0);
+2: // 34
    posTime(2, 0, 128.0, 283.0, 0.0);
+2: // 36
    posTime(2, 0, 124.0, 295.0, 0.0);
+2: // 38
    posTime(2, 0, 120.0, 279.0, 0.0);
+2: // 40
    posTime(2, 0, 112.0, 291.0, 0.0);
+2: // 42
    posTime(2, 0, 116.0, 283.0, 0.0);
+2: // 44
    posTime(2, 0, 128.0, 295.0, 0.0);
+2: // 46
    posTime(2, 0, 116.0, 283.0, 0.0);
+2: // 48
    posTime(2, 0, 120.0, 291.0, 0.0);
+15: // 63
    stop();

interrupt[8]:
    layer(27);
    resolutionMode(2);
    posTime(15, 2, 56.0, 303.0, 0.0);
    rgbTime(15, 0, 96, 96, 240);
+15: // 78
    stop();

interrupt[1]:
    posTime(30, 6, 24.0, 303.0, 0.0);
    alphaTime(30, 0, 0);
+30: // 108
    delete();

interrupt[17]:
    sprite(sprite71);
    caseReturn();

interrupt[18]:
    sprite(sprite72);
    caseReturn();

interrupt[19]:
    sprite(sprite73);
    caseReturn();

interrupt[20]:
    sprite(sprite74);
    caseReturn();

interrupt[21]:
    sprite(sprite75);
    caseReturn();

interrupt[22]:
    sprite(sprite76);
    caseReturn();

interrupt[23]:
    sprite(sprite77);
    caseReturn();

interrupt[24]:
    sprite(sprite78);
    caseReturn();

interrupt[25]:
    sprite(sprite91);
    caseReturn();

interrupt[27]:
    sprite(sprite80);
    caseReturn();

interrupt[28]:
    sprite(sprite81);
    caseReturn();

interrupt[29]:
    sprite(sprite82);
    caseReturn();

interrupt[30]:
    sprite(sprite83);
    caseReturn();

interrupt[31]:
    sprite(sprite84);
    caseReturn();

interrupt[32]:
    sprite(sprite85);
    caseReturn();

interrupt[33]:
    sprite(sprite86);
    caseReturn();

interrupt[34]:
    sprite(sprite87);
    caseReturn();

interrupt[35]:
    sprite(sprite91);
    caseReturn();
}


script 33 script33 {
-1:
    alpha(0);
    layer(24);
    resolutionMode(2);
    pos(0.0, 0.0, 0.0);
0:
    scriptNewFront(script32);
    scriptNewFront(script31);
    stop();

interrupt[1]:
+30: // 30
    delete();
}
