#pragma mapfile "C:\\TouhouTools\\map\\any.anmm"

entry {
    path: "player/pl03/pl03.png",
    img_width: 256,
    img_height: 256,
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
        sprite24: {x: 192.0, y: 176.0, w: 64.0, h: 16.0},
        sprite25: {x: 16.0, y: 144.0, w: 16.0, h: 16.0},
        sprite26: {x: 192.0, y: 192.0, w: 16.0, h: 16.0},
        sprite27: {x: 208.0, y: 192.0, w: 16.0, h: 16.0},
        sprite28: {x: 224.0, y: 192.0, w: 16.0, h: 16.0},
        sprite29: {x: 240.0, y: 192.0, w: 16.0, h: 16.0},
        sprite30: {x: 0.0, y: 160.0, w: 64.0, h: 16.0},
        sprite31: {x: 64.0, y: 160.0, w: 64.0, h: 16.0},
        sprite32: {x: 128.0, y: 160.0, w: 64.0, h: 16.0},
        sprite33: {x: 192.0, y: 160.0, w: 64.0, h: 16.0},
        sprite34: {x: 1.0, y: 177.0, w: 30.0, h: 30.0},
        sprite35: {x: 32.0, y: 144.0, w: 16.0, h: 16.0},
        sprite36: {x: 64.0, y: 144.0, w: 16.0, h: 16.0},
        sprite37: {x: 80.0, y: 144.0, w: 16.0, h: 16.0},
        sprite38: {x: 96.0, y: 144.0, w: 16.0, h: 16.0},
        sprite39: {x: 112.0, y: 144.0, w: 16.0, h: 16.0},
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
-1:
    layer(13);
    type(1);
    alpha(120);
    zWriteDisable(1);
    rotateAuto(1);
    sprite(sprite24);
    scale(1.5, 1.5);
0:
    stop();

interrupt[1]:
    layer(15);
    blendMode(1);
    scaleTime(20, 0, 2.0 + 0.5, 2.0 + 0.5);
    type(1);
    sprite(sprite26);
+5: // 5
    sprite(sprite27);
+5: // 10
    sprite(sprite28);
+5: // 15
    sprite(sprite29);
+5: // 20
    delete();
}


script 6 script6 {
    layer(13);
    type(1);
    blendMode(1);
    zWriteDisable(1);
    rotateAuto(1);
    anchor(2, 0);
    scale(0.0, 1.0 * 1.5);
    scaleTime(4, 0, 1.0 * 1.5, 1.0 * 1.5);
    loop {
        sprite(sprite30);
+4: // 4
        sprite(sprite31);
+4: // 8
        sprite(sprite32);
+4: // 12
        sprite(sprite33);
+4: // 16
    }

interrupt[2]:
    scriptNew(script7);
    scaleTime(4, 0, 0.1, 1.0 + 0.5);
+4: // 20
    scaleTime(6, 0, 1.0 + 0.5, 1.0 + 0.5);
+6: // 26
    caseReturn();

interrupt[1]:
    layer(15);
    anchor(2, 0);
    blendMode(1);
    type(1);
    sprite(sprite30);
    scaleTime(20, 0, 0.0, 1.0 + 0.5);
+20: // 46
    delete();
}


script 7 script7 {
    layer(13);
    type(1);
    sprite(sprite25);
    blendMode(1);
    scale(0.0, 0.0);
    scaleTime(4, 0, 3.0 + 0.5, 3.0 + 0.5);
+8: // 8
    scaleTime(4, 0, 0.0, 0.0);
+4: // 12
    delete();
}


script 8 script8 {
    layer(13);
    type(1);
    alpha(192);
    zWriteDisable(1);
    rotateAuto(1);
    scale(1.0 + 0.5, 1.0 + 0.5);
    sprite(sprite34);
    loop {
        scaleTime(4, 9, 1.2 + 0.5, 1.2 + 0.5);
+3: // 3
        scaleTime(4, 9, 1.0 + 0.5, 1.0 + 0.5);
+3: // 6
    }
    stop();

interrupt[1]:
    layer(15);
    type(1);
    alpha(128);
    zWriteDisable(1);
    scale(1.0 + 0.5, 1.0 + 0.5);
    sprite(sprite25);
    alpha(255);
    scale(0.12 + 0.5, 0.12 + 0.5);
    scaleTime(20, 4, 1.0 + 0.5, 1.0 + 0.5);
    alphaTime(20, 1, 64);
    sprite(sprite40);
+5: // 11
    sprite(sprite41);
+5: // 16
    sprite(sprite42);
+5: // 21
    sprite(sprite43);
+5: // 26
    delete();
}


