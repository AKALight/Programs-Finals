#include <iostream>
using namespace std;

int main(){
	int *arrayList,size,index,lowestNum = 0,c = 1;
	cout<<"Enter the size: ";
	cin>>size;
	
	arrayList = new int[size];
	
	for(int index = 0; index < size; index++)
	{
		cout<<"Enter a number: ";
		cin>>arrayList[index];
    }
    lowestNum = arrayList[0];
    for(int index = 0; index < size; index++)
    {
    	if(arrayList[index] < lowestNum)
    	{
    		lowestNum = arrayList[index];
    		c++;
		}
  	
	}
	cout<<"Lowest Valued index"<<endl;
	cout<<"Index: "<<c<<endl<<"Value "<<lowestNum;
	}
