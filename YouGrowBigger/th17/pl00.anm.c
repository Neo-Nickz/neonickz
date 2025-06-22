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
        sprite29: {x: 0.0, y: 176.0, w: 64.0, h: 16.0},
        sprite30: {x: 64.0, y: 176.0, w: 64.0, h: 16.0},
        sprite31: {x: 0.0, y: 192.0, w: 64.0, h: 32.0},
        sprite32: {x: 64.0, y: 192.0, w: 64.0, h: 32.0},
        sprite33: {x: 128.0, y: 192.0, w: 126.0, h: 64.0},
        sprite34: {x: 0.0, y: 160.0, w: 16.0, h: 16.0},
        sprite35: {x: 16.0, y: 160.0, w: 16.0, h: 16.0},
        sprite36: {x: 32.0, y: 160.0, w: 16.0, h: 16.0},
        sprite37: {x: 48.0, y: 160.0, w: 16.0, h: 16.0},
        sprite38: {x: 0.0, y: 224.0, w: 24.0, h: 24.0},
        sprite39: {x: 24.0, y: 224.0, w: 24.0, h: 24.0},
        sprite40: {x: 48.0, y: 224.0, w: 24.0, h: 24.0},
        sprite41: {x: 72.0, y: 224.0, w: 24.0, h: 24.0},
        sprite42: {x: 64.0, y: 144.0, w: 16.0, h: 16.0},
        sprite43: {x: 80.0, y: 144.0, w: 16.0, h: 16.0},
        sprite44: {x: 96.0, y: 144.0, w: 16.0, h: 16.0},
        sprite45: {x: 1.0, y: 193.0, w: 62.0, h: 62.0},
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
    scale(1.5, 1.5);
    alpha(160);
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
    alpha(128);
+10: // 12
    alphaTime(10, 0, 0);
+10: // 22
    delete();
}


script 7 script7 {
-1:
    layer(13);
    type(1);
    alpha(160);
    zWriteDisable(1);
    rotateAuto(1);
    sprite(sprite34);
0:
    scale(1.5, 1.5);
+1: // 1
    nop();
    loop {
        scriptNewRoot(script12);
+1: // 2
    }
    stop();

interrupt[1]:
    layer(15);
    alpha(192);
    alphaTime(30, 0, 0);
    scaleTime(10, 0, 4.0 + 0.5, 4.0 + 0.5);
    blendMode(1);
    type(1);
    rotateAuto(0);
    F0 = RANDRAD * 0.017453292;
    angleVel(F0, 0.0, F0);
    sprite(sprite35);
+10: // 12
    sprite(sprite36);
    scaleTime(20, 0, 1.0, 1.0);
+10: // 22
    sprite(sprite37);
+10: // 32
    delete();
}


script 8 script8 {
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
        sprite(sprite31);
+1: // 1
        sprite(sprite32);
+1: // 2
    }
    stop();

interrupt[1]:
    layer(15);
    F0 = RANDRAD / 10.0;
    angleVel(0.0, 0.0, F0);
    rotateAuto(1);
    sprite(sprite31);
    type(1);
    blendMode(1);
    alpha(128);
+10: // 12
    alphaTime(10, 0, 0);
+10: // 22
    delete();
}


script 9 script9 {
-1:
    layer(13);
    type(1);
    alpha(160);
    zWriteDisable(1);
    rotateAuto(1);
    sprite(sprite38);
    scale(1.5, 1.5);
0:
+1: // 1
    nop();
    loop {
        scriptNewRoot(script13);
+1: // 2
    }
    stop();

interrupt[1]:
    layer(15);
    alpha(192);
    alphaTime(30, 0, 0);
    scaleTime(10, 0, 2.0 + 0.5, 2.0 + 0.5);
    blendMode(1);
    type(1);
    rotateAuto(0);
    F0 = RANDRAD * 0.017453292;
    angleVel(F0, 0.0, F0);
    sprite(sprite39);
+10: // 12
    sprite(sprite40);
    scaleTime(20, 0, 1.0, 1.0);
+10: // 22
    sprite(sprite41);
+10: // 32
    delete();
}