script 9 script9 {
    layer(15);
    type(1);
    alpha(96);
    zWriteDisable(1);
    scale(0.25 + 0.5, 0.25 + 0.5);
    sprite(sprite40);
    stop();
+4: // 4
    sprite(sprite41);
+4: // 8
    sprite(sprite42);
+4: // 12
    sprite(sprite43);
+4: // 16
    delete();
}


script 10 script10 {
    layer(13);
    blendMode(1);
    type(3);

interrupt[2]:
    scale(0.0, 0.0);
    scaleTime(10, 4, 1.4 + 0.5, 1.4 + 0.5);
    sprite(sprite36);
+10: // 10
    scaleTime(6, 1, 1.0 + 0.5, 1.0 + 0.5);
+6: // 16
    blendMode(0);
    loop {
        scaleTime(15, 9, 0.8 + 0.5, 0.8 + 0.5);
+15: // 31
        scaleTime(15, 9, 1.0 + 0.5, 1.0 + 0.5);
+15: // 46
    }
    stop();

interrupt[3]:
    scaleTime(20, 4, 0.0, 0.0);
+20: // 66
    stop();

interrupt[1]:
    blendMode(1);
    scaleTime(20, 4, 0.0, 3.0);
+20: // 86
    delete();
}


script 11 script11 {
    layer(13);
    blendMode(1);
    type(1);

interrupt[2]:
    scale(0.0, 0.0);
    scaleTime(10, 4, 1.4 + 0.5, 1.4 + 0.5);
    sprite(sprite37);
+10: // 10
    scaleTime(6, 1, 1.0 + 0.5, 1.0 + 0.5);
+6: // 16
    blendMode(0);
    loop {
        scaleTime(15, 9, 0.8 + 0.5, 0.8 + 0.5);
+15: // 31
        scaleTime(15, 9, 1.0 + 0.5, 1.0 + 0.5);
+15: // 46
    }
    stop();

interrupt[3]:
    scaleTime(20, 4, 0.0, 0.0);
+20: // 66
    stop();

interrupt[1]:
    blendMode(1);
    scaleTime(20, 4, 0.0, 3.0);
+20: // 86
    delete();
}


script 12 script12 {
    layer(13);
    type(1);
    blendMode(1);

interrupt[2]:
    alpha(0);
    sprite(sprite36);
    scaleTime(10, 0, 1.5 + 1.0, 1.5 + 1.0);
    alphaTime(10, 0, 128);
    stop();

interrupt[3]:
    scaleTime(20, 4, 0.0, 0.0);
+20: // 20
    stop();

interrupt[1]:
+10: // 30
    delete();
}


script 13 script13 {
    layer(13);
    type(1);

interrupt[2]:
    blendMode(1);
    alpha(0);
    sprite(sprite37);
    scaleTime(10, 0, 1.5 + 1.0, 1.5 + 1.0);
    alphaTime(10, 0, 128);
    stop();

interrupt[3]:
    scaleTime(20, 4, 0.0, 0.0);
+20: // 20
    stop();

interrupt[1]:
+10: // 30
    delete();
}


script 14 script14 {
    layer(13);
    type(1);
    sprite(sprite0);
    rgb(60, 0, 192);
    alphaTime(20, 0, 0);
+20: // 20
    delete();
}


entry {
    path: "player/pl03/pl03c.png",
    img_width: 512,
    img_height: 128,
    memory_priority: 0,
    sprites: {
        sprite40: {x: 0.0, y: 0.0, w: 128.0, h: 128.0},
        sprite41: {x: 128.0, y: 0.0, w: 128.0, h: 128.0},
        sprite42: {x: 256.0, y: 0.0, w: 128.0, h: 128.0},
        sprite43: {x: 384.0, y: 0.0, w: 128.0, h: 128.0},
    },
}


entry {
    path: "player/pl02/pl02b.png",
    img_width: 256,
    img_height: 256,
    memory_priority: 0,
    sprites: {
        sprite44: {x: 192.0, y: 0.0, w: 384.0, h: 448.0},
        sprite45: {x: 0.0, y: 0.0, w: 256.0, h: 300.0},
    },
}


script 15 script15 {
    layer(6);
    sprite(sprite44);
    scrollY(0.015);
    scrollYTime(200, 0, 0.05);
    scriptNew(script16);
    alpha(0);
    alphaTime(40, 0, 255);
    pos(224.0, 240.0, 0.0);
    stop();

interrupt[1]:
+1: // 1
    delete();
}


