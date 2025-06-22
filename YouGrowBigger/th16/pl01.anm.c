#pragma mapfile "C:\\TouhouTools\\map\\any.anmm"

entry {
    path: "player/pl01/pl01.png",
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
        sprite24: {x: 1.0, y: 145.0, w: 30.0, h: 14.0},
        sprite25: {x: 33.0, y: 145.0, w: 30.0, h: 14.0},
        sprite26: {x: 65.0, y: 145.0, w: 30.0, h: 14.0},
        sprite27: {x: 97.0, y: 145.0, w: 30.0, h: 14.0},
        sprite28: {x: 0.0, y: 177.0, w: 512.0 / 2.0, h: 30.0},
        sprite29: {x: 0.0, y: 224.0, w: 32.0, h: 32.0},
        sprite30: {x: 32.0, y: 224.0, w: 32.0, h: 32.0},
        sprite31: {x: 129.0, y: 193.0, w: 30.0, h: 14.0},
        sprite32: {x: 161.0, y: 193.0, w: 30.0, h: 14.0},
        sprite33: {x: 0.0, y: 224.0, w: 32.0, h: 32.0},
        sprite34: {x: 32.0, y: 224.0, w: 32.0, h: 32.0},
        sprite35: {x: 64.0, y: 224.0, w: 32.0, h: 32.0},
        sprite36: {x: 96.0, y: 224.0, w: 32.0, h: 32.0},
        sprite37: {x: 128.0, y: 224.0, w: 32.0, h: 32.0},
        sprite38: {x: 160.0, y: 224.0, w: 32.0, h: 32.0},
        sprite39: {x: 192.0, y: 224.0, w: 32.0, h: 32.0},
        sprite40: {x: 224.0, y: 224.0, w: 32.0, h: 32.0},
        sprite41: {x: 64.0, y: 160.0, w: 16.0, h: 16.0},
        sprite42: {x: 64.0, y: 160.0, w: 16.0, h: 16.0},
        sprite43: {x: 80.0, y: 160.0, w: 16.0, h: 16.0},
        sprite44: {x: 96.0, y: 160.0, w: 16.0, h: 16.0},
        sprite45: {x: 112.0, y: 160.0, w: 16.0, h: 16.0},
        sprite46: {x: 128.0, y: 160.0, w: 16.0, h: 16.0},
        sprite47: {x: 160.0, y: 144.0, w: 16.0, h: 16.0},
        sprite48: {x: 176.0, y: 144.0, w: 16.0, h: 16.0},
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
    }
}


script 5 script5 {
-1:
    layer(13);
    sprite(sprite24);
    type(1);
    scale(1.5, 1.5);
    alpha(128);
    zWriteDisable(1);
    rotateAuto(1);
0:
    stop();

interrupt[1]:
    layer(15);
    alpha(192);
    alphaTime(30, 0, 0);
    blendMode(1);
    type(1);
    sprite(sprite25);
+10: // 10
    sprite(sprite26);
+10: // 20
    sprite(sprite27);
+10: // 30
    delete();
}


script 6 script6 {
    scriptNew(script7);
    layer(15);
    sprite(sprite28);
    type(1);
    anchor(1, 0);
    scale(1.0, 0.0);
    scaleTime(4, 1, 1.0, 1.0 + 0.5);
    alpha(96);
    blendMode(1);
    rotateAuto(1);
    F0 = RANDF / 2.0;
    scrollX(F0);
+1: // 1
    scrollX(-0.04761905);
    stop();

interrupt[2]:
    rgbTime(8, 0, 64, 64, 255);
    caseReturn();

interrupt[3]:
    rgbTime(2, 0, 255, 255, 255);
    caseReturn();

interrupt[1]:
    scaleTime(8, 1, 1.0, 0.0);
+8: // 9
    delete();
}


script 7 script7 {
    layer(15);
    type(1);
    alpha(224);
    blendMode(1);
    angleVel(0.0, 0.0, 0.5067085);
    sprite(sprite29);
    loop {
        scaleTime(4, 9, 1.5, 1.5);
+4: // 4
        scaleTime(4, 9, 1.0, 1.0);
+4: // 8
    }

interrupt[1]:
    scaleTime(8, 1, 0.0, 0.0);
+8: // 16
    delete();
}


