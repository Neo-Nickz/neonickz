#pragma mapfile "C:\\TouhouTools\\map\\any.anmm"

entry {
    path: "player/pl00/pl00.png",
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
        sprite24: {x: 192.0, y: 144.0, w: 64.0, h: 16.0},
        sprite25: {x: 192.0, y: 160.0, w: 64.0, h: 16.0},
        sprite26: {x: 16.0, y: 144.0, w: 16.0, h: 16.0},
        sprite27: {x: 32.0, y: 144.0, w: 16.0, h: 16.0},
        sprite28: {x: 48.0, y: 144.0, w: 16.0, h: 16.0},
        sprite29: {x: 64.0, y: 176.0, w: 64.0, h: 16.0},
        sprite30: {x: 128.0, y: 176.0, w: 64.0, h: 16.0},
        sprite31: {x: 0.0, y: 160.0, w: 16.0, h: 16.0},
        sprite32: {x: 16.0, y: 160.0, w: 16.0, h: 16.0},
        sprite33: {x: 32.0, y: 160.0, w: 16.0, h: 16.0},
        sprite34: {x: 48.0, y: 160.0, w: 16.0, h: 16.0},
        sprite35: {x: 0.0, y: 192.0, w: 32.0, h: 32.0},
        sprite36: {x: 32.0, y: 192.0, w: 32.0, h: 32.0},
        sprite37: {x: 64.0, y: 192.0, w: 48.0, h: 32.0},
        sprite38: {x: 112.0, y: 192.0, w: 48.0, h: 32.0},
        sprite39: {x: 64.0, y: 144.0, w: 16.0, h: 16.0},
        sprite40: {x: 80.0, y: 144.0, w: 16.0, h: 16.0},
        sprite41: {x: 96.0, y: 144.0, w: 16.0, h: 16.0},
        sprite42: {x: 1.0, y: 193.0, w: 62.0, h: 62.0},
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
    loop {
+1: // 4
        sprite(sprite20);
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
    }
}


script 5 script5 {
-1:
    layer(13);
    type(1);
    alpha(160);
    scale(1.5, 1.5);

    zWriteDisable(1);
    rotateAuto(1);
0:
    loop {
        sprite(sprite24);
+1: // 1
        sprite(sprite25);
+1: // 2
    }
    stop();

interrupt[1]:
    layer(15);
    alpha(192);
    alphaTime(30, 0, 0);
    blendMode(1);
    type(1);
    sprite(sprite26);
+10: // 12
    sprite(sprite27);
+10: // 22
    sprite(sprite28);
+10: // 32
    delete();
}


script 6 script6 {
-1:
    layer(13);
    type(1);
    alpha(64);
    zWriteDisable(1);
    rotateAuto(1);
    scale(0.2 + 0.5, 1.0 + 0.5);
0:
    scaleTime(8, 0, 2.0 + 0.5, 1.0 + 0.5);
    alphaTime(6, 0, 255);
    loop {
        sprite(sprite29);
+1: // 1
        sprite(sprite30);
+1: // 2
    }
    stop();

interrupt[1]:
    layer(15);
    F0 = RANDRAD / 10.0;
    angleVel(0.0, 0.0, F0);
    rotateAuto(1);
    sprite(sprite29);
    type(1);
    blendMode(1);
    alpha(192);
+10: // 12
    alphaTime(10, 0, 0);
+10: // 22
    delete();
}


script 7 script7 {
-1:
    layer(13);
    type(1);
    sprite(sprite43);
    alpha(0);
0:
    scale(1.5, 1.5);
    I0 = 255;
    %REG[10035] = 3.1415927;
    scriptNewFront(script12);
    I0 = 144;
    %REG[10035] -= 1.0471976;
    scriptNewFront(script12);
    I0 = 96;
    %REG[10035] -= 1.0471976;
    scriptNewFront(script12);
    I0 = 48;
    %REG[10035] -= 1.0471976;
    scriptNewFront(script12);
    stop();

interrupt[1]:
+10: // 10
    delete();
}


