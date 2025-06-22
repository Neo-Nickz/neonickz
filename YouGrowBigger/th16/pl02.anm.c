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
        sprite24: {x: 0.0, y: 160.0, w: 64.0, h: 16.0},
        sprite25: {x: 64.0, y: 160.0, w: 64.0, h: 16.0},
        sprite26: {x: 128.0, y: 160.0, w: 64.0, h: 16.0},
        sprite27: {x: 192.0, y: 160.0, w: 64.0, h: 16.0},
        sprite28: {x: 0.0, y: 144.0, w: 16.0, h: 16.0},
        sprite29: {x: 16.0, y: 144.0, w: 16.0, h: 16.0},
        sprite30: {x: 32.0, y: 144.0, w: 16.0, h: 16.0},
        sprite31: {x: 48.0, y: 144.0, w: 16.0, h: 16.0},
        sprite32: {x: 64.0, y: 144.0, w: 16.0, h: 16.0},
        sprite33: {x: 80.0, y: 144.0, w: 16.0, h: 16.0},
        sprite34: {x: 96.0, y: 144.0, w: 16.0, h: 16.0},
        sprite35: {x: 112.0, y: 144.0, w: 16.0, h: 16.0},
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
    alpha(220);
        scale(1.5, 1.5);

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
    sprite(sprite24);
+5: // 5
    sprite(sprite25);
+5: // 10
    sprite(sprite26);
+5: // 15
    sprite(sprite27);
+5: // 20
    delete();
}


script 6 script6 {
-1:
    layer(13);
    type(1);
    scale(1.5, 1.5);
    alpha(255);
    zWriteDisable(1);
    rotateAuto(1);
    sprite(sprite28);
0:
    stop();

interrupt[1]:
    layer(15);
    blendMode(1);
    scaleTime(20, 0, 2.0 + 0.5, 2.0 + 0.5);
    type(1);
    sprite(sprite28);
+5: // 5
    sprite(sprite29);
+5: // 10
    sprite(sprite30);
+5: // 15
    sprite(sprite31);
+5: // 20
    delete();
}


script 7 script7 {
    layer(13);
    blendMode(1);
    type(3);

interrupt[2]:
    scale(0.0, 0.0);
    scaleTime(10, 4, 1.4 + 0.5, 1.4 + 0.5);
    sprite(sprite32);
+10: // 10
    scaleTime(6, 1, 1.0 + 0.5, 1.0 + 0.5);
+6: // 16
    blendMode(0);
    loop {
        sprite(sprite32);
+4: // 20
        sprite(sprite33);
+4: // 24
        sprite(sprite34);
+4: // 28
        sprite(sprite35);
+4: // 32
    }
    stop();

interrupt[3]:
    scaleTime(20, 4, 0.0, 0.0);
+20: // 52
    stop();

interrupt[1]:
    blendMode(1);
    scaleTime(20, 4, 0.0, 3.0);
+20: // 72
    delete();
}


