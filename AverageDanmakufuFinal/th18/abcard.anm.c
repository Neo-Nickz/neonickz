// search 85, replace with what you like
entry {
    path: "ability/abframe.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite0: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


script 0 script0 {
-1:
    ins_300(-1);
    ins_431(1);
    ins_307(1);
    ins_302(1);
    ins_402(0.75, 0.75);
    ins_400(68.0, 924.0, 0.0);
    ins_421(1, 2);
    ins_304(24);
    ins_313(2);
    ins_403(0);
0:
    ins_500(script3);
    ins_500(script4);
    ins_500(script1);
    ins_500(script2);
+20: // 20
    ins_3();
}


script 1 script1 {
-1:
    ins_300(sprite0);
    ins_431(1);
    ins_307(1);
    ins_302(1);
    ins_421(1, 2);
    ins_304(24);
    ins_313(2);
    ins_403(0);
    ins_409(20, 0, 255);
    ins_404(0, 32, 0);
0:
+20: // 20
    ins_3();

interrupt[5]:
    ins_409(8, 0, 64);
    ins_7();

interrupt[4]:
    ins_409(8, 0, 255);
    ins_7();
}


script 2 script2 {
    ins_300(sprite0);
    ins_431(1);
    ins_307(1);
    ins_302(1);
    ins_421(1, 2);
    ins_304(25);
    ins_313(2);
    ins_403(0);
    ins_409(20, 0, 255);
    ins_404(255, 255, 255);
+20: // 20
    ins_3();

interrupt[5]:
    ins_409(8, 0, 64);
    ins_7();

interrupt[4]:
    ins_409(8, 0, 255);
    ins_7();
}


script 3 script3 {
-1:
    ins_300(sprite3);
    ins_431(1);
    ins_307(1);
    ins_302(1);
    ins_421(1, 2);
    ins_304(25);
    ins_313(2);
    ins_403(0);
    ins_409(20, 0, 64);
0:
+20: // 20
    ins_3();

interrupt[5]:
    ins_409(8, 0, 64);
    ins_7();

interrupt[4]:
    ins_409(8, 0, 64);
    ins_7();
}


script 4 script4 {
-1:
    ins_300(sprite3);
    ins_431(1);
    ins_307(1);
    ins_302(1);
    ins_421(1, 2);
    ins_304(24);
    ins_313(2);
    ins_403(0);
    ins_404(32, 32, 32);
0:
    ins_409(20, 0, 224);
+20: // 20
    ins_3();

interrupt[5]:
    ins_409(8, 0, 64);
    ins_7();

interrupt[4]:
    ins_409(8, 0, 224);
    ins_7();

interrupt[3]:
    ins_404(32, 32, 32);
    ins_7();

interrupt[2]:
    ins_404(255, 255, 255);
    ins_7();

interrupt[6]:
    ins_7();
}


script 5 script5 {
-1:
    ins_300(-1);
    ins_431(1);
    ins_307(1);
    ins_302(1);
    ins_400(1056.0, 537.0, 0.0);
    ins_304(26);
    ins_313(2);
    ins_403(0);
0:
    ins_500(script10);
    ins_500(script11);
    ins_500(script6);
    ins_500(script7);
    ins_500(script8);
    ins_500(script9);
    loop {
        ins_410(120, 21, -0.034906585, 0.0, -0.034906585);
+120: // 120
        ins_410(120, 21, 0.06981317, 0.0, 0.06981317);
+120: // 240
    }
+20: // 260
    ins_3();
}


script 6 script6 {
-1:
    ins_300(sprite3);
    ins_431(1);
    ins_307(1);
    ins_302(1);
    ins_400(0.0, 0.0, 0.0);
    ins_304(26);
    ins_313(2);
    ins_403(0);
    ins_404(128, 128, 128);
0:
    ins_409(20, 0, 85);
+20: // 20
    ins_3();

interrupt[3]:
    ins_404(128, 128, 128);
    ins_7();

interrupt[2]:
    ins_404(255, 255, 255);
    ins_7();

interrupt[4]:
    ins_403(85);
    ins_7();
}


script 7 script7 {
-1:
    ins_300(sprite3);
    ins_431(1);
    ins_307(1);
    ins_302(1);
    ins_304(26);
    ins_313(2);
    ins_403(0);
0:
    ins_409(20, 0, 85);
+20: // 20
    ins_3();

interrupt[3]:
    ins_404(200, 200, 200);
    ins_7();

interrupt[2]:
    ins_404(255, 255, 255);
    ins_7();

interrupt[4]:
    ins_403(85);
    ins_7();
}


script 8 script8 {
-1:
    ins_300(sprite0);
    ins_431(1);
    ins_307(1);
    ins_302(1);
    ins_304(26);
    ins_313(2);
    ins_404(0, 32, 0);
    ins_403(0);
0:
    ins_409(20, 0, 85);
+20: // 20
    ins_3();

interrupt[3]:
    ins_7();

interrupt[2]:
    ins_7();

interrupt[4]:
    ins_403(85);
    ins_7();
}


script 9 script9 {
-1:
    ins_300(sprite0);
    ins_431(1);
    ins_307(1);
    ins_302(1);
    ins_304(26);
    ins_313(2);
    ins_404(0, 32, 0);
    ins_403(0);
0:
    ins_409(20, 0, 85);
+20: // 20
    ins_3();

interrupt[3]:
    ins_7();

interrupt[2]:
    ins_7();

interrupt[4]:
    ins_403(85);
    ins_7();
}


script 10 script10 {
-1:
    ins_300(sprite0);
    ins_431(1);
    ins_307(1);
    ins_302(1);
    ins_304(26);
    ins_313(2);
    ins_400(3.0, 3.0, 0.0);
    ins_404(0, 0, 0);
    ins_403(0);
0:
    ins_409(20, 0, 90);
+20: // 20
    ins_3();

interrupt[4]:
    ins_403(90);
    ins_7();
}


script 11 script11 {
-1:
    ins_300(sprite0);
    ins_431(1);
    ins_307(1);
    ins_302(1);
    ins_304(26);
    ins_303(1);
    ins_313(2);
    ins_403(0);
0:
    loop {
        ins_409(4, 0, 0);
+1: // 1
    }
}


script 12 script12 {
-1:
    ins_300(sprite3);
    ins_431(1);
    ins_307(1);
    ins_302(1);
    ins_400(0.0, 0.0, 0.0);
    ins_304(26);
    ins_313(2);
    ins_403(0);
    ins_404(255, 255, 255);
    ins_402(0.5, 0.5);
    ins_406(255, 255, 255);
    ins_405(255);
    ins_423(4);
0:
    ins_401(0.17453292, 0.0, 0.17453292);
    %REG[10005] = %REG[10013];
    %REG[10004] = %REG[10014];
    ins_409(20, 0, 255);
+20: // 20
    ins_3();

interrupt[3]:
    ins_412(10, 0, 0.25, 0.25);
    ins_404(128, 128, 128);
    ins_3();

interrupt[2]:
    ins_412(10, 0, 0.3, 0.3);
    ins_404(255, 255, 255);
    loop {
        ins_412(20, 9, 0.4, 0.4);
+20: // 40
        ins_412(20, 9, 0.3, 0.3);
+20: // 60
    }
    ins_7();

interrupt[7]:
    ins_401(0.0, 0.0, 0.0);
    ins_402(0.25, 0.25);
    ins_404(128, 128, 128);
    ins_7();

interrupt[8]:
    ins_401(0.0, 0.0, 0.0);
    ins_402(0.25, 0.25);
    ins_404(128, 128, 128);
    ins_7();

interrupt[9]:
    %REG[10004] = %REG[10004] - 120.0;
    ins_407(12, 0, %REG[10005], %REG[10004], 0.0);
    ins_7();

interrupt[10]:
    %REG[10004] = %REG[10004] + 120.0;
    ins_407(12, 0, %REG[10005], %REG[10004], 0.0);
    ins_7();

interrupt[11]:
    ins_409(12, 0, 0);
    ins_7();

interrupt[12]:
    ins_409(12, 0, 255);
    ins_7();

interrupt[13]:
    ins_7();

interrupt[14]:
    ins_403(255);
    ins_409(8, 0, 255);
    ins_7();

interrupt[15]:
    ins_404(48, 48, 128);
    ins_402(0.28, 0.28);
    ins_7();

interrupt[16]:
    ins_403(0);
    ins_409(8, 0, 0);
    ins_7();

interrupt[22]:
    ins_304(30);
    ins_313(2);
    ins_7();

interrupt[23]:
    ins_304(28);
    ins_313(2);
    ins_7();

interrupt[24]:
    ins_406(32, 32, 32);
    ins_7();

interrupt[5]:
    %REG[10005] = %REG[10005] + 340.0;
    %REG[10004] = %REG[10004] + 180.0;
    ins_407(12, 4, %REG[10005], %REG[10004], 0.0);
    ins_7();

interrupt[4]:
    %REG[10005] = %REG[10005] - 340.0;
    %REG[10004] = %REG[10004] - 180.0;
    ins_407(12, 4, %REG[10005], %REG[10004], 0.0);
    ins_7();
}


script 13 script13 {
-1:
    ins_300(sprite2);
    ins_431(1);
    ins_307(1);
    ins_400(0.0, 0.0, 0.0);
    ins_304(28);
    ins_313(2);
    ins_403(0);
    ins_404(255, 255, 255);
    ins_302(1);
0:
    ins_3();

interrupt[2]:
    ins_407(12, 0, 0.0, 0.0, 0.0);
    ins_409(12, 0, 255);
    ins_408(2, 0, 255, 255, 255);
    ins_401(0.0, 0.0, 0.0);
    ins_3();

interrupt[3]:
    ins_404(80, 80, 80);
    ins_408(2, 0, 80, 80, 80);
    ins_7();

interrupt[7]:
    ins_407(12, 0, -128.0, 0.0, 0.0);
    ins_409(12, 0, 0);
    ins_402(1.0, 1.0);
    ins_412(12, 0, 0.3, 1.0);
    ins_401(0.0, 0.0, 0.0);
    ins_410(12, 0, -0.20943952, 0.0, -0.20943952);
    ins_3();

interrupt[8]:
    ins_407(12, 0, 128.0, 0.0, 0.0);
    ins_409(12, 0, 0);
    ins_402(1.0, 1.0);
    ins_412(12, 0, 0.3, 1.0);
    ins_401(0.0, 0.0, 0.0);
    ins_410(12, 0, 0.20943952, 0.0, 0.20943952);
    ins_3();

interrupt[9]:
    ins_400(128.0, 0.0, 0.0);
    ins_407(12, 0, 0.0, 0.0, 0.0);
    ins_409(12, 0, 255);
    ins_402(0.3, 1.0);
    ins_412(12, 0, 1.0, 1.0);
    ins_401(0.20943952, 0.0, 0.20943952);
    ins_410(12, 0, 0.0, 0.0, 0.0);
    ins_3();

interrupt[10]:
    ins_400(-128.0, 0.0, 0.0);
    ins_407(12, 0, 0.0, 0.0, 0.0);
    ins_409(12, 0, 255);
    ins_402(0.3, 1.0);
    ins_412(12, 0, 1.0, 1.0);
    ins_401(-0.20943952, 0.0, -0.20943952);
    ins_410(12, 0, 0.0, 0.0, 0.0);
    ins_3();

interrupt[11]:
    ins_400(0.0, 0.0, 0.0);
    ins_407(12, 0, -320.0, 48.0, 0.0);
    ins_409(12, 0, 128);
    ins_402(1.0, 1.0);
    ins_412(12, 0, 0.75, 0.75);
    ins_401(0.0, 0.0, 0.0);
    ins_410(12, 0, -0.20943952, 0.0, -0.20943952);
    ins_3();

interrupt[12]:
    ins_400(0.0, 0.0, 0.0);
    ins_407(12, 0, 320.0, 48.0, 0.0);
    ins_409(12, 0, 128);
    ins_402(1.0, 1.0);
    ins_412(12, 0, 0.75, 0.75);
    ins_401(0.0, 0.0, 0.0);
    ins_410(12, 0, 0.20943952, 0.0, 0.20943952);
    ins_3();

interrupt[13]:
    ins_400(-320.0, 48.0, 0.0);
    ins_407(12, 0, -640.0, 96.0, 0.0);
    ins_409(12, 0, 0);
    ins_402(0.75, 0.75);
    ins_412(12, 0, 0.5, 0.5);
    ins_401(-0.20943952, 0.0, -0.20943952);
    ins_410(12, 0, -0.41887903, 0.0, -0.41887903);
    ins_3();

interrupt[14]:
    ins_400(320.0, 48.0, 0.0);
    ins_407(12, 0, 640.0, 96.0, 0.0);
    ins_409(12, 0, 0);
    ins_402(0.75, 0.75);
    ins_412(12, 0, 0.5, 0.5);
    ins_401(0.20943952, 0.0, 0.20943952);
    ins_410(12, 0, 0.41887903, 0.0, 0.41887903);
    ins_3();

interrupt[15]:
    ins_400(320.0, 48.0, 0.0);
    ins_407(12, 0, 0.0, 0.0, 0.0);
    ins_409(12, 0, 255);
    ins_402(0.75, 0.75);
    ins_412(12, 0, 1.0, 1.0);
    ins_401(0.20943952, 0.0, 0.20943952);
    ins_410(12, 0, 0.0, 0.0, 0.0);
    ins_3();

interrupt[16]:
    ins_400(-320.0, 48.0, 0.0);
    ins_407(12, 0, 0.0, 0.0, 0.0);
    ins_409(12, 0, 255);
    ins_402(0.75, 0.75);
    ins_412(12, 0, 1.0, 1.0);
    ins_401(-0.20943952, 0.0, -0.20943952);
    ins_410(12, 0, 0.0, 0.0, 0.0);
    ins_3();

interrupt[17]:
    ins_400(640.0, 96.0, 0.0);
    ins_407(12, 0, 320.0, 48.0, 0.0);
    ins_409(12, 0, 128);
    ins_402(0.5, 0.5);
    ins_412(12, 0, 0.75, 0.75);
    ins_401(0.41887903, 0.0, 0.41887903);
    ins_410(12, 0, 0.20943952, 0.0, 0.20943952);
    ins_3();

interrupt[18]:
    ins_400(-640.0, 96.0, 0.0);
    ins_407(12, 0, -320.0, 48.0, 0.0);
    ins_409(12, 0, 128);
    ins_402(0.5, 0.5);
    ins_412(12, 0, 0.75, 0.75);
    ins_401(-0.41887903, 0.0, -0.41887903);
    ins_410(12, 0, -0.20943952, 0.0, -0.20943952);
    ins_3();

interrupt[19]:
    ins_400(-320.0, 48.0, 0.0);
    ins_409(12, 0, 128);
    ins_402(0.75, 0.75);
    ins_401(0.0, 0.0, 0.0);
    ins_410(12, 0, -0.20943952, 0.0, -0.20943952);
    ins_3();

interrupt[20]:
    ins_400(0.0, 0.0, 0.0);
    ins_409(12, 0, 255);
    ins_402(1.0, 1.0);
    ins_401(0.0, 0.0, 0.0);
    ins_3();

interrupt[21]:
    ins_400(320.0, 48.0, 0.0);
    ins_409(12, 0, 128);
    ins_402(0.75, 0.75);
    ins_401(0.0, 0.0, 0.0);
    ins_410(12, 0, 0.20943952, 0.0, 0.20943952);
    ins_3();

interrupt[22]:
    ins_304(30);
    ins_313(2);
    ins_7();
}


script 14 script14 {
-1:
    ins_431(1);
    ins_307(1);
    ins_302(1);
    ins_438(1);
0:
    ins_500(script16);
    ins_500(script15);
    ins_500(script17);
    ins_400(0.0, 0.0, 0.0);
    ins_304(16);
    loop {
        ins_410(30, 9, 0.17453292, 0.0, 0.17453292);
+30: // 30
        ins_410(30, 9, -0.17453292, 0.0, -0.17453292);
+30: // 60
    }
    ins_3();
}


script 15 script15 {
-1:
    ins_300(sprite11);
    ins_431(1);
    ins_307(1);
    ins_400(0.0, 0.0, 0.0);
    ins_304(16);
    ins_404(255, 255, 255);
    ins_402(0.3, 0.3);
    ins_302(1);
    ins_311(0);
0:
    ins_3();
}


script 16 script16 {
-1:
    ins_300(sprite1);
    ins_431(1);
    ins_307(1);
    ins_400(0.0, 0.0, 0.0);
    ins_304(16);
    ins_404(255, 255, 255);
    ins_302(1);
    ins_303(1);
0:
    loop {
        ins_412(7, 9, 0.9, 0.9);
+7: // 7
        ins_412(7, 9, 1.0, 1.0);
+7: // 14
    }
    ins_3();
}


script 17 script17 {
-1:
    ins_300(sprite0);
    ins_431(1);
    ins_307(1);
    ins_302(1);
    ins_304(16);
    ins_404(0, 32, 0);
    ins_402(0.3, 0.3);
0:
    ins_3();
}


entry {
    path: "ability/abitem.png",
    img_width: 40,
    img_height: 44,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite1: {x: 0.0, y: 0.0, w: 40.0, h: 44.0}},
}