script 10 script10 {
-1:
    layer(13);
    type(1);
    alpha(64);
    zWriteDisable(1);
    rotateAuto(1);
    scale(0.2 + 0.5, 1.0 + 0.5);
    resampleMode(1);
0:
    scaleTime(8, 0, 1.0 + 0.5, 1.0 + 0.5);
    alphaTime(6, 0, 255);
    sprite(sprite33);
    stop();

interrupt[1]:
    layer(15);
    F0 = RANDRAD / 10.0;
    angleVel(0.0, 0.0, F0);
    rotateAuto(1);
    sprite(sprite33);
    type(1);
    blendMode(1);
    alpha(128);
+10: // 10
    alphaTime(10, 0, 0);
+10: // 20
    delete();
}


script 11 script11 {
-1:
    layer(13);
    type(1);
    alpha(244);
    zWriteDisable(1);
    rotateAuto(1);
    sprite(sprite38);
    scale(1.5 + 0.5, 1.5 + 0.5);
0:
    layer(12);
+1: // 1
    nop();
    stop();

interrupt[1]:
    layer(15);
    alpha(244);
    alphaTime(30, 0, 0);
    scaleTime(10, 0, 3.0 + 0.5, 3.0 + 0.5);
    blendMode(1);
    type(1);
    rotateAuto(0);
    F0 = RANDRAD * 0.017453292;
    angleVel(F0, 0.0, F0);
    sprite(sprite39);
+10: // 11
    sprite(sprite40);
    scaleTime(20, 0, 1.0, 1.0);
+10: // 21
    sprite(sprite41);
+10: // 31
    delete();
}


script 12 script12 {
-1:
    layer(6);
    type(1);
    rotateAuto(1);
    blendMode(1);
    alpha(128);
    rgb(255, 64, 128);
    zWriteDisable(1);
    sprite(sprite34);
    alphaTime(8, 0, 0);
0:
+8: // 8
    delete();
}


script 13 script13 {
-1:
    layer(6);
    type(1);
    rotateAuto(1);
    blendMode(1);
    alpha(128);
    rgb(255, 64, 128);
    zWriteDisable(1);
    sprite(sprite38);
    alphaTime(8, 0, 0);
0:
+8: // 8
    delete();
}


script 14 script14 {
-1:
    layer(6);
    type(1);
    rotateAuto(1);
    scale(1.5, 1.5);
    alpha(128);
    rgb(255, 128, 128);
    zWriteDisable(1);
    sprite(sprite38);
    alphaTime(8, 0, 0);
0:
+8: // 8
    delete();
}