script 8 script8 {
    layer(13);
    type(1);
    blendMode(1);

interrupt[2]:
    alpha(0);
    sprite(sprite32);
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


script 9 script9 {
    layer(13);
    type(1);
    sprite(sprite0);
    rgb(60, 0, 255);
    alphaTime(30, 0, 0);
+30: // 30
    delete();
}


entry {
    path: "player/pl02/pl02b1.png",
    img_width: 256,
    img_height: 256,
    img_format: FORMAT_ARGB_4444,
    memory_priority: 0,
    sprites: {sprite36: {x: 0.0, y: 0.0, w: 256.0, h: 256.0}},
}


script 10 script10 {
    layer(13);
    blendMode(1);
    type(3);

interrupt[2]:
    scriptNew(script12);
    scriptNew(script11);
    scale(1.7, 1.7);
+340: // 340
    delete();
}


script 11 script11 {
    layer(13);
    blendMode(1);
    type(3);

interrupt[2]:
    scale(0.0, 0.0);
    scaleTime(60, 4, 1.0, 1.0);
    sprite(sprite36);
    alpha(255);
    rgbTime(290, 0, 64, 64, 255);
    angleVel(0.0, 0.0, 0.08726646);
+60: // 60
    scaleTime(240, 4, 1.4, 1.4);
+240: // 300

interrupt[1]:
    alphaTime(30, 0, 0);
+30: // 330
    delete();
    stop();
}


script 12 script12 {
    layer(13);
    blendMode(1);
    type(3);

interrupt[2]:
    scale(0.0, 0.0);
    scaleTime(60, 4, 1.0, 1.0);
    sprite(sprite37);
    alpha(192);
    rgbTime(290, 0, 224, 224, 0);
    angleVel(0.0, 0.0, -0.17453292);
+60: // 60
    scaleTime(240, 4, 1.2, 1.2);
+240: // 300

interrupt[1]:
    alphaTime(30, 0, 0);
+30: // 330
    delete();
    stop();
}


script 13 script13 {
    sprite(-1);
    layer(3);
    drawPoly(1.0, 32);
    alpha(255);
    blendMode(0);
    rgb(32, 32, 128);
    rgb2(128, 32, 32);
    alpha2(0);
    scaleTime(60, 1, 600.0, 600.0);
+40: // 40
    alpha2Time(20, 0, 192);
    rgbTime(250, 0, 0, 0, 255);
    rgb2Time(250, 0, 255, 192, 255);
    alpha2Time(250, 0, 128);
    stop();

interrupt[1]:
    alphaTime(20, 0, 0);
+20: // 60
    delete();
}


entry {
    path: "player/pl02/pl02b2.png",
    img_width: 256,
    img_height: 256,
    img_format: FORMAT_ARGB_4444,
    memory_priority: 0,
    sprites: {sprite37: {x: 0.0, y: 0.0, w: 256.0, h: 256.0}},
}


entry {
    path: "face/pl02/face_pl02no.png",
    img_width: 206,
    img_height: 194,
    offset_x: 89,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite38: {x: 0.0, y: 0.0, w: 206.0, h: 194.0}},
}


entry {
    path: "face/pl02/face_pl02n2.png",
    img_width: 206,
    img_height: 194,
    offset_x: 89,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite39: {x: 0.0, y: 0.0, w: 206.0, h: 194.0}},
}


entry {
    path: "face/pl02/face_pl02hp.png",
    img_width: 206,
    img_height: 194,
    offset_x: 89,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite40: {x: 0.0, y: 0.0, w: 206.0, h: 194.0}},
}


entry {
    path: "face/pl02/face_pl02an.png",
    img_width: 206,
    img_height: 194,
    offset_x: 89,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite41: {x: 0.0, y: 0.0, w: 206.0, h: 194.0}},
}


entry {
    path: "face/pl02/face_pl02sw.png",
    img_width: 206,
    img_height: 194,
    offset_x: 89,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite42: {x: 0.0, y: 0.0, w: 206.0, h: 194.0}},
}


entry {
    path: "face/pl02/face_pl02dp.png",
    img_width: 206,
    img_height: 194,
    offset_x: 89,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite43: {x: 0.0, y: 0.0, w: 206.0, h: 194.0}},
}


entry {
    path: "face/pl02/face_pl02pr.png",
    img_width: 206,
    img_height: 194,
    offset_x: 89,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite44: {x: 0.0, y: 0.0, w: 206.0, h: 194.0}},
}


entry {
    path: "face/pl02/face_pl02sp.png",
    img_width: 206,
    img_height: 194,
    offset_x: 89,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite45: {x: 0.0, y: 0.0, w: 206.0, h: 194.0}},
}


entry {
    path: "face/dummy.png",
    img_width: 4,
    img_height: 4,
    img_format: FORMAT_GRAY_8,
    memory_priority: 0,
    sprites: {sprite46: {x: 0.0, y: 0.0, w: 4.0, h: 4.0}},
}


entry {
    path: "face/pl02/face_pl02bs.png",
    img_width: 450,
    img_height: 620,
    offset_x: 32,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {
        sprite47: {x: 0.0, y: 0.0, w: 450.0, h: 620.0},
        sprite48: {x: 0.0, y: 0.0, w: 0.0, h: 0.0},
    },
}


