#include<iostream>

using namespace std;

int main(){
	int num;
	cout<<"Enter an integer: ";
	cin>>num;
	/*
	1. num divisible by only 5
	2. num divisible by only 11
	3. num divisible by 5 and 11
	4. num is not divisible by 5 and 11
	*/
	if(num%5 == 0 && num%11 == 0){
		cout<<num<<" divisible by 5 and 11";
	}else if(num%5 == 0){
		cout<<num<<" divisible by only 5";
	}else if(num%11 == 0){
		cout<<num<<" divisible by only 11";
	}else {
		cout<<num<<" is not divisible by 5 and 11";
	}
	
	
	return 0;
}
