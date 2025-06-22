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
        sprite24: {x: 0.0, y: 144.0, w: 32.0, h: 16.0},
        sprite25: {x: 32.0, y: 144.0, w: 32.0, h: 16.0},
        sprite26: {x: 64.0, y: 144.0, w: 32.0, h: 16.0},
        sprite27: {x: 96.0, y: 144.0, w: 32.0, h: 16.0},
        sprite28: {x: 0.0, y: 160.0, w: 64.0, h: 32.0},
        sprite29: {x: 64.0, y: 160.0, w: 64.0, h: 32.0},
        sprite30: {x: 128.0, y: 160.0, w: 64.0, h: 32.0},
        sprite31: {x: 192.0, y: 160.0, w: 64.0, h: 32.0},
        sprite32: {x: 0.0, y: 192.0, w: 48.0, h: 32.0},
        sprite33: {x: 128.0, y: 144.0, w: 16.0, h: 16.0},
        sprite34: {x: 144.0, y: 144.0, w: 16.0, h: 16.0},
        sprite35: {x: 160.0, y: 144.0, w: 16.0, h: 16.0},
        sprite36: {x: 176.0, y: 144.0, w: 16.0, h: 16.0},
        sprite37: {x: 64.0, y: 192.0, w: 64.0, h: 64.0},
        sprite38: {x: 128.0, y: 192.0, w: 64.0, h: 64.0},
        sprite39: {x: 192.0, y: 192.0, w: 64.0, h: 64.0},
        sprite40: {x: 192.0, y: 144.0, w: 16.0, h: 16.0},
        sprite41: {x: 208.0, y: 144.0, w: 16.0, h: 16.0},
        sprite42: {x: 224.0, y: 144.0, w: 16.0, h: 16.0},
    },
}


script 0 script0 {
-1:
    type(0);
    layer(14);
    resampleMode(1);
0:
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
        sprite(sprite6);
+5: // 45
        sprite(sprite5);
+5: // 50
        sprite(sprite4);
+5: // 55
        sprite(sprite3);
+5: // 60
        sprite(sprite2);
+5: // 65
        sprite(sprite1);
+5: // 70
    }
}


script 1 script1 {
-1:
    type(0);
    layer(14);
    resampleMode(1);
0:
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
-1:
    type(0);
    layer(14);
    resampleMode(1);
0:
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
        sprite(sprite6);
+5: // 48
        sprite(sprite5);
+5: // 53
        sprite(sprite4);
+5: // 58
        sprite(sprite3);
+5: // 63
        sprite(sprite2);
+5: // 68
        sprite(sprite1);
+5: // 73
    }
}


script 3 script3 {
-1:
    type(0);
    layer(14);
    resampleMode(1);
0:
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
-1:
    type(0);
    layer(14);
    resampleMode(1);
0:
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
        sprite(sprite6);
+5: // 48
        sprite(sprite5);
+5: // 53
        sprite(sprite4);
+5: // 58
        sprite(sprite3);
+5: // 63
        sprite(sprite2);
+5: // 68
        sprite(sprite1);
+5: // 73
    }
}


script 5 script5 {
-1:
    layer(13);
    sprite(sprite24);
            scale(1.5, 1.5);
    type(1);
    zWriteDisable(1);
    rotateAuto(1);
0:
    stop();

interrupt[1]:
    layer(15);
    alpha(192);
    blendMode(1);
    sprite(sprite25);
+3: // 3
    sprite(sprite26);
+3: // 6
    sprite(sprite27);
+3: // 9
    alpha(0);
+20: // 29
    delete();
}


script 6 script6 {
-1:
    layer(13);
    sprite(sprite28);
    type(1);
    zWriteDisable(1);
    rotateAuto(1);
    scale(0.0, 0.5 + 0.5);
    scaleTime(8, 0, 0.8 + 0.5, 0.8 + 0.5);
    rgb(128, 225, 225);
    rgbTime(6, 0, 255, 128, 255);
    alpha(32);
    alphaTime(6, 0, 192);
0:
    stop();

interrupt[1]:
    layer(15);
    blendMode(1);
    sprite(sprite29);
+3: // 3
    sprite(sprite30);
+3: // 6
    sprite(sprite31);
+3: // 9
    alpha(0);
+20: // 29
    delete();
}


script 7 script7 {
-1:
    layer(13);
    sprite(sprite32);
            scale(1.5, 1.5);

    type(1);
    alpha(192);
    zWriteDisable(1);
    rotateAuto(1);
0:
    stop();

interrupt[1]:
    layer(15);
    alpha(192);
    blendMode(1);
+3: // 3
    alpha(0);
+20: // 23
    delete();
}


