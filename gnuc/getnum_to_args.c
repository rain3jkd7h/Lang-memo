/*
*	第一引数numが、負数であるならば、
*	num*=(-1);
*	をするなどして対応する。
*	bufはキャストしてないけど、まぁ好きな型に・・・ね・・・
*/

void getnum_to_arg(int num,void *buf){
	//type ?=(int *)buf;
	int flag=0;
	for(unsigned int i=10.e+8;i;i/=10){
		if((num-num%i)/i%10||flag){		//このif文は先頭の0代入を回避するため。
			buf[len]=(num-num%i)/i%10;
			len++;
			flag=1;
		}
	}
}