#include <stdio.h>
#include <math.h>

int main(){
	double r,total=0.0;
	int n,p;

	scanf("%lf %d %d",&r,&n,&p);

	for(int i=0;i<n;i++){
		total=total+p;
		total=total*r+total;
	}
	total=floor(total);
	printf("%.0lf\n",total);



return 0;
}

