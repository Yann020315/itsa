#include <iostream>  
using namespace std;  
  
int main() {    
	int i=0; 
	int matrix[6];
	for(i;i<6;i++){
	cin>>matrix[i];
	}
	int num=0;
	for(int j=0;j<6;j++){
		num=num+matrix[j]*matrix[j]*matrix[j];
	}
	cout<<num<<endl;
    return 0;  
} 