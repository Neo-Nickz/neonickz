#pragma mapfile "C:\\TouhouTools\\map\\any.anmm"

entry {
    path: "player/pl02/pl02.png",
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
        sprite36: {x: 0.0, y: 224.0, w: 32.0, h: 32.0},
        sprite37: {x: 32.0, y: 224.0, w: 32.0, h: 32.0},
        sprite38: {x: 64.0, y: 224.0, w: 32.0, h: 32.0},
        sprite39: {x: 96.0, y: 224.0, w: 32.0, h: 32.0},
        sprite40: {x: 64.0, y: 144.0, w: 16.0, h: 16.0},
        sprite41: {x: 80.0, y: 144.0, w: 16.0, h: 16.0},
        sprite42: {x: 96.0, y: 144.0, w: 16.0, h: 16.0},
        sprite43: {x: 112.0, y: 144.0, w: 16.0, h: 16.0},
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
        scale(1.5, 1.5);
    alpha(180);
    zWriteDisable(1);
    rotateAuto(1);
    sprite(sprite24);
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
    scale(0.0, 1.0 + 0.5);
    scaleTime(4, 0, 1.0 + 0.5, 1.0  + 0.5);
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
    scaleTime(4, 0, 0.1 + 0.5, 1.0 + 0.5);
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
    scale(0.5 + 0.5, 0.5+ 0.5) ;
    scaleTime(20, 4, 3.8 + 0.5, 3.8 + 0.5);
    sprite(sprite36);
+5: // 11
    sprite(sprite37);
+5: // 16
    sprite(sprite38);
+5: // 21
    sprite(sprite39);
+5: // 26
    delete();
}


script 9 script9 {
    layer(15);
    type(1);
    alpha(96);
    zWriteDisable(1);
    scale(1.0 + 0.5, 1.0 + 0.5);
    sprite(sprite36);
    stop();
+4: // 4
    sprite(sprite37);
+4: // 8
    sprite(sprite38);
+4: // 12
    sprite(sprite39);
+4: // 16
    delete();
}


script 10 script10 {
    layer(13);
    blendMode(1);
    type(3);

interrupt[2]:
    scale(0.0, 0.0);
    scaleTime(10, 4, 1.9000001, 1.9000001);
    sprite(sprite40);
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
    scaleTime(10, 4, 1.9000001, 1.9000001);

    sprite(sprite41);
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
    sprite(sprite40);
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
    sprite(sprite41);
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


script 14 script14 {
    layer(6);
    sprite(sprite44);
    scrollY(0.015);
    scrollYTime(200, 0, 0.05);
    scriptNew(script15);
    alpha(0);
    alphaTime(40, 0, 255);
    pos(224.0, 240.0, 0.0);
    stop();

interrupt[1]:
+1: // 1
    delete();
}


script 15 script15 {
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


script 16 script16 {
    layer(6);
    alpha(0);
    scriptNew(script17);
    scriptNew(script18);
    scriptNew(script19);
+280: // 280
    delete();
}


script 17 script17 {
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


script 18 script18 {
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


script 19 script19 {
    sprite(-1);
    layer(13);
    blendMode(1);
    blendMode(4);
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


script 20 script20 {
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
    path: "face/pl02/face_pl02no.png",
    img_width: 276,
    img_height: 244,
    offset_x: 42,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite46: {x: 0.0, y: 0.0, w: 276.0, h: 244.0}},
}


entry {
    path: "face/pl02/face_pl02n2.png",
    img_width: 276,
    img_height: 244,
    offset_x: 42,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite47: {x: 0.0, y: 0.0, w: 276.0, h: 244.0}},
}


entry {
    path: "face/pl02/face_pl02hp.png",
    img_width: 276,
    img_height: 244,
    offset_x: 42,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite48: {x: 0.0, y: 0.0, w: 276.0, h: 244.0}},
}


entry {
    path: "face/pl02/face_pl02an.png",
    img_width: 276,
    img_height: 244,
    offset_x: 42,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite49: {x: 0.0, y: 0.0, w: 276.0, h: 244.0}},
}


entry {
    path: "face/pl02/face_pl02sw.png",
    img_width: 276,
    img_height: 244,
    offset_x: 42,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite50: {x: 0.0, y: 0.0, w: 276.0, h: 244.0}},
}


entry {
    path: "face/pl02/face_pl02dp.png",
    img_width: 276,
    img_height: 244,
    offset_x: 42,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite51: {x: 0.0, y: 0.0, w: 276.0, h: 244.0}},
}


entry {
    path: "face/pl02/face_pl02pr.png",
    img_width: 276,
    img_height: 244,
    offset_x: 42,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite52: {x: 0.0, y: 0.0, w: 276.0, h: 244.0}},
}


