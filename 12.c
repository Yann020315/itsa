#include <stdio.h>

int f(int n){
	if(n==1||n==0)return n+1;
	
	return f(n-1)+f(n/2);
}


int main(){
	int k,ans;
	scanf("%d",&k);
	ans=f(k);
	printf("%d\n",ans);

	return 0;
}