#include <iostream>

using namespace std;

int main(){
	
	int *list,num,size;
	
	
	cout<<"Enter the number of elements: ";
	cin>>size;
	
	for(int i=0; i<size; i++)
	{
	    cout<<"Enter the number: ";
	    cin>>list[i];
    }
    
	for(int c=0; c<size; c++)
	    cout<<""<<list[c];
	
return 0;  
}