script 8 script8 {
    layer(15);
    sprite(sprite30);
    alpha(192);
    alphaTime(20, 0, 0);
    blendMode(1);
    type(1);
    anchor(1, 0);
    rgb(255, 32, 255);
    rgbTime(20, 0, 32, 32, 255);
    scale(1.0 + 0.5, 1.0 + 0.5);
    scaleTime(20, 1, 0.0, 0.0);
+20: // 20
    delete();
}


script 9 script9 {
-1:
    layer(13);
    type(1);
    alpha(96);
    scale(1.5, 1.5);
    zWriteDisable(1);
    rotateAuto(1);
0:
    loop {
        sprite(sprite31);
+4: // 4
        sprite(sprite32);
+4: // 8
    }

interrupt[1]:
    alpha(0);
    I0 = 10;
    F3 = 0.0;
    do {
        F0 = RANDRADREP;
        F1 = sin(F0);
        F2 = cos(F0);
        F0 = RANDFREP * F3;
        F1 = F1 * F0;
        F2 = F2 * F0;
        F3 += 6.0;
        scriptNewPos(script10, F1, F2);
+2: // 10
    } while (--I0);
+18: // 28
    delete();
}


script 10 script10 {
-1:
    layer(15);
    alpha(192);
    alphaTime(30, 0, 0);
    type(0);
    scale(0.0, 0.0);
    scaleTime(10, 4, 1.0 + 0.5, 1.0 + 0.5);
    blendMode(1);
    sprite(sprite33);
0:
+2: // 2
    sprite(sprite34);
+2: // 4
    sprite(sprite35);
+2: // 6
    sprite(sprite36);
    blendMode(0);
+2: // 8
    sprite(sprite37);
+2: // 10
    sprite(sprite38);
+2: // 12
    sprite(sprite39);
+3: // 15
    sprite(sprite40);
+3: // 18
    delete();
}