script 8 script8 {
-1:
    layer(13);
    type(0);
    resampleMode(1);

interrupt[2]:
    scale(0.0, 0.0);
    scaleTime(10, 4, 1.0 + 0.5, 1.0 + 0.5);
0:
    loop {
        sprite(sprite33);
+60: // 60
        sprite(sprite34);
+4: // 64
        sprite(sprite35);
+4: // 68
        sprite(sprite36);
+4: // 72
    }

interrupt[3]:
    scaleTime(20, 4, 0.0, 0.0);
+20: // 92
    stop();

interrupt[1]:
    blendMode(1);
    scaleTime(20, 4, 0.0, 3.0);
+20: // 112
    delete();
}


script 9 script9 {
-1:
    layer(13);
    blendMode(1);
    type(3);

interrupt[2]:
    scale(0.0, 0.0);
    scaleTime(10, 4, 1.5 + 1.0, 1.5 + 1.0);
0:
    loop {
        sprite(sprite33);
+60: // 60
        sprite(sprite34);
+4: // 64
        sprite(sprite35);
+4: // 68
        sprite(sprite36);
+4: // 72
    }

interrupt[3]:
    scaleTime(20, 4, 0.0, 0.0);
+20: // 92
    stop();

interrupt[1]:
    blendMode(1);
    scaleTime(20, 4, 0.0, 3.0);
+20: // 112
    delete();
}


script 10 script10 {
-1:
    layer(14);
    type(0);
    alpha(0);
0:

interrupt[10]:
    scriptNew(script11);
    scriptNew(script12);
    scriptNew(script13);
    scriptNew(script14);
    scriptNew(script15);
    scriptNew(script16);
    stop();

interrupt[7]:
interrupt[1]:
+20: // 20
    delete();
}


script 11 script11 {
-1:
    layer(14);
    type(1);
    blendMode(1);

interrupt[2]:
    scale(0.0, 0.0);
    scaleTime(10, 4, 1.0 + 0.5, 1.0 + 0.5);
    angleVel(0.0, 0.0, 0.05235988);
    sprite(sprite37);
0:
    stop();

interrupt[3]:
    scaleTime(20, 4, 0.0, 0.0);
+20: // 20
    stop();

interrupt[1]:
interrupt[9]:
    blendMode(1);
    alphaTime(20, 1, 0);
    scaleTime(20, 1, 3.0, 3.0);
+20: // 40
    delete();
}


script 12 script12 {
-1:
    layer(14);
    type(1);
    blendMode(1);

interrupt[2]:
    scale(0.0, 0.0);
    scaleTime(10, 4, 1.0 + 0.5, 1.0 + 0.5);
    angleVel(0.0, 0.0, -0.06981317);
    sprite(sprite38);
0:
    stop();

interrupt[3]:
    scaleTime(20, 4, 0.0, 0.0);
+20: // 20
    stop();

interrupt[1]:
interrupt[8]:
    blendMode(1);
    alphaTime(20, 1, 0);
    scaleTime(20, 1, 3.0, 3.0);
+20: // 40
    delete();
}


script 13 script13 {
-1:
    layer(14);
    type(1);
    blendMode(1);

interrupt[2]:
    scale(0.0, 0.0);
    scaleTime(10, 4, 1.0 + 0.5, 1.0 + 0.5);
    angleVel(0.0, 0.0, 0.08726646);
    sprite(sprite39);
0:
    stop();

interrupt[3]:
    scaleTime(20, 4, 0.0, 0.0);
+20: // 20
    stop();

interrupt[1]:
interrupt[7]:
    blendMode(1);
    alphaTime(20, 1, 0);
    scaleTime(20, 1, 3.0, 3.0);
+20: // 40
    delete();
}


script 14 script14 {
-1:
    layer(14);
    type(1);
    resampleMode(1);

interrupt[2]:
    scale(0.0, 0.0);
    scaleTime(10, 4, 1.0 + 0.5, 1.0 + 0.5);
    sprite(sprite40);
0:
    loop {
        rgb(192, 192, 192);
+4: // 4
        rgb(255, 255, 255);
+4: // 8
    }
    stop();

interrupt[3]:
    scaleTime(20, 4, 0.0, 0.0);
+20: // 28
    stop();

interrupt[1]:
interrupt[9]:
    blendMode(1);
    scaleTime(20, 1, 0.0, 0.0);
+20: // 48
    delete();
}


