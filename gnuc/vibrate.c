#include <math.h>

struct vec2d{
	int x,y;
};

int x=500;

/*
*	
*	vibrate_boxの内部処理は以下の通り。
*	nは、ループ処理の命令により加算されていく状態であること
*	座標xは、不変値であること。
*
*	式：y = x-A*(-1)^n*(n%B-B-1)
*
*	x - { 
*		A* 				//振れ幅
*		(-1)^n * 		//ここで±を交互に出現させる。
*		(n%B-(B-1))		//この計算は、x座標の値を最終的にそのまま代入させるため。
*	}
*
*	なお、Bの値はFPSより小さければ小さいほどよい。
*
*/
void vibrate_box(struct vec2d *v2,int count) {
	v2.x = x-(4*pow(-1,count)*(count%8-7));
}