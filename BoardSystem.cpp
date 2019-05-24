#include "BoardSystem.h"
#include <DXLib.h>

// right_pos は曲における正しい判定の位置を表す(仮置き)



int Start_elapse(){

	elapse = 0;



}







int line1(){                                                  //Line1判定

	
	if (CheckHitKey(KEY_INPUT_D) == 1 && Zone == 1) {    // 押されていて、なおかつゾーンが適切な場所に入っている

		if (Tama_press_time - right_pos_saizenretsu1 <= Perfect_Judgement_Width                                 //Perfect判定 最大値
			&& Tama_press_time - right_pos_saizenretsu1 >= Perfect_Judgement_Width) {                           //Perfect判定 最小値

			

		}






	}



}

