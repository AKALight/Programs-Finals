#include <iostream>

using namespace std;

int main(){
	int n, c , sum , num;
	cout<<"Enter the number: ";
	cin>>n;
	
	c = 1;
	num = 0;
	
	for(c >= 1; c <= n; c++){
	cout<<c<<" + ";
	sum = c + num;
	num = sum;
	sum =  num;

}
    cout<<" = "<<sum;
}
