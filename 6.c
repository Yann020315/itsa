#include <stdio.h>

int main(){
	int month;
	scanf("%d",&month);
	if(month==3||month==4||month==5)printf("Spring\n");
 	if(month==6||month==7||month==8)printf("Summer\n");
 	if(month==9||month==10||month==11)printf("Autumn\n");
 	if(month==12||month==1||month==2)printf("Winter\n");





	return 0;
}
/*問題描述：
試撰寫一程式，可輸入月份，然後判斷其所屬的季節（ 3~5 月為春季，6~8 月為夏季， 9~11 月為秋季， 12~2 月為冬季）。*/