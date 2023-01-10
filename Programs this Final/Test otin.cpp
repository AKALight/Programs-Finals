#include <iostream>
using namespace std;

int main(){
	int *arrayList,size,index,lowestNum;
	cout<<"Enter the size: ";
	cin>>size;
	
	arrayList = new int[size];
	
	for(int index = 0; index < size; index++)
	{
		
		cout<<"Enter a number: ";
		cin>>arrayList[index];
    }
    lowestNum = 0;
    for(int index = 0; index < size; index++)
    
    if(arrayList[index] < arrayList[lowestNum]){
    lowestNum = index;
    cout<<"Lowest Valued index"<<endl;
	cout<<"Index: "<<lowestNum<<endl<<"Value "<<arrayList[lowestNum];
	}
	cout<<"Lowest Valued index"<<endl;
	cout<<"Index: "<<lowestNum<<endl<<"Value "<<arrayList[lowestNum];	
    
	
  	
	

	}