script 14 script14 {
    sprite(sprite47);
    anchor(1, 1);
    ins_431(1);
    alpha(0);
    alphaTime(15, 0, 255);
    pos(-96.0, 356.0, 0.0);
    layer(25);
    resolutionMode(2);
    resampleMode(1);

interrupt[3]:
    layer(26);
    resolutionMode(2);
    posTime(15, 2, -64.0, 356.0, 0.0);
    rgbTime(15, 0, 96, 96, 96);
+15: // 15
    stop();

interrupt[2]:
    layer(27);
    resolutionMode(2);
    posTime(15, 5, 0.0, 340.0, 0.0);
    rgbTime(15, 0, 255, 255, 255);
+15: // 30
    stop();

interrupt[7]:
    posTime(2, 0, -8.0, 332.0, 0.0);
+2: // 32
    posTime(2, 0, -4.0, 344.0, 0.0);
+2: // 34
    posTime(2, 0, 8.0, 336.0, 0.0);
+2: // 36
    posTime(2, 0, 4.0, 348.0, 0.0);
+2: // 38
    posTime(2, 0, 0.0, 332.0, 0.0);
+2: // 40
    posTime(2, 0, -8.0, 344.0, 0.0);
+2: // 42
    posTime(2, 0, -4.0, 336.0, 0.0);
+2: // 44
    posTime(2, 0, 8.0, 348.0, 0.0);
+2: // 46
    posTime(2, 0, -4.0, 336.0, 0.0);
+2: // 48
    posTime(2, 0, 0.0, 344.0, 0.0);
+15: // 63
    stop();

interrupt[8]:
    layer(27);
    resolutionMode(2);
    posTime(15, 2, -64.0, 356.0, 0.0);
    rgbTime(15, 0, 96, 96, 240);
+15: // 78
    stop();

interrupt[1]:
    posTime(30, 6, -96.0, 356.0, 0.0);
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
    sprite(sprite47);
    caseReturn();

interrupt[25]:
    sprite(sprite48);
    caseReturn();
}


script 15 script15 {
    layer(25);
    sprite(sprite38);
    anchor(1, 1);
    ins_431(1);
    alpha(0);
    alphaTime(15, 0, 255);
    pos(-39.0, 356.0, 0.0);
    layer(25);
    resolutionMode(2);
    resampleMode(1);

interrupt[3]:
    layer(26);
    resolutionMode(2);
    posTime(15, 2, -7.0, 356.0, 0.0);
    rgbTime(15, 0, 96, 96, 96);
+15: // 15
    stop();

interrupt[2]:
    layer(27);
    resolutionMode(2);
    posTime(15, 5, 57.0, 340.0, 0.0);
    rgbTime(15, 0, 255, 255, 255);
+15: // 30
    stop();

interrupt[7]:
    posTime(2, 0, 49.0, 332.0, 0.0);
+2: // 32
    posTime(2, 0, 53.0, 344.0, 0.0);
+2: // 34
    posTime(2, 0, 65.0, 336.0, 0.0);
+2: // 36
    posTime(2, 0, 61.0, 348.0, 0.0);
+2: // 38
    posTime(2, 0, 57.0, 332.0, 0.0);
+2: // 40
    posTime(2, 0, 49.0, 344.0, 0.0);
+2: // 42
    posTime(2, 0, 53.0, 336.0, 0.0);
+2: // 44
    posTime(2, 0, 65.0, 348.0, 0.0);
+2: // 46
    posTime(2, 0, 53.0, 336.0, 0.0);
+2: // 48
    posTime(2, 0, 57.0, 344.0, 0.0);
+15: // 63
    stop();

interrupt[8]:
    layer(27);
    resolutionMode(2);
    posTime(15, 2, -7.0, 356.0, 0.0);
    rgbTime(15, 0, 96, 96, 240);
+15: // 78
    stop();

interrupt[1]:
    posTime(30, 6, -39.0, 356.0, 0.0);
    alphaTime(30, 0, 0);
+30: // 108
    delete();

interrupt[17]:
    sprite(sprite38);
    caseReturn();

interrupt[18]:
    sprite(sprite39);
    caseReturn();

interrupt[19]:
    sprite(sprite40);
    caseReturn();

interrupt[20]:
    sprite(sprite41);
    caseReturn();

interrupt[21]:
    sprite(sprite42);
    caseReturn();

interrupt[22]:
    sprite(sprite43);
    caseReturn();

interrupt[23]:
    sprite(sprite44);
    caseReturn();

interrupt[24]:
    sprite(sprite45);
    caseReturn();

interrupt[25]:
    sprite(sprite48);
    caseReturn();
}


script 16 script16 {
-1:
    alpha(0);
    layer(24);
    resolutionMode(2);
    pos(0.0, 0.0, 0.0);
0:
    scriptNewFront(script15);
    scriptNewFront(script14);
    stop();

interrupt[1]:
+30: // 30
    delete();
}