script 8 script8 {
-1:
    layer(13);
    type(1);
    alpha(128);
    zWriteDisable(1);
    rotateAuto(1);
    sprite(sprite31);
0:
    scale(1.5, 1.5);
+1: // 1
    nop();
    loop {
        scriptNewRoot(script9);
+1: // 2
    }
    stop();

interrupt[1]:
    layer(15);
    alpha(192);
    alphaTime(30, 0, 0);
    scaleTime(10, 0, 4.0, 4.0);
    blendMode(1);
    type(1);
    rotateAuto(0);
    F0 = RANDRAD * 0.017453292;
    angleVel(F0, 0.0, F0);
    sprite(sprite32);
+10: // 12
    sprite(sprite33);
    scaleTime(20, 0, 1.0, 1.0);
+10: // 22
    sprite(sprite34);
+10: // 32
    delete();
}


script 9 script9 {
-1:
    layer(7);
    type(1);
    rotateAuto(1);
    blendMode(2);
    alpha(128);
    scale(1.5, 1.5);
    rgb(0, 255, 255);
    zWriteDisable(1);
    sprite(sprite31);
    alphaTime(5, 0, 0);
0:
+5: // 5
    delete();
}


script 10 script10 {
-1:
    layer(13);
    blendMode(1);
    type(1);
0:

interrupt[2]:
    scale(0.0, 0.0);
    scaleTime(10, 4, 1.9000001, 1.9000001);
    sprite(sprite41);
    angleVel(0.0, 0.0, 0.31415927);
+10: // 10
    scaleTime(6, 1, 1.5, 1.5);
+6: // 16
    angleVel(0.0, 0.0, 0.10471976);
    blendMode(0);
    stop();

interrupt[3]:
    scaleTime(20, 4, 0.0, 0.0);
+20: // 36
    stop();

interrupt[1]:
    blendMode(1);
    scaleTime(20, 4, 0.0, 3.0);
+20: // 56
    delete();
}


script 11 script11 {
    layer(13);
    type(1);
    blendMode(1);
    alpha(0);

interrupt[2]:
    sprite(sprite41);
    scaleTime(10, 0, 2.5, 2.5);
    alphaTime(10, 0, 128);
    angleVel(0.0, 0.0, -0.10471976);
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
    path: "player/pl00/pl00f.png",
    img_width: 256,
    img_height: 256,
    img_format: FORMAT_ARGB_4444,
    memory_priority: 0,
    sprites: {
        sprite43: {x: 0.0, y: 0.0, w: 64.0, h: 64.0},
        sprite44: {x: 0.0, y: 64.0, w: 192.0, h: 192.0},
    },
}


script 12 script12 {
-1:
    layer(13);
    type(1);
    zWriteDisable(1);
    sprite(sprite43);
    anchorOffset(-16.0, 16.0);
    rgb(255, 164, 255);
0:
    copyVars();
    alpha(I0);
    rotate(%REG[10035], 0.0, %REG[10035]);
    angleVel(0.5235988, 0.0, 0.5235988);
    stop();

interrupt[3]:
    scale(1.0, 1.0);
    rgb(255, 0, 0);
    angleVel(0.0, 0.0, 0.0);
+4: // 4
    angleVel(0.5235988, 0.0, 0.5235988);
    scale(1.0, 1.0);
    rgb(255, 164, 255);
    stop();

interrupt[1]:
    layer(15);
    scaleTime(10, 4, 0.0, 0.0);
    blendMode(1);
+10: // 14
    delete();
}


script 13 script13 {
-1:
    layer(20);
    type(1);
    zWriteDisable(1);
    sprite(sprite44);
    anchorOffset(-96.0, 64.0);
0:
    copyVars();
    alpha(I0);
    rgb(255, I1, 255);
    I4 = 4;
    do {
        scale(1.0, 1.0);
        rotate(-3.1415927, 0.0, -3.1415927);
        rotateTime(20, 3, 0.0, 0.0, 0.0);
+20: // 20
        rgb(255, 128, 128);
+10: // 30
        rgb(255, I1, 155);
        scale(-1.0, 1.0);
        rotate(3.1415927, 0.0, 3.1415927);
        rotateTime(20, 3, 0.0, 0.0, 0.0);
+20: // 50
        rgb(255, 128, 128);
+10: // 60
        rgb(255, I1, 255);
    } while (--I4);

interrupt[1]:
    alphaTime(10, 0, 0);
+10: // 70
    delete();
}


script 14 script14 {
-1:
    layer(20);
    type(1);
    alpha(0);
    I0 = 255;
    I1 = 255;
    I4 = 8;
0:
    do {
        scriptNewFront(script13);
        I0 -= 32;
        I1 -= 32;
+1: // 1
    } while (--I4);
    stop();

interrupt[1]:
+10: // 11
    delete();
}


