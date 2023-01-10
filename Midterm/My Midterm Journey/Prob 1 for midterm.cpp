#include <iostream>

using namespace std;

int main(){
	int n, c , sum;
	cout<<"Enter the number: ";
	cin>>n;
	sum=0;
	
	num = 0;
	
	for(c = 1; c <= n; c++){
	sum = c + sum;
	cout<<c;
	if(c==n)
	cout<<"=";
	else
	cout<<"+";
}
	cout<<sum;
}