entry {
    path: "ability/BACK_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite2: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/dummy.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite3: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/BLANK_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite4: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/BLANK_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite5: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/EXTEND_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite6: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/EXTEND_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite7: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/BOMB_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite8: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/BOMB_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite9: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/EXTEND2_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite10: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/EXTEND2_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite11: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/BOMB2_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite12: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/BOMB2_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite13: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/MOKOU_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite14: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/MOKOU_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite15: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/PENDULUM_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite16: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/PENDULUM_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite17: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/DANGO_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite18: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/DANGO_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite19: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/NARUMI_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite20: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/NARUMI_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite21: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/PACHE_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite22: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/PACHE_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite23: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/REIMU_OP_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite24: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/REIMU_OP_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite25: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/MARISA_OP_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite26: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/MARISA_OP_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite27: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/SAKUYA_OP_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite28: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/SAKUYA_OP_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite29: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/SANAE_OP_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite30: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/SANAE_OP_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite31: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/ITEM_CATCH_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite32: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/ITEM_CATCH_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite33: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/ITEM_LINE_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite34: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/ITEM_LINE_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite35: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/ALICE_OP_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite36: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/ALICE_OP_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite37: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/OKINA_OP_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite38: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/OKINA_OP_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite39: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/CIRNO_OP_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite40: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/CIRNO_OP_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite41: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/NUE_OP_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite42: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/NUE_OP_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite43: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/YOUMU_OP_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite44: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/YOUMU_OP_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite45: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/REIMU_OP2_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite46: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/REIMU_OP2_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite47: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/MARISA_OP2_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite48: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/MARISA_OP2_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite49: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/SAKUYA_OP2_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite50: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/SAKUYA_OP2_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite51: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/SANAE_OP2_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite52: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/SANAE_OP2_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite53: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/MAINSHOT_PU_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite54: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/MAINSHOT_PU_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite55: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/AUTOBOMB_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite56: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/AUTOBOMB_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite57: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/DEADBOMBEXTEND_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite58: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/DEADBOMBEXTEND_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite59: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/MAINSHOT_SP_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite60: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/MAINSHOT_SP_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite61: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/SPEEDQUEEN_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite62: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/SPEEDQUEEN_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite63: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/MAGICSCROLL_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite64: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/MAGICSCROLL_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite65: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/OPTION_BR_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite66: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/OPTION_BR_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite67: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/DEAD_SPELL_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite68: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/DEAD_SPELL_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite69: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/POWERMAX_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite70: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/POWERMAX_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite71: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/KOISHI_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite72: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/KOISHI_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite73: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/YUYUKO_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite74: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/YUYUKO_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite75: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/MONEY_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite76: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/MONEY_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite77: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/ROKUMON_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite78: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/ROKUMON_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite79: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/WARP_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite80: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/WARP_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite81: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/MOON_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite82: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/MOON_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite83: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/MIKOFLASH_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite84: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/MIKOFLASH_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite85: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/KANAME_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite86: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/KANAME_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite87: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/KOZUCHI_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite88: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/KOZUCHI_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite89: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/VAMPIRE_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite90: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/VAMPIRE_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite91: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/SUN_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite92: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/SUN_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite93: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/LILY_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite94: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/LILY_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite95: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/BASSDRUM_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite96: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/BASSDRUM_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite97: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/PSYCO_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite98: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/PSYCO_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite99: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/MANEKI_NEKO_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite100: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/MANEKI_NEKO_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite101: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/boss2_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite102: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/boss2_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite103: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/boss3_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite104: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/boss3_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite105: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/boss4_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite106: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/boss4_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite107: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/boss5b_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite108: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/boss5b_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite109: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/boss5_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite110: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/boss5_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite111: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/boss7_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite112: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/boss7_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite113: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/magatama_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite114: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/magatama_min.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite115: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}


entry {
    path: "ability/empty_max.png",
    img_width: 256,
    img_height: 320,
    memory_priority: 0,
    sprites: {sprite116: {x: 0.0, y: 0.0, w: 256.0, h: 320.0}},
}


entry {
    path: "ability/dummy.png",
    img_width: 64,
    img_height: 128,
    memory_priority: 0,
    low_res_scale: true,
    sprites: {sprite117: {x: 0.0, y: 0.0, w: 64.0, h: 80.0}},
}
