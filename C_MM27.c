#include <stdio.h>

int main(){
	int n,m,total=0;
	scanf("%d %d",&n,&m);
	if(n>m){
		int tmp=n;
		n=m;
		m=tmp;
	}
	for(int i=n;i<=m;i++){
		total=total+i;
	}
	printf("%d\n",total);








	return 0;
}
