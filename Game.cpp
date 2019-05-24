#include "Game.h"
#include "SceneMgr.h"
#include "DxLib.h"
#include "Fps.h"

static int mImageHandle;    //画像ハンドル格納用変数
							//初期化

int Frames=0;
int Second=0;
int tmp1 = 0;
int tmp2 = 0;
int Select_Music = 1;


void Game_Initialize() {
	mImageHandle = LoadGraph("画像/Scene_Game.png");    //画像のロード
}

//終了処理
void Game_Finalize() {
	DeleteGraph(mImageHandle);    //画像の解放
}

//更新
void Game_Update() {

	

	if (CheckHitKey(KEY_INPUT_UP) != 0 && tmp1 == 0) { 
		
		Select_Music++;
		tmp1 = 1;

	}
	else if(CheckHitKey(KEY_INPUT_UP) == 0 && tmp1 == 1){

		tmp1 = 0;

	}

	if (CheckHitKey(KEY_INPUT_DOWN) != 0 && tmp2 == 0) {

		Select_Music--;
		tmp2 = 1;

	}else if (CheckHitKey(KEY_INPUT_DOWN) == 0 && tmp2 == 1) {

		tmp2 = 0;

	}

	if(Select_Music>100){

		Select_Music = 0;

	}
	else if (Select_Music < 0) {

		Select_Music = 100;

	}

	if (CheckHitKey(KEY_INPUT_ESCAPE) != 0) { //Escキーが押されていたら
		SceneMgr_ChangeScene(eScene_Menu);//シーンをメニューに変更
	}

	if (CheckHitKey(KEY_INPUT_SPACE) != 0) { //Escキーが押されていたら
		SceneMgr_ChangeScene(eScene_Playing);//シーンをメニューに変更
	}





}




//描画
void Game_Draw() {
	DrawGraph(0, 0, mImageHandle, FALSE);
	
	DrawFormatString(0, 60, GetColor(255, 255, 255), "うえした今日の天気は %d です", Select_Music);
	DrawFormatString(0, 80, GetColor(255, 255, 255), "ふれー今日の天気は %d です", Frames);
	DrawFormatString(0, 120, GetColor(255, 255, 255), "せこ今日の天気は %d です", Second);
	

	DrawString(0, 0, "ゲーム画面です。", GetColor(255, 255, 255));
	DrawString(0, 20, "Escキーを押すとメニュー画面に戻ります。", GetColor(255, 255, 255));
}