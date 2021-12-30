#include <stdio.h>

int main(){
	int n,count=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%5==0&&i%7==0){
			if(count==1){
				printf("%d",i);
				count++;
			}
			else
				printf(" %d",i);
		}

	}
	printf("\n");








	return 0;
}
