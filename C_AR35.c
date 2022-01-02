#include <stdio.h>  
 
  
int main() {  
  int year;
  scanf("%d",&year);
  int rmd=year%12;
  if(rmd==4)printf("rat\n");
  else if(rmd==5)printf("ox\n");
  else if(rmd==6)printf("tiger\n");
  else if(rmd==7)printf("rabbit\n");
  else if(rmd==8)printf("dragon\n");
  else if(rmd==9)printf("snake\n");
  else if(rmd==10)printf("horse\n");
  else if(rmd==11)printf("sheep\n");
  else if(rmd==0)printf("monkey\n");
  else if(rmd==1)printf("rooster\n");
  else if(rmd==2)printf("dog\n");
  else if(rmd==3)printf("pig\n");
   
    return 0;  
} 