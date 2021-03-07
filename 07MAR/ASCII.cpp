#include<iostream>

using namespace std;

int main(){
	char ch = '9'; // ch = 57
	int x = 9;	   // x = 9
	cout<<"ch = "<<ch<<endl;
	cout<<"x = "<<x<<endl;
	if(ch == x+48){ //is my ch equal to x ?
		cout<<"true";
	}else{
		cout<<"false";
	}
	cout<<endl;
	ch = 'a';
	ch = ch + 25;
	cout<<"ch = "<<ch;
	
	
	return 0;
}
