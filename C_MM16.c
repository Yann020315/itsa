#include <stdio.h>

int main(){

	int x,y;
	scanf("%d %d",&x,&y);
	int d=x*x+y*y;
	if(d<=40000)printf("inside\n");
	else printf("outside\n");





	return 0;
}

/*
問題描述：
有一圓形，直徑為200，且中心座標為(0,0)。請寫一支程式可以輸入「點」的座標，並判斷「點」是否在圓形的範圍內。如果「點」的位置剛好在邊界的話也算是在圓形範圍內(例：x=100，y=0)。
*/
