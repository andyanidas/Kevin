#include<iostream>

using namespace std;

int main(){
	int num,copyNum,count=0,tens=1,newNum; //tens = 10000
	cin>>num; //123456 -> 623451
	copyNum = num;
	int lastDigit = num%10;
	
	for(;num>10;){
		num=num/10;
		count++;
	}
	count++;
	
	//123456 % 100000
	for(int i = 0; i<count-1; i++){//1*10*10*10*10*10
		tens = tens*10; //100000
	}
	
	newNum = copyNum % tens; //23456
	newNum = newNum + tens*lastDigit;//23456 + 600000 = 623456
											//  23456
	newNum = newNum/10; // 62345 -> 623451
	newNum = newNum*10 + num;
	
	cout<<newNum;
	
	
	
	
	
	
	return 0;
}
