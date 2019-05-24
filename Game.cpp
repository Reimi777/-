#include "Game.h"
#include "SceneMgr.h"
#include "DxLib.h"
#include "Fps.h"

static int mImageHandle;    //�摜�n���h���i�[�p�ϐ�
							//������

int Frames=0;
int Second=0;
int tmp1 = 0;
int tmp2 = 0;
int Select_Music = 1;


void Game_Initialize() {
	mImageHandle = LoadGraph("�摜/Scene_Game.png");    //�摜�̃��[�h
}

//�I������
void Game_Finalize() {
	DeleteGraph(mImageHandle);    //�摜�̉��
}

//�X�V
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

	if (CheckHitKey(KEY_INPUT_ESCAPE) != 0) { //Esc�L�[��������Ă�����
		SceneMgr_ChangeScene(eScene_Menu);//�V�[�������j���[�ɕύX
	}

	if (CheckHitKey(KEY_INPUT_SPACE) != 0) { //Esc�L�[��������Ă�����
		SceneMgr_ChangeScene(eScene_Playing);//�V�[�������j���[�ɕύX
	}





}




//�`��
void Game_Draw() {
	DrawGraph(0, 0, mImageHandle, FALSE);
	
	DrawFormatString(0, 60, GetColor(255, 255, 255), "�������������̓V�C�� %d �ł�", Select_Music);
	DrawFormatString(0, 80, GetColor(255, 255, 255), "�ӂ�[�����̓V�C�� %d �ł�", Frames);
	DrawFormatString(0, 120, GetColor(255, 255, 255), "���������̓V�C�� %d �ł�", Second);
	

	DrawString(0, 0, "�Q�[����ʂł��B", GetColor(255, 255, 255));
	DrawString(0, 20, "Esc�L�[�������ƃ��j���[��ʂɖ߂�܂��B", GetColor(255, 255, 255));
}