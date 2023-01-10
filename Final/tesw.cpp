#include <iostream>
#include<conio.h>
using namespace std;
int main(){
	int *numbers,size=0;
	
	cout<<"Enter the size: ";
	cin>>size;
	
	int i;
	
	cout<<"Enter the numbers: "<<endl;
	
	for(i=0;i<size;i++)
		cin>>numbers[i];
	
	
	for(i=0;i<size;i++)
		cout<<""<<numbers[i];
}