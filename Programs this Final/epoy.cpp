#include <iostream>
using namespace std;
int main(){
	double prelim,midterm,finals;
	int attend,quiz,ass,n;
	
	cout<<"This program will compute your grades in Prelim,Midterm and Finals.";
	cout<<"cHoose a number from 1 to 3 to compute your grade prelim,midtern or finals: ";
	cin>>n;
	prelim = 0;
	if (prelim==1){
	
	cout<<"Prelim"<<endl;
	cout<<"Put the total scores of the given below ";
	cout<<"attendance : ";
	cin>>attend;
	cout<<"Quizes: ";
	cin>>quiz;
	cout<<"Assignments: ";
	cin>>ass;
	prelim = (attend+quiz+ass)*.20;
	cout<<prelim;
}
	midterm = 0;
    if else(midterm==2){
	cout<<"Midterm"<<endl;
	cout<<"Put the total scores of the given below ";
	cout<<"attendance : ";
	cin>>attend;
	cout<<"Quizes: ";
	cin>>quiz;
	cout<<"Assignments: ";
	cin>>ass;

	midterm = (attend+quiz+ass)*.30;
	cout<<midterm;
}
	finals = 0;
	else if(finals==3){
	
	cout<<"Finals"<<endl;
	cout<<"Put the total scores of the given below ";
	cout<<"attendance : ";
	cin>>attend;
	cout<<"Quizes: ";
	cin>>quiz;
	cout<<"Assignments: ";
	cin>>ass;

	finals = (attend+quiz+ass)*.50;
	cout<<finals;
}
	return 0;
}