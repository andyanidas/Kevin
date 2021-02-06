#include<iostream>

using namespace std;

int main(){
	int days; //days  = 1000
	cin>>days;	//	days/365 = 2 	// days-365*(days/365) = 270 -> days + weeks
	
	cout<<days/365<<" years ";		//2 years
	cout<<(days - (days/365)*365)/7<<" weeks ";	//38 weeks
	cout<<days - days/365*365 - (days - days/365*365)/7*7<<" days";
	
	
	
	
	return 0;
}	