script 15 script15 {
-1:
    layer(13);
    blendMode(1);
    type(1);
0:

interrupt[2]:
    scale(0.0, 0.0);
    scaleTime(10, 4, 1.4 + 0.5, 1.4 + 0.5);
    sprite(sprite44);
    angleVel(0.0, 0.0, 0.31415927);
+10: // 10
    scaleTime(6, 1, 1.0 + 0.5, 1.0 + 0.5);
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


script 16 script16 {
    layer(13);
    type(1);
    blendMode(1);
    alpha(0);

interrupt[2]:
    sprite(sprite44);
    scaleTime(10, 0, 1.5 + 1.0, 1.5 + 1.0);
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


script 17 script17 {
    layer(13);
    type(1);
    sprite(sprite0);
    rgb(60, 0, 255);
    alphaTime(30, 0, 0);
+30: // 30
    delete();
}


entry {
    path: "player/pl00/pl00f.png",
    img_width: 256,
    img_height: 256,
    img_format: FORMAT_ARGB_4444,
    memory_priority: 0,
    sprites: {
        sprite46: {x: 0.0, y: 0.0, w: 64.0, h: 64.0},
        sprite47: {x: 0.0, y: 64.0, w: 192.0, h: 192.0},
    },
}


script 18 script18 {
-1:
    layer(13);
    type(1);
    zWriteDisable(1);
    sprite(sprite46);
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


script 19 script19 {
-1:
    layer(20);
    type(1);
    zWriteDisable(1);
    sprite(sprite47);
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


script 20 script20 {
-1:
    layer(20);
    type(1);
    alpha(0);
    I0 = 255;
    I1 = 255;
    I4 = 8;
0:
    do {
        scriptNewFront(script19);
        I0 -= 32;
        I1 -= 32;
+1: // 1
    } while (--I4);
    stop();

interrupt[1]:
+10: // 11
    delete();
}


script 21 script21 {
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
    sprites: {sprite48: {x: 0.0, y: 0.0, w: 128.0, h: 128.0}},
}


script 22 script22 {
    alpha(0);
    layer(20);
    scriptNew(script25);
    scriptNew(script27);
    scriptNew(script29);
    scriptNew(script25);
    scriptNew(script27);
    scriptNew(script29);
    stop();

interrupt[1]:
    scriptNew(script26);
    scriptNew(script28);
    scriptNew(script30);
    scriptNew(script26);
    scriptNew(script28);
    scriptNew(script30);
    scriptNew(script24);
+60: // 60
    delete();
}


script 23 script23 {
    alpha(0);
    layer(20);
    scriptNew(script31);
    scriptNew(script33);
    scriptNew(script35);
    scriptNew(script31);
    scriptNew(script33);
    scriptNew(script35);
    stop();

interrupt[1]:
    scriptNew(script32);
    scriptNew(script34);
    scriptNew(script36);
    scriptNew(script32);
    scriptNew(script34);
    scriptNew(script36);
    scriptNew(script24);
+60: // 60
    delete();
}


script 24 script24 {
    sprite(sprite48);
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


script 25 script25 {
    sprite(sprite48);
    layer(20);
    scale(0.0, 0.0);
    scaleTime(20, 1, 1.0, 1.0);
    type(1);
    blendMode(1);
    rgb(255, 208, 255);
    alpha(128);
    rotate(0.0, 0.0, RANDRAD);
    F0 = RANDRAD / 64.0;
    angleVel(0.0, 0.0, F0);
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


script 26 script26 {
    sprite(sprite48);
    layer(20);
    scale(1.0, 1.0);
    blendMode(1);
    rgb(255, 208, 255);
    alpha(255);
    type(1);
    rotate(0.0, 0.0, RANDRAD);
    F0 = RANDRAD / 64.0;
    angleVel(0.0, 0.0, F0);
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


script 27 script27 {
    sprite(sprite48);
    layer(20);
    scale(0.0, 0.0);
    scaleTime(20, 1, 1.0, 1.0);
    type(1);
    blendMode(1);
    rgb(128, 0, 240);
    alpha(128);
    rotate(0.0, 0.0, RANDRAD);
    F0 = RANDRAD / 64.0;
    angleVel(0.0, 0.0, F0);
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


script 28 script28 {
    sprite(sprite48);
    layer(20);
    scale(1.0, 1.0);
    blendMode(1);
    rgb(128, 0, 240);
    alpha(255);
    type(1);
    rotate(0.0, 0.0, RANDRAD);
    F0 = RANDRAD / 64.0;
    angleVel(0.0, 0.0, F0);
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


script 29 script29 {
    sprite(sprite48);
    layer(20);
    scale(0.0, 0.0);
    scaleTime(20, 1, 1.0, 1.0);
    type(1);
    blendMode(1);
    rgb(255, 0, 0);
    alpha(128);
    rotate(0.0, 0.0, RANDRAD);
    F0 = RANDRAD / 64.0;
    angleVel(0.0, 0.0, F0);
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


script 30 script30 {
    sprite(sprite48);
    layer(20);
    scale(1.0, 1.0);
    blendMode(1);
    rgb(255, 0, 0);
    alpha(255);
    type(1);
    rotate(0.0, 0.0, RANDRAD);
    F0 = RANDRAD / 64.0;
    angleVel(0.0, 0.0, F0);
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


script 31 script31 {
    sprite(sprite48);
    layer(20);
    scale(0.0, 0.0);
    scaleTime(20, 1, 1.2, 1.2);
    type(1);
    blendMode(1);
    rgb(255, 208, 223);
    alpha(128);
    rotate(0.0, 0.0, RANDRAD);
    F0 = RANDRAD / 64.0;
    angleVel(0.0, 0.0, F0);
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


script 32 script32 {
    sprite(sprite48);
    layer(20);
    scale(1.2, 1.2);
    blendMode(1);
    rgb(255, 208, 223);
    alpha(255);
    type(1);
    rotate(0.0, 0.0, RANDRAD);
    F0 = RANDRAD / 64.0;
    angleVel(0.0, 0.0, F0);
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


script 33 script33 {
    sprite(sprite48);
    layer(20);
    scale(0.0, 0.0);
    scaleTime(20, 1, 1.2, 1.2);
    type(1);
    blendMode(1);
    rgb(255, 0, 0);
    alpha(128);
    rotate(0.0, 0.0, RANDRAD);
    F0 = RANDRAD / 64.0;
    angleVel(0.0, 0.0, F0);
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


script 34 script34 {
    sprite(sprite48);
    layer(20);
    scale(1.2, 1.2);
    blendMode(1);
    rgb(255, 0, 0);
    alpha(255);
    type(1);
    rotate(0.0, 0.0, RANDRAD);
    F0 = RANDRAD / 64.0;
    angleVel(0.0, 0.0, F0);
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


script 35 script35 {
    sprite(sprite48);
    layer(20);
    scale(0.0, 0.0);
    scaleTime(20, 1, 1.4, 1.4);
    type(1);
    blendMode(1);
    rgb(255, 0, 0);
    alpha(128);
    rotate(0.0, 0.0, RANDRAD);
    F0 = RANDRAD / 64.0;
    angleVel(0.0, 0.0, F0);
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


script 36 script36 {
    sprite(sprite48);
    layer(20);
    scale(1.4, 1.4);
    blendMode(1);
    rgb(255, 0, 0);
    alpha(255);
    type(1);
    rotate(0.0, 0.0, RANDRAD);
    F0 = RANDRAD / 64.0;
    angleVel(0.0, 0.0, F0);
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


script 37 script37 {
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
    img_width: 265,
    img_height: 235,
    offset_x: 362,
    offset_y: 111,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite49: {x: 0.0, y: 0.0, w: 265.0, h: 235.0}},
}


entry {
    path: "face/pl00/face_pl00n2.png",
    img_width: 265,
    img_height: 235,
    offset_x: 362,
    offset_y: 111,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite50: {x: 0.0, y: 0.0, w: 265.0, h: 235.0}},
}


entry {
    path: "face/pl00/face_pl00hp.png",
    img_width: 265,
    img_height: 235,
    offset_x: 362,
    offset_y: 111,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite51: {x: 0.0, y: 0.0, w: 265.0, h: 235.0}},
}


entry {
    path: "face/pl00/face_pl00an.png",
    img_width: 265,
    img_height: 235,
    offset_x: 362,
    offset_y: 111,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite52: {x: 0.0, y: 0.0, w: 265.0, h: 235.0}},
}


entry {
    path: "face/pl00/face_pl00sw.png",
    img_width: 265,
    img_height: 235,
    offset_x: 362,
    offset_y: 111,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite53: {x: 0.0, y: 0.0, w: 265.0, h: 235.0}},
}


entry {
    path: "face/pl00/face_pl00dp.png",
    img_width: 265,
    img_height: 235,
    offset_x: 362,
    offset_y: 111,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite54: {x: 0.0, y: 0.0, w: 265.0, h: 235.0}},
}


entry {
    path: "face/pl00/face_pl00pr.png",
    img_width: 265,
    img_height: 235,
    offset_x: 362,
    offset_y: 111,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite55: {x: 0.0, y: 0.0, w: 265.0, h: 235.0}},
}


entry {
    path: "face/pl00/face_pl00sp.png",
    img_width: 265,
    img_height: 235,
    offset_x: 362,
    offset_y: 111,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite56: {x: 0.0, y: 0.0, w: 265.0, h: 235.0}},
}


entry {
    path: "face/dummy.png",
    img_width: 4,
    img_height: 4,
    img_format: FORMAT_GRAY_8,
    memory_priority: 0,
    sprites: {sprite57: {x: 0.0, y: 0.0, w: 4.0, h: 4.0}},
}


entry {
    path: "face/pl00/face_pl00no_b.png",
    img_width: 265,
    img_height: 235,
    offset_x: 362,
    offset_y: 111,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite58: {x: 0.0, y: 0.0, w: 265.0, h: 235.0}},
}


entry {
    path: "face/pl00/face_pl00n2_b.png",
    img_width: 265,
    img_height: 235,
    offset_x: 362,
    offset_y: 111,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite59: {x: 0.0, y: 0.0, w: 265.0, h: 235.0}},
}


entry {
    path: "face/pl00/face_pl00hp_b.png",
    img_width: 265,
    img_height: 235,
    offset_x: 362,
    offset_y: 111,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite60: {x: 0.0, y: 0.0, w: 265.0, h: 235.0}},
}


entry {
    path: "face/pl00/face_pl00an_b.png",
    img_width: 265,
    img_height: 235,
    offset_x: 362,
    offset_y: 111,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite61: {x: 0.0, y: 0.0, w: 265.0, h: 235.0}},
}


entry {
    path: "face/pl00/face_pl00sw_b.png",
    img_width: 265,
    img_height: 235,
    offset_x: 362,
    offset_y: 111,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite62: {x: 0.0, y: 0.0, w: 265.0, h: 235.0}},
}


entry {
    path: "face/pl00/face_pl00dp_b.png",
    img_width: 265,
    img_height: 235,
    offset_x: 362,
    offset_y: 111,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite63: {x: 0.0, y: 0.0, w: 265.0, h: 235.0}},
}


entry {
    path: "face/pl00/face_pl00pr_b.png",
    img_width: 265,
    img_height: 235,
    offset_x: 362,
    offset_y: 111,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite64: {x: 0.0, y: 0.0, w: 265.0, h: 235.0}},
}


entry {
    path: "face/pl00/face_pl00sp_b.png",
    img_width: 265,
    img_height: 235,
    offset_x: 362,
    offset_y: 111,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite65: {x: 0.0, y: 0.0, w: 265.0, h: 235.0}},
}


entry {
    path: "face/dummy.png",
    img_width: 4,
    img_height: 4,
    img_format: FORMAT_GRAY_8,
    memory_priority: 0,
    sprites: {sprite66: {x: 0.0, y: 0.0, w: 4.0, h: 4.0}},
}


entry {
    path: "face/pl00/face_pl00bs_b.png",
    img_width: 675,
    img_height: 800,
    offset_x: 232,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite67: {x: 0.0, y: 0.0, w: 675.0, h: 800.0}},
}


