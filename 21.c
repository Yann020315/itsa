#include <stdio.h>


int main(){
	float num,max,min;
	scanf("%f",&num);
	max=num;
	min=num;
	for(int i=0;i<9;i++){
		scanf("%f",&num);
		if(num>max){
			max=num;
		}
		if(num<min){
			min=num;
		}
	}
	printf("maximum:%.2f\nminimum:%.2f\n",max,min);

	return 0;
}

//寫一個程式來找出輸入的十個數字的最大值和最小值，數值不限定為整數，且值可存放於 float 型態數值內。