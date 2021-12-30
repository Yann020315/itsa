#include <stdio.h>

int main(){

	int n,ten,five,one;
	scanf("%d",&n);
	ten=n/10;
	n=n%10;
	five=n/5;
	n=n%5;
	one=n;
	printf("NT10=%d\nNT5=%d\nNT1=%d\n",ten,five,one);




return 0;
}
