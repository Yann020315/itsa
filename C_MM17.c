#include <stdio.h>

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int min=n,gcd=1;
	if(m<n)min=m;
	for(int i=1;i<=min;i++){
		if(n%i==0&&m%i==0)
			gcd=i;
	}
	printf("%d\n",gcd);
	


	return 0;
}