entry {
    path: "face/pl02/face_pl02sp.png",
    img_width: 276,
    img_height: 244,
    offset_x: 42,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite53: {x: 0.0, y: 0.0, w: 276.0, h: 244.0}},
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
    path: "face/pl02/face_pl02bs.png",
    img_width: 380,
    img_height: 630,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {
        sprite55: {x: 0.0, y: 0.0, w: 380.0, h: 630.0},
        sprite56: {x: 0.0, y: 0.0, w: 0.0, h: 0.0},
    },
}


script 21 script21 {
    sprite(sprite55);
    anchor(1, 1);
    ins_431(1);
    alpha(0);
    alphaTime(15, 0, 255);
    pos(-96.0, 346.0, 0.0);
    layer(25);
    resolutionMode(2);
    resampleMode(1);

interrupt[3]:
    layer(26);
    resolutionMode(2);
    posTime(15, 2, -64.0, 346.0, 0.0);
    rgbTime(15, 0, 96, 96, 96);
+15: // 15
    stop();

interrupt[2]:
    layer(26);
    resolutionMode(2);
    posTime(15, 5, 0.0, 330.0, 0.0);
    rgbTime(15, 0, 255, 255, 255);
+15: // 30
    stop();

interrupt[7]:
    posTime(2, 0, -8.0, 322.0, 0.0);
+2: // 32
    posTime(2, 0, -4.0, 334.0, 0.0);
+2: // 34
    posTime(2, 0, 8.0, 326.0, 0.0);
+2: // 36
    posTime(2, 0, 4.0, 338.0, 0.0);
+2: // 38
    posTime(2, 0, 0.0, 322.0, 0.0);
+2: // 40
    posTime(2, 0, -8.0, 334.0, 0.0);
+2: // 42
    posTime(2, 0, -4.0, 326.0, 0.0);
+2: // 44
    posTime(2, 0, 8.0, 338.0, 0.0);
+2: // 46
    posTime(2, 0, -4.0, 326.0, 0.0);
+2: // 48
    posTime(2, 0, 0.0, 334.0, 0.0);
+15: // 63
    stop();

interrupt[8]:
    layer(26);
    resolutionMode(2);
    posTime(15, 2, -64.0, 346.0, 0.0);
    rgbTime(15, 0, 96, 96, 240);
+15: // 78
    stop();

interrupt[1]:
    posTime(30, 6, -96.0, 346.0, 0.0);
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


script 22 script22 {
    layer(25);
    sprite(sprite46);
    anchor(1, 1);
    ins_431(1);
    alpha(0);
    alphaTime(15, 0, 255);
    pos(-54.0, 346.0, 0.0);
    layer(25);
    resolutionMode(2);
    resampleMode(1);

interrupt[3]:
    layer(26);
    resolutionMode(2);
    posTime(15, 2, -22.0, 346.0, 0.0);
    rgbTime(15, 0, 96, 96, 96);
+15: // 15
    stop();

interrupt[2]:
    layer(26);
    resolutionMode(2);
    posTime(15, 5, 42.0, 330.0, 0.0);
    rgbTime(15, 0, 255, 255, 255);
+15: // 30
    stop();

interrupt[7]:
    posTime(2, 0, 34.0, 322.0, 0.0);
+2: // 32
    posTime(2, 0, 38.0, 334.0, 0.0);
+2: // 34
    posTime(2, 0, 50.0, 326.0, 0.0);
+2: // 36
    posTime(2, 0, 46.0, 338.0, 0.0);
+2: // 38
    posTime(2, 0, 42.0, 322.0, 0.0);
+2: // 40
    posTime(2, 0, 34.0, 334.0, 0.0);
+2: // 42
    posTime(2, 0, 38.0, 326.0, 0.0);
+2: // 44
    posTime(2, 0, 50.0, 338.0, 0.0);
+2: // 46
    posTime(2, 0, 38.0, 326.0, 0.0);
+2: // 48
    posTime(2, 0, 42.0, 334.0, 0.0);
+15: // 63
    stop();

interrupt[8]:
    layer(26);
    resolutionMode(2);
    posTime(15, 2, -22.0, 346.0, 0.0);
    rgbTime(15, 0, 96, 96, 240);
+15: // 78
    stop();

interrupt[1]:
    posTime(30, 6, -54.0, 346.0, 0.0);
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
}


script 23 script23 {
-1:
    alpha(0);
    layer(24);
    resolutionMode(2);
    pos(10.0, 0.0, 0.0);
0:
    scriptNewFront(script22);
    scriptNewFront(script21);
    stop();

interrupt[1]:
+30: // 30
    delete();
}
