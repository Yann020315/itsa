#include <stdio.h>


int main(){
	int i=0; 
	int matrix[6];
	for(i;i<6;i++){
	scanf("%d",&matrix[i]);
	}
	for(int j=5;j>=0;j--){
		if(j==5)
			printf("%d",matrix[j]);
		else
			printf(" %d",matrix[j]);
	}
	printf("\n");










return 0;
}
