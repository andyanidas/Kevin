#include<iostream>

using namespace std;

int main(){
	int num;
	cin>>num;
	
	int lastDigit = num%10;
	
	for(;num>10;){
		num=num/10;
	}
	cout<<"Last Digit : "<<lastDigit<<endl;
	cout<<"First Digit: "<<num;
	
	return 0;
}
