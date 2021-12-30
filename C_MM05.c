#include <stdio.h>
#include <math.h>

int main(){

	double n;
	scanf("%lf",&n);
	n=n*n;
	n=(int)(10*n+0.5);
	n=n/10;
	printf("%.1f\n",n);




return 0;
}