script 15 script15 {
-1:
    layer(14);
    type(1);
    resampleMode(1);

interrupt[2]:
    scale(0.0, 0.0);
    scaleTime(10, 4, 1.0 + 0.5, 1.0 + 0.5);
    sprite(sprite41);
0:
    loop {
        rgb(192, 192, 192);
+4: // 4
        rgb(255, 255, 255);
+4: // 8
    }
    stop();

interrupt[3]:
    scaleTime(20, 4, 0.0, 0.0);
+20: // 28
    stop();

interrupt[1]:
interrupt[8]:
    blendMode(1);
    scaleTime(20, 1, 0.0, 0.0);
+20: // 48
    delete();
}


script 16 script16 {
-1:
    layer(14);
    type(1);
    resampleMode(1);

interrupt[2]:
    scale(0.0, 0.0);
    scaleTime(10, 4, 1.0 + 0.5, 1.0 + 0.5);
    sprite(sprite42);
0:
    loop {
        rgb(192, 192, 192);
+4: // 4
        rgb(255, 255, 255);
+4: // 8
    }
    stop();

interrupt[3]:
    scaleTime(20, 4, 0.0, 0.0);
+20: // 28
    stop();

interrupt[1]:
interrupt[7]:
    blendMode(1);
    scaleTime(20, 1, 0.0, 0.0);
+20: // 48
    delete();
}


script 17 script17 {
    sprite(-1);
    layer(12);
    drawPoly(1.0, 32);
    blendMode(2);
    rgb(0, 255, 128);
    rgb2(255, 224, 0);
    alpha(255);
    alpha2(255);
    scaleTime(60, 1, 600.0, 600.0);
+30: // 30
    alpha2Time(20, 0, 64);
    alphaTime(60, 0, 0);
    alpha2Time(60, 0, 0);
+60: // 90
    delete();
}


entry {
    path: "face/pl03/face_pl03no.png",
    img_width: 272,
    img_height: 200,
    offset_x: 112,
    offset_y: 162,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite43: {x: 0.0, y: 0.0, w: 272.0, h: 200.0}},
}


entry {
    path: "face/pl03/face_pl03n2.png",
    img_width: 272,
    img_height: 200,
    offset_x: 112,
    offset_y: 162,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite44: {x: 0.0, y: 0.0, w: 272.0, h: 200.0}},
}


entry {
    path: "face/pl03/face_pl03hp.png",
    img_width: 272,
    img_height: 200,
    offset_x: 112,
    offset_y: 162,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite45: {x: 0.0, y: 0.0, w: 272.0, h: 200.0}},
}


entry {
    path: "face/pl03/face_pl03an.png",
    img_width: 272,
    img_height: 200,
    offset_x: 112,
    offset_y: 162,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite46: {x: 0.0, y: 0.0, w: 272.0, h: 200.0}},
}


entry {
    path: "face/pl03/face_pl03sw.png",
    img_width: 272,
    img_height: 200,
    offset_x: 112,
    offset_y: 162,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite47: {x: 0.0, y: 0.0, w: 272.0, h: 200.0}},
}


entry {
    path: "face/pl03/face_pl03dp.png",
    img_width: 272,
    img_height: 200,
    offset_x: 112,
    offset_y: 162,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite48: {x: 0.0, y: 0.0, w: 272.0, h: 200.0}},
}


entry {
    path: "face/pl03/face_pl03pr.png",
    img_width: 272,
    img_height: 200,
    offset_x: 112,
    offset_y: 162,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite49: {x: 0.0, y: 0.0, w: 272.0, h: 200.0}},
}


entry {
    path: "face/pl03/face_pl03sp.png",
    img_width: 272,
    img_height: 200,
    offset_x: 112,
    offset_y: 162,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite50: {x: 0.0, y: 0.0, w: 272.0, h: 200.0}},
}


entry {
    path: "face/dummy.png",
    img_width: 4,
    img_height: 4,
    img_format: FORMAT_GRAY_8,
    memory_priority: 0,
    sprites: {sprite51: {x: 0.0, y: 0.0, w: 4.0, h: 4.0}},
}


entry {
    path: "face/pl03/face_pl03bs.png",
    img_width: 380,
    img_height: 750,
    offset_x: 40,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {
        sprite52: {x: 0.0, y: 0.0, w: 380.0, h: 750.0},
        sprite53: {x: 0.0, y: 0.0, w: 0.0, h: 0.0},
    },
}


