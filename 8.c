#include <stdio.h>

int main(){
	int p;
	scanf("%d",&p);
	int count=0;
 	for(int i=2;i<p;i++){
		if(p%i==0)count++;
 	}
	if(count==0)printf("YES\n");
	else printf("NO\n");


	return 0;
}
/*問題描述：
試撰寫一個程式，由輸入一個整數，然後判別此數是否為質數。質數是指除了 1 和它本身之外，沒有其它的數可以整除它的數，例如， 2, 3, 5, 7 與 11 等皆為質數。*/