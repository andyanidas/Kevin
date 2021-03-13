#include<iostream>

using namespace std;

int main(){
	int n;
	int total = 0;
	cout<<"Input upper range: ";
	cin>>n;	//10
	
	
	for(int i = 1 ; i<=n ; i++){
		total = total + i;
	}
	cout<<total;
	
	
	return 0;
}
