#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int total=0;
 	for(int i=1;i<=n;i++){
		if(i%3==0)total=total+i;
 	}
  	printf("%d\n",total);






	return 0;
}
/*問題描述：
試寫一個程式，輸入一正整數N，可計算出1到N之間可被3整除的數值之總和。*/