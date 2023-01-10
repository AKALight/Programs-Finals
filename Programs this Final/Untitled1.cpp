#include <iostream>

using namespace std;

int main(){
	int *arraylist;
	int size,lowestnum;
	cout<<"enter the size of your element ";
	cin>>size;
	
	arraylist = new int {size};
	
	for (int i=0;i<size;i++){
		cout<<"element ["<<i<<"] : ";
		//cin>>i; naa ra syay gamay kulang like, kung asa sya ibutang ang data then, using I as a sender
		cin>>arraylist[i];
	}
	lowestnum=0;
	for (int i = 0;i<size;i++){
		if (arraylist[i] < arraylist[lowestnum]){
		lowestnum=arraylist[i];
	} 
	//cout<<"the lowest number is "<<arraylist[lowestnum]; Kari kay need nimo sya igawas kay naa sya sa sulod sa loop moa na ga spam syag message
}
    cout<<"the lowest index is "<<lowestnum;
	return 0;
}