entry {
    path: "face/pl00/face_pl00bs.png",
    img_width: 675,
    img_height: 800,
    offset_x: 232,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {
        sprite68: {x: 0.0, y: 0.0, w: 675.0, h: 800.0},
        sprite69: {x: 0.0, y: 0.0, w: 0.0, h: 0.0},
    },
}


script 38 script38 {
    sprite(sprite68);
    anchor(1, 1);
    ins_431(1);
    alpha(0);
    alphaTime(15, 0, 255);
    pos(-96.0, 176.0, 0.0);
    layer(25);
    resolutionMode(2);
    resampleMode(1);

interrupt[3]:
    layer(26);
    resolutionMode(2);
    posTime(15, 2, -64.0, 176.0, 0.0);
    rgbTime(15, 0, 96, 96, 96);
+15: // 15
    stop();

interrupt[2]:
    layer(27);
    resolutionMode(2);
    posTime(15, 5, 0.0, 160.0, 0.0);
    rgbTime(15, 0, 255, 255, 255);
+15: // 30
    stop();

interrupt[7]:
    posTime(2, 0, -8.0, 152.0, 0.0);
+2: // 32
    posTime(2, 0, -4.0, 164.0, 0.0);
+2: // 34
    posTime(2, 0, 8.0, 156.0, 0.0);
+2: // 36
    posTime(2, 0, 4.0, 168.0, 0.0);
+2: // 38
    posTime(2, 0, 0.0, 152.0, 0.0);
+2: // 40
    posTime(2, 0, -8.0, 164.0, 0.0);
+2: // 42
    posTime(2, 0, -4.0, 156.0, 0.0);
+2: // 44
    posTime(2, 0, 8.0, 168.0, 0.0);
+2: // 46
    posTime(2, 0, -4.0, 156.0, 0.0);
+2: // 48
    posTime(2, 0, 0.0, 164.0, 0.0);
+15: // 63
    stop();

interrupt[8]:
    layer(27);
    resolutionMode(2);
    posTime(15, 2, -64.0, 176.0, 0.0);
    rgbTime(15, 0, 96, 96, 240);
+15: // 78
    stop();

interrupt[1]:
    posTime(30, 6, -96.0, 176.0, 0.0);
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
    sprite(sprite68);
    caseReturn();

interrupt[27]:
interrupt[28]:
interrupt[29]:
interrupt[30]:
interrupt[31]:
interrupt[32]:
interrupt[33]:
interrupt[34]:
    sprite(sprite67);
    caseReturn();

interrupt[25]:
    sprite(sprite69);
    caseReturn();
}


