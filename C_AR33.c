#include <stdio.h>

int main(){

	int N,M;
	while(scanf("%d %d",&N,&M)!=-1){
		if(N==0||M==0){
			return 0;
		}
		else{
		int matrix[N][M];
		int matrix_t[M][N];
		for(int i=0;i<N;i++){
			for(int j=0;j<M;j++){
				scanf("%d",&matrix[i][j]);
				matrix_t[j][i]=matrix[i][j];
			}
		}
		for(int i=0;i<M;i++){
			for(int j=0;j<N;j++){
				if(j!=0){
					printf(" %d",matrix_t[i][j]);
				}
				else{
					printf("%d",matrix_t[i][j]);
				}

			}
			printf("\n");
		}
		}
	}

return 0;
}
