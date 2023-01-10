#include <iostream>
using namespace std;

int main(){
	int n, sum=0, i;
	cout<<"Enter num: ";
	cin>>n;
	
	for(i=1;i<=n;i++){
		sum = sum + i;
		
		if(i<n)
		cout<<" + ";
		else
		cout<<" = ";
	}
	cout<<"The sum is: "<<sum;
	
	return 0;
}
