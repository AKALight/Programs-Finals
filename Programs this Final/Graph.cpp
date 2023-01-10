//let's make a graph
#include <iostream>
using namespace std;

int main(){
	int *number, user, print;
	
	number = new int[user];
	
	cout<<"~ Simple Graph ~"<<endl;
	
	for(user = 0; user != 5; user++)
	{
		cout<<"Enter the data: ";
		cin>>number[user];
	}
	
	for(int print = 0; print != number[user]; print++)
	{
		
	}
	cout<<endl;
	for(int print = 0; print != 5; print++)
	{
		cout<<" "<<number[print];
	}
	
	return 0;
}