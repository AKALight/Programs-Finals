#include <iostream>
using namespace std;

int main(){
	int n, i, k;
	cout<<"Enter num: ";
	cin>>n;
	
	for(i=1;i<=n;i++){
		for(k=1;k<=i;k++)
    {
	cout<<" * ";
    } 
    cout<<endl;
	}
	
	
	return 0;
}
