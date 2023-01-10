#include <iostream>
using namespace std;

int main()
{
	int size;
	int *number;
	int counter=0;
	//Size
	cout<<"Enter the size: ";
	cin>>size;
	
	number = new int[size];
	
	//User Inputs
	for(int i = 0; i < size; i++)
	{
		cout<<"Enter the numbers: ";
		cin>>number[i];
		
		if(number[i] < number[counter])
		{
			counter = number[i];
		}
	}
	
	cout<<"Lowest index #: "<<counter<<"\n"<<"Value: "<<number[counter];
}
