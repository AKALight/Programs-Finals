#include <iostream>
using namespace std;

int main(){
	int num,expo,product=1;
	
	cout<<"Enter the base and exponent respectively: ";
	cin>>num>>expo;
	int i;
	for(i=0;i<expo;i++)
	product*=expo;
cout<<"Results: ";    
cout<<num<<"^"<<expo<<" = "<<product;
}