script 11 script11 {
    layer(13);
    blendMode(1);
    type(2);

interrupt[2]:
    scale(0.0, 0.0);
    scaleTime(10, 4, 1.9000001, 1.9000001);
    sprite(sprite43);
+10: // 10
    scaleTime(6, 1, 1.5, 1.5);
+6: // 16
    blendMode(0);
    loop {
        scaleTime(15, 9, 1.3, 1.3);
+15: // 31
        scaleTime(15, 9, 1.5, 1.5);
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
    blendMode(1);
    type(2);

interrupt[2]:
    scale(0.0, 0.0);
    scaleTime(10, 4, 1.4, 1.4);
    sprite(sprite42);
+10: // 10
    scaleTime(6, 1, 1.0, 1.0);
+6: // 16
    blendMode(0);
    loop {
        scaleTime(15, 9, 0.8, 0.8);
+15: // 31
        scaleTime(15, 9, 1.0, 1.0);
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


script 13 script13 {
    layer(13);
    type(2);
    blendMode(1);

interrupt[2]:
    alpha(0);
    sprite(sprite43);
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


script 14 script14 {
    layer(13);
    type(2);

interrupt[2]:
    blendMode(1);
    alpha(0);
    sprite(sprite42);
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


script 15 script15 {
    layer(13);
    type(1);

interrupt[2]:
    blendMode(1);
    alpha(0);
    sprite(sprite47);
    scaleTime(10, 0, 1.5, 1.5);
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


script 16 script16 {
    layer(13);
    type(1);
    sprite(sprite0);
    rgb(60, 0, 255);
    alphaTime(30, 0, 0);
+30: // 30
    delete();
}


entry {
    path: "player/pl01/pl01b.png",
    img_width: 256,
    img_height: 128,
    memory_priority: 0,
    sprites: {sprite49: {x: 1.0, y: 1.0, w: 254.0, h: 126.0}},
}


script 17 script17 {
    layer(13);
    alpha(0);
    scriptNew(script19);
    scriptNew(script20);
+20: // 20
    scriptNew(script21);
    scriptNew(script22);
    scriptNew(script18);
    loop {
        scriptNew(script24);
+12: // 32
    }
    stop();

interrupt[1]:
+40: // 72
    delete();
}


script 18 script18 {
    layer(13);
    sprite(sprite49);
    rotate(0.0, 0.0, 0.0);
    anchor(1, 0);
    blendMode(9);
    rgb(16, 64, 64);
    type(1);
    scale(2.5, 0.1);
    scaleTime(20, 4, 2.5, 1.5);
    pos(0.0, 32.0, 0.0);
    alpha(0);
    alphaTime(30, 0, 255);
    rgb(96, 160, 255);
    loop {
        rotateTime(40, 9, 0.0, 0.0, 0.0);
+40: // 40
        rotateTime(40, 9, 0.0, 0.0, 0.0);
+40: // 80
    }

interrupt[1]:
    scaleTime(10, 4, 2.0, 0.0);
    alphaTime(10, 0, 0);
+10: // 90
    delete();
}


script 19 script19 {
    layer(13);
    sprite(sprite49);
    rotate(0.0, 0.0, 0.049087387);
    anchor(1, 0);
    blendMode(1);
    type(1);
    scale(2.5, 0.1);
    scaleTime(20, 4, 2.5, 2.0);
    pos(0.0, 32.0, 0.0);
    alpha(0);
    alphaTime(30, 0, 160);
    rgb(96, 112, 255);
    loop {
        rotateTime(40, 9, 0.0, 0.0, -0.049087387);
+40: // 40
        rotateTime(40, 9, 0.0, 0.0, 0.049087387);
+40: // 80
    }

interrupt[1]:
    scaleTime(10, 4, 2.0, 0.0);
    alphaTime(10, 0, 0);
+10: // 90
    delete();
}


script 20 script20 {
    layer(13);
    sprite(sprite49);
    rotate(0.0, 0.0, -0.049087387);
    anchor(1, 0);
    blendMode(1);
    type(1);
    scale(2.5, 0.1);
    scaleTime(20, 4, 2.5, 2.0);
    pos(0.0, 32.0, 0.0);
    alpha(0);
    alphaTime(30, 0, 160);
    rgb(48, 96, 255);
    loop {
        rotateTime(40, 9, 0.0, 0.0, 0.049087387);
+40: // 40
        rotateTime(40, 9, 0.0, 0.0, -0.049087387);
+40: // 80
    }

interrupt[1]:
    scaleTime(10, 4, 2.0, 0.0);
    alphaTime(10, 0, 0);
+10: // 90
    delete();
}


script 21 script21 {
    layer(13);
    sprite(sprite49);
    rotate(0.0, 0.0, 0.049087387);
    anchor(1, 0);
    blendMode(1);
    type(1);
    scale(2.5, 0.1);
    scaleTime(20, 4, 2.5, 2.0);
    pos(0.0, 32.0, 0.0);
    alpha(0);
    alphaTime(30, 0, 160);
    rgb(32, 80, 255);
    loop {
        rotateTime(40, 9, 0.0, 0.0, -0.049087387);
+40: // 40
        rotateTime(40, 9, 0.0, 0.0, 0.049087387);
+40: // 80
    }

interrupt[1]:
    scaleTime(10, 4, 2.0, 0.0);
    alphaTime(10, 0, 0);
+10: // 90
    delete();
}


script 22 script22 {
    layer(13);
    sprite(sprite49);
    rotate(0.0, 0.0, -0.049087387);
    anchor(1, 0);
    blendMode(1);
    type(1);
    scale(2.5, 0.1);
    scaleTime(20, 4, 2.5, 2.0);
    pos(0.0, 32.0, 0.0);
    alpha(0);
    alphaTime(30, 0, 160);
    rgb(0, 64, 255);
    loop {
        rotateTime(40, 9, 0.0, 0.0, 0.049087387);
+40: // 40
        rotateTime(40, 9, 0.0, 0.0, -0.049087387);
+40: // 80
    }

interrupt[1]:
    scaleTime(10, 4, 2.0, 0.0);
    alphaTime(10, 0, 0);
+10: // 90
    delete();
}


script 23 script23 {
    alpha(0);
    loop {
        scriptNew(script24);
+12: // 12
    }

interrupt[1]:
+40: // 52
    delete();
}


script 24 script24 {
    layer(13);
    sprite(sprite50);
    blendMode(1);
    type(1);
    scale(0.0, 0.0);
    rgb(0, 96, 96);
    alpha(255);
    ins_314(1);
    scaleTime(30, 5, 1.5, 1.5);
    pos(-80.0, 0.0, 0.0);
+1: // 1
    posTime(30, 0, 448.0, 0.0, 0.0);
+30: // 31
    delete();
}


script 25 script25 {
    sprite(-1);
    layer(12);
    drawPoly(1.0, 32);
    blendMode(2);
    rgb(0, 224, 255);
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
    scaleTime(20, 4, 0.0, 0.0);
+20: // 60
    delete();
}


entry {
    path: "player/pl01/pl01b2.png",
    img_width: 96,
    img_height: 256,
    memory_priority: 0,
    sprites: {sprite50: {x: 1.0, y: 1.0, w: 94.0, h: 254.0}},
}


entry {
    path: "player/pl01/pl01g.png",
    img_width: 128,
    img_height: 128,
    memory_priority: 0,
    sprites: {sprite51: {x: 1.0, y: 1.0, w: 126.0, h: 126.0}},
}


script 26 script26 {
-1:
    layer(6);
    alpha(0);
    scale(0.0, 0.0);
0:
    scaleTime(20, 27, 1.0, 1.0);
    scriptNew(script32);
    scriptNew(script29);
    scriptNew(script30);
    scriptNew(script27);
    scriptNew(script28);
    stop();

interrupt[1]:
+20: // 20
    delete();
}


script 27 script27 {
-1:
    sprite(sprite51);
    layer(6);
    type(1);
    alpha(255);
    angleVel(0.13962634, 0.0, 0.13962634);
0:
    stop();

interrupt[1]:
    alphaTime(20, 0, 0);
    scaleTime(20, 0, 0.0, 0.0);
+20: // 20
    delete();
}


script 28 script28 {
-1:
    sprite(sprite51);
    layer(6);
    type(1);
    blendMode(2);
    alpha(255);
0:
    loop {
        scale(0.5, 0.5);
        scaleTime(20, 20, 0.7, 0.7);
+20: // 20
    }
    stop();

interrupt[1]:
    alphaTime(20, 0, 0);
    scaleTime(20, 0, 0.0, 0.0);
+20: // 40
    delete();
}


script 29 script29 {
-1:
    sprite(sprite51);
    layer(6);
    type(1);
    alpha(255);
    blendMode(1);
    angleVel(-0.08726646, 0.0, -0.08726646);
    scale(1.3, 1.3);
0:
    stop();

interrupt[1]:
    alphaTime(20, 0, 0);
    scaleTime(20, 0, 0.0, 0.0);
+20: // 20
    delete();
}


script 30 script30 {
-1:
    sprite(sprite51);
    layer(6);
    type(1);
    alpha(255);
    blendMode(1);
    angleVel(0.08726646, 0.0, 0.08726646);
    scale(1.15, 1.15);
0:
    stop();

interrupt[1]:
    alphaTime(20, 0, 0);
    scaleTime(20, 0, 0.0, 0.0);
+20: // 20
    delete();
}


script 31 script31 {
    sprite(-1);
    layer(12);
    drawPoly(1.0, 32);
    blendMode(9);
    rgb(128, 64, 0);
    rgb2(255, 192, 0);
    alpha(255);
    alpha2(255);
    scaleTime(60, 1, 600.0, 600.0);
+40: // 40
    alpha2Time(20, 0, 64);
    rgbTime(250, 0, 0, 0, 0);
    rgb2Time(250, 0, 0, 0, 0);
    stop();

interrupt[1]:
    alphaTime(20, 0, 0);
    scaleTime(20, 4, 0.0, 0.0);
+20: // 60
    delete();
}


script 32 script32 {
    sprite(-1);
    layer(6);
    drawPoly(1.0, 32);
    blendMode(1);
    rgb(255, 192, 0);
    rgb2(0, 0, 0);
    alpha(255);
    alpha2(255);
    scaleTime(60, 1, 144.0, 144.0);
    stop();

interrupt[1]:
    scaleTime(20, 4, 0.0, 0.0);
+20: // 20
    delete();
}


entry {
    path: "face/pl01/face_pl01no.png",
    img_width: 244,
    img_height: 244,
    offset_x: 163,
    offset_y: 8,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite52: {x: 0.0, y: 0.0, w: 244.0, h: 244.0}},
}


entry {
    path: "face/pl01/face_pl01n2.png",
    img_width: 244,
    img_height: 244,
    offset_x: 163,
    offset_y: 8,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite53: {x: 0.0, y: 0.0, w: 244.0, h: 244.0}},
}


entry {
    path: "face/pl01/face_pl01hp.png",
    img_width: 244,
    img_height: 244,
    offset_x: 163,
    offset_y: 8,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite54: {x: 0.0, y: 0.0, w: 244.0, h: 244.0}},
}


entry {
    path: "face/pl01/face_pl01an.png",
    img_width: 244,
    img_height: 244,
    offset_x: 163,
    offset_y: 8,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite55: {x: 0.0, y: 0.0, w: 244.0, h: 244.0}},
}


entry {
    path: "face/pl01/face_pl01sw.png",
    img_width: 244,
    img_height: 244,
    offset_x: 163,
    offset_y: 8,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite56: {x: 0.0, y: 0.0, w: 244.0, h: 244.0}},
}


entry {
    path: "face/pl01/face_pl01dp.png",
    img_width: 244,
    img_height: 244,
    offset_x: 163,
    offset_y: 8,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite57: {x: 0.0, y: 0.0, w: 244.0, h: 244.0}},
}


