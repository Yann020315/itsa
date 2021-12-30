#include <stdio.h>

int main(){

	int n,count=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			if(count==0){
				printf("%d",i);
				count++;
			}
			else printf(" %d",i);


		}

	}
	printf("\n");








	return 0;
}
