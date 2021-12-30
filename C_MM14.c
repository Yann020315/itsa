#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	int d,h,m,s;
	d=t/86400;
	t=t%86400;
	h=t/3600;
	t=t%3600;
	m=t/60;
	t=t%60;
	s=t;
	printf("%d days\n%d hours\n%d minutes\n%d seconds\n",d,h,m,s);








return 0;
}
