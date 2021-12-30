#include <stdio.h>

int main(){
	int g;
	double h;
	
	while(scanf("%lf %d",&h,&g)!=EOF){
	if(g==1){
		printf("%.1f\n",(h-80)*0.7);
	}
	else if(g==2){
		printf("%.1f\n",(h-70)*0.6);



	}
	}



return 0;
}
