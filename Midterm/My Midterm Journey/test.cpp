#include <iostream>
using namespace std;

int main(){
	int n, product=1, i;
	cout<<"Enter num: ";
	cin>>n;
	
	for(i=1;i<=n;i++){
		product = product*i;
		cout<<i;
		if(i<n)
		cout<<" * ";
		else
		cout<<" : ";
	}
	
	cout<<n<<" Factorial is: "<<product;
	
	return 0;
}
