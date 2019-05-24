#include "Playing.h"
#include "SceneMgr.h"
#include "DxLib.h"


static int mHandle;

void Playing_Initialize() {
	mHandle = LoadGraph("画像/板.png");




}




void Playing_Finalize() {

	DeleteGraph(mHandle);

}//終了処理


void Playing_Update() {


	if (CheckHitKey(KEY_INPUT_ESCAPE) != 0) { //Escキーが押されていたら
		SceneMgr_ChangeScene(eScene_Menu);//シーンをメニューに変更
	}

}







void Playing_Draw() {

	DrawFormatString(0, 60, GetColor(255, 255, 255), "うえした今日の天気はです");
	DrawRotaGraph(600, 500, 0.75, 0.0, mHandle, TRUE);

}//描画
