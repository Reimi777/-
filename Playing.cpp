#include "Playing.h"
#include "SceneMgr.h"
#include "DxLib.h"


static int mHandle;

void Playing_Initialize() {
	mHandle = LoadGraph("�摜/��.png");




}




void Playing_Finalize() {

	DeleteGraph(mHandle);

}//�I������


void Playing_Update() {


	if (CheckHitKey(KEY_INPUT_ESCAPE) != 0) { //Esc�L�[��������Ă�����
		SceneMgr_ChangeScene(eScene_Menu);//�V�[�������j���[�ɕύX
	}

}







void Playing_Draw() {

	DrawFormatString(0, 60, GetColor(255, 255, 255), "�������������̓V�C�͂ł�");
	DrawRotaGraph(600, 500, 0.75, 0.0, mHandle, TRUE);

}//�`��
