#include <iostream>  
using namespace std;  
  
int main() {  
  int year;
  cin>>year;
  int rmd=year%12;
  if(rmd==4)cout<<"rat"<<endl;
  else if(rmd==5)cout<<"ox"<<endl;
  else if(rmd==6)cout<<"tiger"<<endl;
  else if(rmd==7)cout<<"rabbit"<<endl;
  else if(rmd==8)cout<<"dragon"<<endl;
  else if(rmd==9)cout<<"snake"<<endl;
  else if(rmd==10)cout<<"horse"<<endl;
  else if(rmd==11)cout<<"sheep"<<endl;
  else if(rmd==0)cout<<"monkey"<<endl;
  else if(rmd==1)cout<<"rooster"<<endl;
  else if(rmd==2)cout<<"dog"<<endl;
  else if(rmd==3)cout<<"pig"<<endl;
   
    return 0;  
} 