script 18 script18 {
    sprite(sprite52);
    anchor(1, 1);
    ins_431(1);
    alpha(0);
    alphaTime(15, 0, 255);
    pos(-96.0, 226.0, 0.0);
    layer(25);
    resolutionMode(2);
    resampleMode(1);

interrupt[3]:
    layer(26);
    resolutionMode(2);
    posTime(15, 2, -64.0, 226.0, 0.0);
    rgbTime(15, 0, 96, 96, 96);
+15: // 15
    stop();

interrupt[2]:
    layer(26);
    resolutionMode(2);
    posTime(15, 5, 0.0, 210.0, 0.0);
    rgbTime(15, 0, 255, 255, 255);
+15: // 30
    stop();

interrupt[7]:
    posTime(2, 0, -8.0, 202.0, 0.0);
+2: // 32
    posTime(2, 0, -4.0, 214.0, 0.0);
+2: // 34
    posTime(2, 0, 8.0, 206.0, 0.0);
+2: // 36
    posTime(2, 0, 4.0, 218.0, 0.0);
+2: // 38
    posTime(2, 0, 0.0, 202.0, 0.0);
+2: // 40
    posTime(2, 0, -8.0, 214.0, 0.0);
+2: // 42
    posTime(2, 0, -4.0, 206.0, 0.0);
+2: // 44
    posTime(2, 0, 8.0, 218.0, 0.0);
+2: // 46
    posTime(2, 0, -4.0, 206.0, 0.0);
+2: // 48
    posTime(2, 0, 0.0, 214.0, 0.0);
+15: // 63
    stop();

interrupt[8]:
    layer(26);
    resolutionMode(2);
    posTime(15, 2, -64.0, 226.0, 0.0);
    rgbTime(15, 0, 96, 96, 240);
+15: // 78
    stop();

interrupt[1]:
    posTime(30, 6, -96.0, 226.0, 0.0);
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
    sprite(sprite52);
    caseReturn();

interrupt[25]:
    sprite(sprite53);
    caseReturn();
}


script 19 script19 {
    layer(25);
    sprite(sprite43);
    anchor(1, 1);
    ins_431(1);
    alpha(0);
    alphaTime(15, 0, 255);
    pos(-24.0, 388.0, 0.0);
    layer(25);
    resolutionMode(2);
    resampleMode(1);

interrupt[3]:
    layer(26);
    resolutionMode(2);
    posTime(15, 2, 8.0, 388.0, 0.0);
    rgbTime(15, 0, 96, 96, 96);
+15: // 15
    stop();

interrupt[2]:
    layer(26);
    resolutionMode(2);
    posTime(15, 5, 72.0, 372.0, 0.0);
    rgbTime(15, 0, 255, 255, 255);
+15: // 30
    stop();

interrupt[7]:
    posTime(2, 0, 64.0, 364.0, 0.0);
+2: // 32
    posTime(2, 0, 68.0, 376.0, 0.0);
+2: // 34
    posTime(2, 0, 80.0, 368.0, 0.0);
+2: // 36
    posTime(2, 0, 76.0, 380.0, 0.0);
+2: // 38
    posTime(2, 0, 72.0, 364.0, 0.0);
+2: // 40
    posTime(2, 0, 64.0, 376.0, 0.0);
+2: // 42
    posTime(2, 0, 68.0, 368.0, 0.0);
+2: // 44
    posTime(2, 0, 80.0, 380.0, 0.0);
+2: // 46
    posTime(2, 0, 68.0, 368.0, 0.0);
+2: // 48
    posTime(2, 0, 72.0, 376.0, 0.0);
+15: // 63
    stop();

interrupt[8]:
    layer(26);
    resolutionMode(2);
    posTime(15, 2, 8.0, 388.0, 0.0);
    rgbTime(15, 0, 96, 96, 240);
+15: // 78
    stop();

interrupt[1]:
    posTime(30, 6, -24.0, 388.0, 0.0);
    alphaTime(30, 0, 0);
+30: // 108
    delete();

interrupt[17]:
    sprite(sprite43);
    caseReturn();

interrupt[18]:
    sprite(sprite44);
    caseReturn();

interrupt[19]:
    sprite(sprite45);
    caseReturn();

interrupt[20]:
    sprite(sprite46);
    caseReturn();

interrupt[21]:
    sprite(sprite47);
    caseReturn();

interrupt[22]:
    sprite(sprite48);
    caseReturn();

interrupt[23]:
    sprite(sprite49);
    caseReturn();

interrupt[24]:
    sprite(sprite50);
    caseReturn();

interrupt[25]:
    sprite(sprite53);
    caseReturn();
}


script 20 script20 {
-1:
    alpha(0);
    layer(24);
    resolutionMode(2);
    pos(-16.0, 0.0, 0.0);
0:
    scriptNewFront(script19);
    scriptNewFront(script18);
    stop();

interrupt[1]:
+30: // 30
    delete();
}