script 15 script15 {
    sprite(-1);
    layer(22);
    drawPoly(1.0, 40);
    blendMode(1);
    alpha(0);
    alpha2(255);
    rgb(255, 255, 255);
    rgb2(128, 0, 0);
    scaleTime(20, 4, 300.0, 300.0);
    rgb2Time(20, 0, 128, 0, 0);
    alpha2Time(20, 0, 0);
+20: // 20
    delete();
}


entry {
    path: "player/pl00/pl00b.png",
    img_width: 128,
    img_height: 128,
    memory_priority: 0,
    sprites: {sprite45: {x: 0.0, y: 0.0, w: 128.0, h: 128.0}},
}


script 16 script16 {
    alpha(0);
    layer(20);
    scriptNew(script18);
    scriptNew(script20);
    scriptNew(script22);
    scriptNew(script18);
    scriptNew(script20);
    scriptNew(script22);
    stop();

interrupt[1]:
    scriptNew(script19);
    scriptNew(script21);
    scriptNew(script23);
    scriptNew(script19);
    scriptNew(script21);
    scriptNew(script23);
    scriptNew(script17);
+50: // 50
    delete();
}


script 17 script17 {
    sprite(sprite45);
    layer(20);
    scale(0.0, 0.0);
    scaleTime(20, 1, 1.0, 1.0);
    type(2);
    blendMode(1);
    rgb(255, 255, 255);
    alpha(255);
    scaleTime(20, 4, 6.0, 6.0);
    alphaTime(20, 4, 0);
+20: // 20
    delete();
}


script 18 script18 {
    sprite(sprite45);
    layer(20);
    scale(0.0, 0.0);
    scaleTime(20, 1, 1.0, 1.0);
    type(1);
    blendMode(1);
    rgb(255, 32, 32);
    alpha(128);
    rotate(0.0, 0.0, RANDRAD);
    angleVel(0.0, 0.0, RANDRAD);
    F0 = RANDF2 * 96.0;
    F1 = RANDF2 * 96.0;
    loop {
        F2 = RANDF2 * 96.0;
        F3 = RANDF2 * 96.0;
        moveBezier(20, F0, F1, 0.0, 0.0, 0.0, 0.0, F2, F3, 0.0);
        F0 = F2;
        F1 = F3;
+20: // 20
    }

interrupt[1]:
    delete();
}


script 19 script19 {
    sprite(sprite45);
    layer(20);
    scale(1.0, 1.0);
    blendMode(1);
    rgb(255, 32, 32);
    alpha(255);
    type(1);
    rotate(0.0, 0.0, RANDRAD);
    F0 = RANDRAD;
    F1 = cos(F0);
    F2 = sin(F0);
    F0 = RANDF * 32.0;
    F1 *= F0;
    F2 *= F0;
    pos(F1, F2, 0.0);
    F0 = RANDRAD;
    F1 = cos(F0);
    F2 = sin(F0);
    F0 = RANDF * 255.0;
    F1 *= F0;
    F2 *= F0;
    posTime(50, 4, F1, F2, 0.0);
    scaleTime(50, 1, 0.0, 0.0);
    alphaTime(50, 1, 0);
+50: // 50
    delete();
}


script 20 script20 {
    sprite(sprite45);
    layer(20);
    scale(0.0, 0.0);
    scaleTime(20, 1, 1.0, 1.0);
    type(1);
    blendMode(1);
    rgb(32, 255, 32);
    alpha(128);
    rotate(0.0, 0.0, RANDRAD);
    angleVel(0.0, 0.0, RANDRAD);
    F0 = RANDF2 * 96.0;
    F1 = RANDF2 * 96.0;
    loop {
        F2 = RANDF2 * 96.0;
        F3 = RANDF2 * 96.0;
        moveBezier(20, F0, F1, 0.0, 0.0, 0.0, 0.0, F2, F3, 0.0);
        F0 = F2;
        F1 = F3;
+20: // 20
    }

interrupt[1]:
    delete();
}


