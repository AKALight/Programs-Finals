#include <iostream>

using namespace std;

int main(){
	string itemName[10];
	int i,a;
	
	cout<<"This program is for creating list."<<endl;
	cout<<"Put everything here as this program create you list: "<<endl;
	cout<<"----Groceries List---- "<<endl;
	
	for (i= 0;i<10;i++){
		cout<<" list ["<<i<<"] :";
		cin>>itemName[i];
	}
	for (i= 0;i<10;i++){
		cout<<" "<<itemName[i];
	}
	
	return 0;
}