script 16 script16 {
    layer(13);
    sprite(sprite45);
    blendMode(1);
    scrollY(0.02);
    scrollYTime(200, 0, 0.08);
    scale(1.5, 1.5);
    alpha(0);
    alphaTime(40, 0, 255);
    stop();

interrupt[1]:
+1: // 1
    delete();
}


script 17 script17 {
    layer(6);
    alpha(0);
    scriptNew(script18);
    scriptNew(script19);
    scriptNew(script20);
+280: // 280
    delete();
}


script 18 script18 {
    sprite(-1);
    layer(13);
    blendMode(1);
    pos(0.0000000000000009797175, -16.0, 0.0);
    drawPoly(1.0, 32);
    rgb(128, 255, 192);
    alpha(1);
    alphaTime(192, 1, 255);
    rgb2(0, 255, 255);
    alpha2(0);
    alpha2Time(180, 0, 255);
    scale(16.0, 16.0);
    scaleTime(180, 3, 64.0, 64.0);
+180: // 180
    scaleTime(20, 1, 480.0, 480.0);
    alpha2Time(20, 0, 32);
+60: // 240
    alphaTime(40, 0, 0);
    alpha2Time(40, 0, 0);
+40: // 280
    delete();

interrupt[1]:
    alphaTime(20, 0, 0);
+20: // 300
    delete();
}


script 19 script19 {
    sprite(-1);
    layer(13);
    blendMode(1);
    pos(13.856406, 8.0, 0.0);
    drawPoly(1.0, 32);
    rgb(128, 192, 255);
    alpha(1);
    alphaTime(192, 1, 255);
    rgb2(224, 192, 255);
    alpha2(0);
    alpha2Time(180, 0, 255);
    scale(16.0, 16.0);
    scaleTime(180, 3, 64.0, 64.0);
+180: // 180
    scaleTime(20, 1, 480.0, 480.0);
    alpha2Time(20, 0, 32);
+60: // 240
    alphaTime(40, 0, 0);
    alpha2Time(40, 0, 0);
+40: // 280
    delete();

interrupt[1]:
    alphaTime(20, 0, 0);
+20: // 300
    delete();
}


script 20 script20 {
    sprite(-1);
    layer(13);
    blendMode(1);
    pos(-13.856406, 8.0, 0.0);
    drawPoly(1.0, 32);
    rgb(255, 192, 192);
    alpha(1);
    alphaTime(192, 1, 255);
    rgb2(128, 128, 255);
    alpha2(0);
    alpha2Time(180, 0, 255);
    scale(16.0, 16.0);
    scaleTime(180, 3, 64.0, 64.0);
+180: // 180
    scaleTime(20, 1, 480.0, 480.0);
    alpha2Time(20, 0, 32);
+60: // 240
    alphaTime(40, 0, 0);
    alpha2Time(40, 0, 0);
+40: // 280
    delete();

interrupt[1]:
    alphaTime(20, 0, 0);
+20: // 300
    delete();
}


script 21 script21 {
    layer(6);
    alpha(0);
    scriptNew(script18);
    scriptNew(script19);
    scriptNew(script20);
+60: // 60
    scriptNew(script22);
    scriptNew(script23);
    scriptNew(script24);
+60: // 120
    scriptNew(script18);
    scriptNew(script19);
    scriptNew(script20);
+280: // 400
    delete();
}


script 22 script22 {
    sprite(-1);
    layer(13);
    blendMode(1);
    blendMode(4);
    blendMode(2);
    pos(0.0000000000000009797175, 16.0, 0.0);
    drawPoly(1.0, 32);
    rgb(128, 255, 192);
    alpha(1);
    alphaTime(192, 1, 255);
    rgb2(0, 255, 255);
    alpha2(0);
    alpha2Time(180, 0, 255);
    scale(16.0, 16.0);
    scaleTime(180, 3, 64.0, 64.0);
+180: // 180
    scaleTime(20, 1, 480.0, 480.0);
    alpha2Time(20, 0, 32);
+60: // 240
    alphaTime(40, 0, 0);
    alpha2Time(40, 0, 0);
+40: // 280
    delete();

interrupt[1]:
    alphaTime(20, 0, 0);
+20: // 300
    delete();
}


script 23 script23 {
    sprite(-1);
    layer(13);
    blendMode(1);
    blendMode(4);
    blendMode(2);
    pos(-13.856406, -8.0, 0.0);
    drawPoly(1.0, 32);
    rgb(128, 192, 255);
    alpha(1);
    alphaTime(192, 1, 255);
    rgb2(224, 192, 255);
    alpha2(0);
    alpha2Time(180, 0, 255);
    scale(16.0, 16.0);
    scaleTime(180, 3, 64.0, 64.0);
+180: // 180
    scaleTime(20, 1, 480.0, 480.0);
    alpha2Time(20, 0, 32);
+60: // 240
    alphaTime(40, 0, 0);
    alpha2Time(40, 0, 0);
+40: // 280
    delete();

interrupt[1]:
    alphaTime(20, 0, 0);
+20: // 300
    delete();
}


