/*#define _EX
#ifdef _EX

#include"libOne.h"
void gmain() {
    window(1920, 1080, full);
    //爆発
    struct EXPLOSION {
        float px, py, angle, scale;
        int interval, counter = -1;
    };
   /* float px = width / 2, py = height / 2, angle = 0, scale = 1;
    int counter = 0, interval = 8;
    const int numImgs = 8;
    int imgs[numImgs];
    for (int i = 0; i < numImgs; i++) {
        char filename[64];
        sprintf_s(filename, "assets\\lady\\a%d.png",i);
        imgs[i] = loadImage(filename);
       
    const int numExplosions = 30;
    struct EXPLOSION e[numExplosions];
    const int numImgs= 60;
    int imgs[numImgs];
    int TriggerCnt = 0;
    int TriggerInteval = 10;
    for (int i = 0; i < numImgs; i++) {
        char filename[32];
        sprintf_s(filename, "assets\\explosion\\a%02d.png", i);
        imgs[i] = loadImage(filename);

    }
    while (notQuit) {
        //爆発トリガー
        ++TriggerCnt %= TriggerInteval;
        if (TriggerCnt=TriggerInteval) {
            for (int i = 0; i < numExplosions; i++) {
                if (e[i].counter == -1) {
                    e[i].px = random(width / 2 - 200, width / 2 + 200);
                    e[i].py = random(height / 2 - 100, height / 2 + 100);
                    e[i].angle = random(6.28f);
                    e[i].scale = random(5, 10);
                    e[i].interval = random(1, 3);
                    e[i].counter = 0;
                    i = numExplosions;
                }
            }
        }

        
        //爆発振興
        for (int i = 0; i < numExplosions; i++) {
            if (e[i].counter >= 0) {
                e[i].counter++;
                if (e[i].counter == e[i].interval * numImgs) {
                    e[i].counter = -1;
                }
            }
        }
        //描画
        clear();
        for (int i = 0; i < numExplosions; i++) {
            if (e[i].counter >= 0) {
                rectMode(CENTER);
                int no = e[i].counter / e[i].interval;
                image(imgs[no], e[i].px, e[i].py, e[i].angle, e[i].scale);
            }
        }
        /*++counter %= numImgs*interval;
        int no = counter / interval;
        clear();
        rectMode(CENTER);
        image(imgs[no], px, py, angle, scale);
                 
    }
   
}

#endif
*/














#include"libOne.h"
void gmain() {
    window(1920, 1080, full);
    //キャラデータ
    float px = width / 2, py = height / 2, angle = 0, scale = 1.0f;
    int counter = -1, interval = 8;
    //画像番号配列データ
    const int numImgs = 8;
    int imgs[numImgs];
    //画像読み込み
    for (int i = 0; i < numImgs; i++) {
        char filename[32];
        sprintf_s(filename, "assets\\lady\\a%d.png", i);
        imgs[i] = loadImage(filename);
    }
    //メインループ
    ShowCursor(false);
    while (notQuit) {
        int maxFrame = interval * numImgs;
        ++counter %= maxFrame;
        int no = counter / interval;
        //描画
        clear(200, 160, 200);
        rectMode(CENTER);
        image(imgs[no], px, py, angle, scale);
    }
    ShowCursor(true);
}

/*
#ifdef _SAMPLE2
#include"libOne.h"
void gmain() {
    window(1920, 1080, full);
    //爆発データ
    struct EXPLOSION {
        float px, py, angle, scale;
        int interval, counter = -1;
    };
    const int numExplosions = 30;
    struct EXPLOSION e[numExplosions];
    int triggerCnt = 0;
    int triggerInterval = 5;
    //画像データ
    const int numImgs = 60;
    int imgs[numImgs];
    for (int i = 0; i < numImgs; i++) {
        char filename[32];
        sprintf_s(filename, "assets\\explosion\\a%02d.png", i);
        imgs[i] = loadImage(filename);
    }
    ShowCursor(false);
    while (notQuit) {
        //爆発開始
        ++triggerCnt %= triggerInterval;
        if (triggerCnt == 0) {
            for (int i = 0; i < numExplosions; i++) {
                if (e[i].counter == -1) {
                    e[i].px = random(width / 2 - 150, width / 2 + 150);
                    e[i].py = random(height / 2 - 100, height / 2 + 100);
                    e[i].angle = random(3.14f * 2);
                    e[i].scale = random(5.0f, 10.0f);
                    e[i].interval = random(1, 3);
                    e[i].counter = 0;
                    i = numExplosions;
                }
            }
        }
        //爆発進行
        for (int i = 0; i < numExplosions; i++) {
            if (e[i].counter >= 0) {
                ++e[i].counter;
                //爆発終了
                if (e[i].counter >= e[i].interval * numImgs) {
                    e[i].counter = -1;
                }
            }
        }
        //描画
        clear(60, 120, 240);
        rectMode(CENTER);
        for (int i = 0; i < numExplosions; i++) {
            if (e[i].counter >= 0) {
                int no = e[i].counter / e[i].interval;
                image(imgs[no], e[i].px, e[i].py, e[i].angle, e[i].scale);
            }
        }
    }
    ShowCursor(true);
}
#endif
*/