script 39 script39 {
    layer(25);
    sprite(sprite49);
    anchor(1, 1);
    ins_431(1);
    alpha(0);
    alphaTime(15, 0, 255);
    pos(34.0, 287.0, 0.0);
    layer(25);
    resolutionMode(2);
    resampleMode(1);

interrupt[3]:
    layer(26);
    resolutionMode(2);
    posTime(15, 2, 66.0, 287.0, 0.0);
    rgbTime(15, 0, 96, 96, 96);
+15: // 15
    stop();

interrupt[2]:
    layer(27);
    resolutionMode(2);
    posTime(15, 5, 130.0, 271.0, 0.0);
    rgbTime(15, 0, 255, 255, 255);
+15: // 30
    stop();

interrupt[7]:
    posTime(2, 0, 122.0, 263.0, 0.0);
+2: // 32
    posTime(2, 0, 126.0, 275.0, 0.0);
+2: // 34
    posTime(2, 0, 138.0, 267.0, 0.0);
+2: // 36
    posTime(2, 0, 134.0, 279.0, 0.0);
+2: // 38
    posTime(2, 0, 130.0, 263.0, 0.0);
+2: // 40
    posTime(2, 0, 122.0, 275.0, 0.0);
+2: // 42
    posTime(2, 0, 126.0, 267.0, 0.0);
+2: // 44
    posTime(2, 0, 138.0, 279.0, 0.0);
+2: // 46
    posTime(2, 0, 126.0, 267.0, 0.0);
+2: // 48
    posTime(2, 0, 130.0, 275.0, 0.0);
+15: // 63
    stop();

interrupt[8]:
    layer(27);
    resolutionMode(2);
    posTime(15, 2, 66.0, 287.0, 0.0);
    rgbTime(15, 0, 96, 96, 240);
+15: // 78
    stop();

interrupt[1]:
    posTime(30, 6, 34.0, 287.0, 0.0);
    alphaTime(30, 0, 0);
+30: // 108
    delete();

interrupt[17]:
    sprite(sprite49);
    caseReturn();

interrupt[18]:
    sprite(sprite50);
    caseReturn();

interrupt[19]:
    sprite(sprite51);
    caseReturn();

interrupt[20]:
    sprite(sprite52);
    caseReturn();

interrupt[21]:
    sprite(sprite53);
    caseReturn();

interrupt[22]:
    sprite(sprite54);
    caseReturn();

interrupt[23]:
    sprite(sprite55);
    caseReturn();

interrupt[24]:
    sprite(sprite56);
    caseReturn();

interrupt[25]:
    sprite(sprite69);
    caseReturn();

interrupt[27]:
    sprite(sprite58);
    caseReturn();

interrupt[28]:
    sprite(sprite59);
    caseReturn();

interrupt[29]:
    sprite(sprite60);
    caseReturn();

interrupt[30]:
    sprite(sprite61);
    caseReturn();

interrupt[31]:
    sprite(sprite62);
    caseReturn();

interrupt[32]:
    sprite(sprite63);
    caseReturn();

interrupt[33]:
    sprite(sprite64);
    caseReturn();

interrupt[34]:
    sprite(sprite65);
    caseReturn();

interrupt[35]:
    sprite(sprite69);
    caseReturn();
}


script 40 script40 {
-1:
    alpha(0);
    layer(24);
    resolutionMode(2);
    pos(-80.0, 0.0, 0.0);
0:
    scriptNew(script38);
    scriptNew(script39);
    stop();

interrupt[1]:
+30: // 30
    delete();
}