script 21 script21 {
    sprite(sprite45);
    layer(20);
    scale(1.0, 1.0);
    blendMode(1);
    rgb(32, 255, 32);
    alpha(255);
    type(1);
    rotate(0.0, 0.0, RANDRAD);
    F0 = RANDRAD;
    F1 = cos(F0);
    F2 = sin(F0);
    F0 = RANDF * 32.0;
    F1 *= F0;
    F2 *= F0;
    pos(F1, F2, 0.0);
    F0 = RANDRAD;
    F1 = cos(F0);
    F2 = sin(F0);
    F0 = RANDF * 255.0;
    F1 *= F0;
    F2 *= F0;
    posTime(50, 4, F1, F2, 0.0);
    scaleTime(50, 1, 0.0, 0.0);
    alphaTime(50, 1, 0);
+50: // 50
    delete();
}


script 22 script22 {
    sprite(sprite45);
    layer(20);
    scale(0.0, 0.0);
    scaleTime(20, 1, 1.0, 1.0);
    type(1);
    blendMode(1);
    rgb(32, 32, 255);
    alpha(128);
    rotate(0.0, 0.0, RANDRAD);
    angleVel(0.0, 0.0, RANDRAD);
    F0 = RANDF2 * 96.0;
    F1 = RANDF2 * 96.0;
    loop {
        F2 = RANDF2 * 96.0;
        F3 = RANDF2 * 96.0;
        moveBezier(20, F0, F1, 0.0, 0.0, 0.0, 0.0, F2, F3, 0.0);
        F0 = F2;
        F1 = F3;
+20: // 20
    }

interrupt[1]:
    delete();
}


script 23 script23 {
    sprite(sprite45);
    layer(20);
    scale(1.0, 1.0);
    blendMode(1);
    rgb(32, 32, 255);
    alpha(255);
    type(1);
    rotate(0.0, 0.0, RANDRAD);
    F0 = RANDRAD;
    F1 = cos(F0);
    F2 = sin(F0);
    F0 = RANDF * 32.0;
    F1 *= F0;
    F2 *= F0;
    pos(F1, F2, 0.0);
    F0 = RANDRAD;
    F1 = cos(F0);
    F2 = sin(F0);
    F0 = RANDF * 255.0;
    F1 *= F0;
    F2 *= F0;
    posTime(50, 4, F1, F2, 0.0);
    scaleTime(50, 1, 0.0, 0.0);
    alphaTime(50, 1, 0);
+50: // 50
    delete();
}


script 24 script24 {
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
    rgbTime(250, 0, 128, 0, 0);
    rgb2Time(250, 0, 128, 0, 0);
    alpha2Time(250, 0, 255);
    stop();

interrupt[1]:
    alphaTime(20, 0, 0);
+20: // 60
    delete();
}


entry {
    path: "face/pl00/face_pl00no.png",
    img_width: 236,
    img_height: 208,
    offset_x: 340,
    offset_y: 54,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite46: {x: 0.0, y: 0.0, w: 236.0, h: 208.0}},
}


entry {
    path: "face/pl00/face_pl00n2.png",
    img_width: 236,
    img_height: 208,
    offset_x: 340,
    offset_y: 54,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite47: {x: 0.0, y: 0.0, w: 236.0, h: 208.0}},
}


entry {
    path: "face/pl00/face_pl00hp.png",
    img_width: 236,
    img_height: 208,
    offset_x: 340,
    offset_y: 54,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite48: {x: 0.0, y: 0.0, w: 236.0, h: 208.0}},
}


entry {
    path: "face/pl00/face_pl00an.png",
    img_width: 236,
    img_height: 208,
    offset_x: 340,
    offset_y: 54,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite49: {x: 0.0, y: 0.0, w: 236.0, h: 208.0}},
}


entry {
    path: "face/pl00/face_pl00sw.png",
    img_width: 236,
    img_height: 208,
    offset_x: 340,
    offset_y: 54,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite50: {x: 0.0, y: 0.0, w: 236.0, h: 208.0}},
}


entry {
    path: "face/pl00/face_pl00dp.png",
    img_width: 236,
    img_height: 208,
    offset_x: 340,
    offset_y: 54,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite51: {x: 0.0, y: 0.0, w: 236.0, h: 208.0}},
}


entry {
    path: "face/pl00/face_pl00pr.png",
    img_width: 236,
    img_height: 208,
    offset_x: 340,
    offset_y: 54,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite52: {x: 0.0, y: 0.0, w: 236.0, h: 208.0}},
}