script 24 script24 {
    sprite(-1);
    layer(13);
    blendMode(1);
    blendMode(4);
    blendMode(2);
    pos(13.856406, -8.0, 0.0);
    drawPoly(1.0, 32);
    rgb(255, 192, 192);
    alpha(1);
    alphaTime(192, 1, 255);
    rgb2(128, 128, 255);
    alpha2(0);
    alpha2Time(180, 0, 255);
    scale(16.0, 16.0);
    scaleTime(180, 3, 64.0, 64.0);
+180: // 180
    scaleTime(20, 1, 480.0, 480.0);
    alpha2Time(20, 0, 32);
+60: // 240
    alphaTime(40, 0, 0);
    alpha2Time(40, 0, 0);
+40: // 280
    delete();

interrupt[1]:
    alphaTime(20, 0, 0);
+20: // 300
    delete();
}


script 25 script25 {
    sprite(-1);
    layer(12);
    drawPoly(1.0, 32);
    blendMode(2);
    rgb(0, 255, 128);
    rgb2(255, 224, 0);
    alpha(255);
    alpha2(255);
    scaleTime(60, 1, 600.0, 600.0);
+40: // 40
    alpha2Time(20, 0, 64);
    alphaTime(250, 0, 64);
    alpha2Time(250, 0, 64);
    stop();

interrupt[1]:
    alphaTime(20, 0, 0);
+20: // 60
    delete();
}


entry {
    path: "face/pl03/face_pl03no.png",
    img_width: 263,
    img_height: 247,
    offset_x: 117,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite46: {x: 0.0, y: 0.0, w: 263.0, h: 247.0}},
}


entry {
    path: "face/pl03/face_pl03n2.png",
    img_width: 263,
    img_height: 247,
    offset_x: 117,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite47: {x: 0.0, y: 0.0, w: 263.0, h: 247.0}},
}


entry {
    path: "face/pl03/face_pl03hp.png",
    img_width: 263,
    img_height: 247,
    offset_x: 117,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite48: {x: 0.0, y: 0.0, w: 263.0, h: 247.0}},
}


entry {
    path: "face/pl03/face_pl03an.png",
    img_width: 263,
    img_height: 247,
    offset_x: 117,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite49: {x: 0.0, y: 0.0, w: 263.0, h: 247.0}},
}


entry {
    path: "face/pl03/face_pl03sw.png",
    img_width: 263,
    img_height: 247,
    offset_x: 117,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite50: {x: 0.0, y: 0.0, w: 263.0, h: 247.0}},
}


entry {
    path: "face/pl03/face_pl03dp.png",
    img_width: 263,
    img_height: 247,
    offset_x: 117,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite51: {x: 0.0, y: 0.0, w: 263.0, h: 247.0}},
}


entry {
    path: "face/pl03/face_pl03pr.png",
    img_width: 263,
    img_height: 247,
    offset_x: 117,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite52: {x: 0.0, y: 0.0, w: 263.0, h: 247.0}},
}


entry {
    path: "face/pl03/face_pl03sp.png",
    img_width: 263,
    img_height: 247,
    offset_x: 117,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite53: {x: 0.0, y: 0.0, w: 263.0, h: 247.0}},
}


entry {
    path: "face/dummy.png",
    img_width: 4,
    img_height: 4,
    img_format: FORMAT_GRAY_8,
    memory_priority: 0,
    sprites: {sprite54: {x: 0.0, y: 0.0, w: 4.0, h: 4.0}},
}


entry {
    path: "face/pl03/face_pl03bs.png",
    img_width: 546,
    img_height: 730,
    offset_x: 40,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {
        sprite55: {x: 0.0, y: 0.0, w: 546.0, h: 730.0},
        sprite56: {x: 0.0, y: 0.0, w: 0.0, h: 0.0},
    },
}


