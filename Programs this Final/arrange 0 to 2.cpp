#include <iostream>
using namespace std;


int main(){
	cout<<"This Program will arrange the elements in order"<<endl;
	int *number,size,zeros = 0,ones = 0,twos = 0;
    cout<<"Enter the size: ";
    cin>>size;
    
    number = new int[size];
    cout<<"Enter a number ranging up to 0 to 2"<<endl;
    
	//Input	
	for(int i = 0; i < size; i++)
	{
		cout<<i+1<<". "<<"Enter a number: ";
		cin>>number[i];
		if(number[i] == 0)
		{
			zeros++;
		}
		else if(number[i] == 1)
		{
			ones++;
		}
		else if(number[i] == 2)
		{
			twos++;
		}
	}
	
	//Print Driver code
	for(int z = 0; z < zeros; z++)
	{
		cout<<0<<" ";
	}
	for(int o = 0; o < ones; o++)
	{
		cout<<1<<" ";
	}
	for(int t = 0; t < twos; t++)
	{
		cout<<2<<" ";
	}
}