entry {
    path: "face/pl01/face_pl01pr.png",
    img_width: 244,
    img_height: 244,
    offset_x: 163,
    offset_y: 8,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite58: {x: 0.0, y: 0.0, w: 244.0, h: 244.0}},
}


entry {
    path: "face/pl01/face_pl01sp.png",
    img_width: 244,
    img_height: 244,
    offset_x: 163,
    offset_y: 8,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite59: {x: 0.0, y: 0.0, w: 244.0, h: 244.0}},
}


entry {
    path: "face/dummy.png",
    img_width: 4,
    img_height: 4,
    img_format: FORMAT_GRAY_8,
    memory_priority: 0,
    sprites: {sprite60: {x: 0.0, y: 0.0, w: 4.0, h: 4.0}},
}


entry {
    path: "face/pl01/face_pl01bs.png",
    img_width: 460,
    img_height: 680,
    offset_x: 31,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {
        sprite61: {x: 0.0, y: 0.0, w: 460.0, h: 680.0},
        sprite62: {x: 0.0, y: 0.0, w: 0.0, h: 0.0},
    },
}


script 33 script33 {
    sprite(sprite61);
    anchor(1, 1);
    ins_431(1);
    alpha(0);
    alphaTime(15, 0, 255);
    pos(-96.0, 296.0, 0.0);
    layer(25);
    resolutionMode(2);
    resampleMode(1);

interrupt[3]:
    layer(26);
    resolutionMode(2);
    posTime(15, 2, -64.0, 296.0, 0.0);
    rgbTime(15, 0, 96, 96, 96);
+15: // 15
    stop();

interrupt[2]:
    layer(27);
    resolutionMode(2);
    posTime(15, 5, 0.0, 280.0, 0.0);
    rgbTime(15, 0, 255, 255, 255);
+15: // 30
    stop();

interrupt[7]:
    posTime(2, 0, -8.0, 272.0, 0.0);
+2: // 32
    posTime(2, 0, -4.0, 284.0, 0.0);
+2: // 34
    posTime(2, 0, 8.0, 276.0, 0.0);
+2: // 36
    posTime(2, 0, 4.0, 288.0, 0.0);
+2: // 38
    posTime(2, 0, 0.0, 272.0, 0.0);
+2: // 40
    posTime(2, 0, -8.0, 284.0, 0.0);
+2: // 42
    posTime(2, 0, -4.0, 276.0, 0.0);
+2: // 44
    posTime(2, 0, 8.0, 288.0, 0.0);
+2: // 46
    posTime(2, 0, -4.0, 276.0, 0.0);
+2: // 48
    posTime(2, 0, 0.0, 284.0, 0.0);
+15: // 63
    stop();

interrupt[8]:
    layer(27);
    resolutionMode(2);
    posTime(15, 2, -64.0, 296.0, 0.0);
    rgbTime(15, 0, 96, 96, 240);
+15: // 78
    stop();

interrupt[1]:
    posTime(30, 6, -96.0, 296.0, 0.0);
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
    sprite(sprite61);
    caseReturn();

interrupt[25]:
    sprite(sprite62);
    caseReturn();
}


