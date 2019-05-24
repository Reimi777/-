#pragma once

int elapse; //曲開始からの経過時間

int right_pos_saizenretsu1;

extern int Line1(); // Line1の判定
extern int Line2();
extern int Line3();
extern int Line4();
extern int Line5();
extern int Line6();
extern int Line7();
extern int Line8();
extern int Line9();
extern int Line10();
extern int Line11();
extern int Line12();
extern int Line13();
extern int Line14();
extern int Line15();
extern int Line16();

int hantei1;
int hantei2;
int hantei3;
int hantei4;
int hantei5;
int hantei6;
int hantei7;
int hantei8;
int hantei9;
int hantei10;
int hantei11;
int hantei12;
int hantei13;
int hantei14;
int hantei15;
int hantei16;

typedef enum Hantei {Perfect,Great,Good,Bad};           //判定の列挙型宣言




extern int Line_Draw();
extern int Line_Update();

int Perfect_Judgement_Width = 3; //パーフェクトの幅(フレーム)
int Great_Judgement_Width = 4;
int Good_Judgement_Width = 5;
int Bad_Judgement_Width = 7;
int Tama_press_time; // 弾を押した時間(elapse)



int Zone; // 無返還と変換とスペースで変えられるやつ




typedef struct {
	bool saizenretsu; //最前列にあるかどうかの判定
	




}tama;