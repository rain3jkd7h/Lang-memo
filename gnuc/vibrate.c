#include <math.h>

struct vec2d{
	int x,y;
};

int x=500;

/*
*	
*	vibrate_box�̓��������͈ȉ��̒ʂ�B
*	n�́A���[�v�����̖��߂ɂ����Z����Ă�����Ԃł��邱��
*	���Wx�́A�s�ϒl�ł��邱�ƁB
*
*	���Fy = x-A*(-1)^n*(n%B-B-1)
*
*	x - { 
*		A* 				//�U�ꕝ
*		(-1)^n * 		//�����Ł}�����݂ɏo��������B
*		(n%B-(B-1))		//���̌v�Z�́Ax���W�̒l���ŏI�I�ɂ��̂܂ܑ�������邽�߁B
*	}
*
*	�Ȃ��AB�̒l��FPS��菬������Ώ������قǂ悢�B
*
*/
void vibrate_box(struct vec2d *v2,int count) {
	v2.x = x-(4*pow(-1,count)*(count%8-7));
}