script 34 script34 {
    layer(25);
    sprite(sprite52);
    anchor(1, 1);
    ins_431(1);
    alpha(0);
    alphaTime(15, 0, 255);
    pos(36.0, 304.0, 0.0);
    layer(25);
    resolutionMode(2);
    resampleMode(1);

interrupt[3]:
    layer(26);
    resolutionMode(2);
    posTime(15, 2, 68.0, 304.0, 0.0);
    rgbTime(15, 0, 96, 96, 96);
+15: // 15
    stop();

interrupt[2]:
    layer(27);
    resolutionMode(2);
    posTime(15, 5, 132.0, 288.0, 0.0);
    rgbTime(15, 0, 255, 255, 255);
+15: // 30
    stop();

interrupt[7]:
    posTime(2, 0, 124.0, 280.0, 0.0);
+2: // 32
    posTime(2, 0, 128.0, 292.0, 0.0);
+2: // 34
    posTime(2, 0, 140.0, 284.0, 0.0);
+2: // 36
    posTime(2, 0, 136.0, 296.0, 0.0);
+2: // 38
    posTime(2, 0, 132.0, 280.0, 0.0);
+2: // 40
    posTime(2, 0, 124.0, 292.0, 0.0);
+2: // 42
    posTime(2, 0, 128.0, 284.0, 0.0);
+2: // 44
    posTime(2, 0, 140.0, 296.0, 0.0);
+2: // 46
    posTime(2, 0, 128.0, 284.0, 0.0);
+2: // 48
    posTime(2, 0, 132.0, 292.0, 0.0);
+15: // 63
    stop();

interrupt[8]:
    layer(27);
    resolutionMode(2);
    posTime(15, 2, 68.0, 304.0, 0.0);
    rgbTime(15, 0, 96, 96, 240);
+15: // 78
    stop();

interrupt[1]:
    posTime(30, 6, 36.0, 304.0, 0.0);
    alphaTime(30, 0, 0);
+30: // 108
    delete();

interrupt[17]:
    sprite(sprite52);
    caseReturn();

interrupt[18]:
    sprite(sprite53);
    caseReturn();

interrupt[19]:
    sprite(sprite54);
    caseReturn();

interrupt[20]:
    sprite(sprite55);
    caseReturn();

interrupt[21]:
    sprite(sprite56);
    caseReturn();

interrupt[22]:
    sprite(sprite57);
    caseReturn();

interrupt[23]:
    sprite(sprite58);
    caseReturn();

interrupt[24]:
    sprite(sprite59);
    caseReturn();

interrupt[25]:
    sprite(sprite62);
    caseReturn();
}


script 35 script35 {
-1:
    alpha(0);
    layer(24);
    resolutionMode(2);
    pos(-80.0, 0.0, 0.0);
0:
    scriptNewFront(script34);
    scriptNewFront(script33);
    stop();

interrupt[1]:
+30: // 30
    delete();
}