entry {
    path: "face/pl00/face_pl00sp.png",
    img_width: 236,
    img_height: 208,
    offset_x: 340,
    offset_y: 54,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite53: {x: 0.0, y: 0.0, w: 236.0, h: 208.0}},
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
    path: "face/pl00/face_pl00bs.png",
    img_width: 590,
    img_height: 660,
    offset_x: 160,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {
        sprite55: {x: 0.0, y: 0.0, w: 590.0, h: 660.0},
        sprite56: {x: 0.0, y: 0.0, w: 0.0, h: 0.0},
    },
}


script 25 script25 {
    sprite(sprite55);
    anchor(1, 1);
    ins_431(1);
    alpha(0);
    alphaTime(15, 0, 255);
    pos(-96.0, 316.0, 0.0);
    layer(25);
    resolutionMode(2);
    resampleMode(1);

interrupt[3]:
    layer(26);
    resolutionMode(2);
    posTime(15, 2, -64.0, 316.0, 0.0);
    rgbTime(15, 0, 96, 96, 96);
+15: // 15
    stop();

interrupt[2]:
    layer(26);
    resolutionMode(2);
    posTime(15, 5, 0.0, 300.0, 0.0);
    rgbTime(15, 0, 255, 255, 255);
+15: // 30
    stop();

interrupt[7]:
    posTime(2, 0, -8.0, 292.0, 0.0);
+2: // 32
    posTime(2, 0, -4.0, 304.0, 0.0);
+2: // 34
    posTime(2, 0, 8.0, 296.0, 0.0);
+2: // 36
    posTime(2, 0, 4.0, 308.0, 0.0);
+2: // 38
    posTime(2, 0, 0.0, 292.0, 0.0);
+2: // 40
    posTime(2, 0, -8.0, 304.0, 0.0);
+2: // 42
    posTime(2, 0, -4.0, 296.0, 0.0);
+2: // 44
    posTime(2, 0, 8.0, 308.0, 0.0);
+2: // 46
    posTime(2, 0, -4.0, 296.0, 0.0);
+2: // 48
    posTime(2, 0, 0.0, 304.0, 0.0);
+15: // 63
    stop();

interrupt[8]:
    layer(26);
    resolutionMode(2);
    posTime(15, 2, -64.0, 316.0, 0.0);
    rgbTime(15, 0, 96, 96, 240);
+15: // 78
    stop();

interrupt[1]:
    posTime(30, 6, -96.0, 316.0, 0.0);
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


script 26 script26 {
    layer(25);
    sprite(sprite46);
    anchor(1, 1);
    ins_431(1);
    alpha(0);
    alphaTime(15, 0, 255);
    pos(84.0, 370.0, 0.0);
    layer(25);
    resolutionMode(2);
    resampleMode(1);

interrupt[3]:
    layer(26);
    resolutionMode(2);
    posTime(15, 2, 116.0, 370.0, 0.0);
    rgbTime(15, 0, 96, 96, 96);
+15: // 15
    stop();

interrupt[2]:
    layer(26);
    resolutionMode(2);
    posTime(15, 5, 180.0, 354.0, 0.0);
    rgbTime(15, 0, 255, 255, 255);
+15: // 30
    stop();

interrupt[7]:
    posTime(2, 0, 172.0, 346.0, 0.0);
+2: // 32
    posTime(2, 0, 176.0, 358.0, 0.0);
+2: // 34
    posTime(2, 0, 188.0, 350.0, 0.0);
+2: // 36
    posTime(2, 0, 184.0, 362.0, 0.0);
+2: // 38
    posTime(2, 0, 180.0, 346.0, 0.0);
+2: // 40
    posTime(2, 0, 172.0, 358.0, 0.0);
+2: // 42
    posTime(2, 0, 176.0, 350.0, 0.0);
+2: // 44
    posTime(2, 0, 188.0, 362.0, 0.0);
+2: // 46
    posTime(2, 0, 176.0, 350.0, 0.0);
+2: // 48
    posTime(2, 0, 180.0, 358.0, 0.0);
+15: // 63
    stop();

interrupt[8]:
    layer(26);
    resolutionMode(2);
    posTime(15, 2, 116.0, 370.0, 0.0);
    rgbTime(15, 0, 96, 96, 240);
+15: // 78
    stop();

interrupt[1]:
    posTime(30, 6, 84.0, 370.0, 0.0);
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


script 27 script27 {
-1:
    alpha(0);
    layer(24);
    resolutionMode(2);
    pos(-80.0, 0.0, 0.0);
0:
    scriptNew(script25);
    scriptNew(script26);
    stop();

interrupt[1]:
+30: // 30
    delete();
}
