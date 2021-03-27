#include<iostream>
using namespace std;


int main(){
	int num = 163148; 
	int sum = 0;
	
	
	while(num>0){
		sum = sum + num%10; //modulo
		num = num/10;
	}
	
	cout<<sum;
	
	
	return 0;
}
/*
int x = 100;
int y = 5;

x = x*2 + 15; // x = 100*2 + 15 // 100 = 215
cout<<x;





*/


