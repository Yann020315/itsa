#include <stdio.h>

int main(){
	double n,ans=1;
	scanf("%lf",&n);
	/*if(n==0){ 
		printf("1\n");
		return 0;
	}*/
	for(int i=1;i<=n;i++){
		ans=ans*i;
	}
	printf("%.0f\n",ans);






	return 0;
}
