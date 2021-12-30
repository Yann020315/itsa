#include <stdio.h>

int main(){
	double c;
	scanf("%lf",&c);
	c=(c*1.8)+32;
	c=(int)(c*10+0.5);
	c=c/10;
	printf("%.1f\n",c);



return 0;
}
