#include "BoardSystem.h"
#include <DXLib.h>

// right_pos �͋Ȃɂ����鐳��������̈ʒu��\��(���u��)



int Start_elapse(){

	elapse = 0;



}







int line1(){                                                  //Line1����

	
	if (CheckHitKey(KEY_INPUT_D) == 1 && Zone == 1) {    // ������Ă��āA�Ȃ����]�[�����K�؂ȏꏊ�ɓ����Ă���

		if (Tama_press_time - right_pos_saizenretsu1 <= Perfect_Judgement_Width                                 //Perfect���� �ő�l
			&& Tama_press_time - right_pos_saizenretsu1 >= Perfect_Judgement_Width) {                           //Perfect���� �ŏ��l

			

		}






	}



}