script 26 script26 {
    sprite(sprite55);
    anchor(1, 1);
    ins_431(1);
    alpha(0);
    alphaTime(15, 0, 255);
    pos(-96.0, 246.0, 0.0);
    layer(30);
    resolutionMode(2);
    resampleMode(1);

interrupt[3]:
    layer(30);
    resolutionMode(2);
    posTime(15, 2, -64.0, 246.0, 0.0);
    rgbTime(15, 0, 96, 96, 96);
+15: // 15
    stop();

interrupt[2]:
    layer(31);
    resolutionMode(2);
    posTime(15, 5, 0.0, 230.0, 0.0);
    rgbTime(15, 0, 255, 255, 255);
+15: // 30
    stop();

interrupt[7]:
    posTime(2, 0, -8.0, 222.0, 0.0);
+2: // 32
    posTime(2, 0, -4.0, 234.0, 0.0);
+2: // 34
    posTime(2, 0, 8.0, 226.0, 0.0);
+2: // 36
    posTime(2, 0, 4.0, 238.0, 0.0);
+2: // 38
    posTime(2, 0, 0.0, 222.0, 0.0);
+2: // 40
    posTime(2, 0, -8.0, 234.0, 0.0);
+2: // 42
    posTime(2, 0, -4.0, 226.0, 0.0);
+2: // 44
    posTime(2, 0, 8.0, 238.0, 0.0);
+2: // 46
    posTime(2, 0, -4.0, 226.0, 0.0);
+2: // 48
    posTime(2, 0, 0.0, 234.0, 0.0);
+15: // 63
    stop();

interrupt[8]:
    layer(31);
    resolutionMode(2);
    posTime(15, 2, -64.0, 246.0, 0.0);
    rgbTime(15, 0, 96, 96, 240);
+15: // 78
    stop();

interrupt[1]:
    posTime(30, 6, -96.0, 246.0, 0.0);
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
    sprite(sprite55);
    caseReturn();

interrupt[25]:
    sprite(sprite56);
    caseReturn();
}


script 27 script27 {
    layer(30);
    sprite(sprite46);
    anchor(1, 1);
    ins_431(1);
    alpha(0);
    alphaTime(15, 0, 255);
    pos(-19.0, 246.0, 0.0);
    layer(30);
    resolutionMode(2);
    resampleMode(1);

interrupt[3]:
    layer(30);
    resolutionMode(2);
    posTime(15, 2, 13.0, 246.0, 0.0);
    rgbTime(15, 0, 96, 96, 96);
+15: // 15
    stop();

interrupt[2]:
    layer(31);
    resolutionMode(2);
    posTime(15, 5, 77.0, 230.0, 0.0);
    rgbTime(15, 0, 255, 255, 255);
+15: // 30
    stop();

interrupt[7]:
    posTime(2, 0, 69.0, 222.0, 0.0);
+2: // 32
    posTime(2, 0, 73.0, 234.0, 0.0);
+2: // 34
    posTime(2, 0, 85.0, 226.0, 0.0);
+2: // 36
    posTime(2, 0, 81.0, 238.0, 0.0);
+2: // 38
    posTime(2, 0, 77.0, 222.0, 0.0);
+2: // 40
    posTime(2, 0, 69.0, 234.0, 0.0);
+2: // 42
    posTime(2, 0, 73.0, 226.0, 0.0);
+2: // 44
    posTime(2, 0, 85.0, 238.0, 0.0);
+2: // 46
    posTime(2, 0, 73.0, 226.0, 0.0);
+2: // 48
    posTime(2, 0, 77.0, 234.0, 0.0);
+15: // 63
    stop();

interrupt[8]:
    layer(31);
    resolutionMode(2);
    posTime(15, 2, 13.0, 246.0, 0.0);
    rgbTime(15, 0, 96, 96, 240);
+15: // 78
    stop();

interrupt[1]:
    posTime(30, 6, -19.0, 246.0, 0.0);
    alphaTime(30, 0, 0);
+30: // 108
    delete();

interrupt[17]:
    sprite(sprite46);
    caseReturn();

interrupt[18]:
    sprite(sprite47);
    caseReturn();

interrupt[19]:
    sprite(sprite48);
    caseReturn();

interrupt[20]:
    sprite(sprite49);
    caseReturn();

interrupt[21]:
    sprite(sprite50);
    caseReturn();

interrupt[22]:
    sprite(sprite51);
    caseReturn();

interrupt[23]:
    sprite(sprite52);
    caseReturn();

interrupt[24]:
    sprite(sprite53);
    caseReturn();

interrupt[25]:
    sprite(sprite56);
    caseReturn();

interrupt[35]:
    sprite(sprite56);
    caseReturn();
}


script 28 script28 {
-1:
    alpha(0);
    layer(24);
    resolutionMode(2);
    pos(0.0, 0.0, 0.0);
0:
    scriptNew(script26);
    scriptNew(script27);
    stop();

interrupt[1]:
+30: // 30
    delete();
}
