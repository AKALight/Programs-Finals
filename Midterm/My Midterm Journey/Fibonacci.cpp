#include <iostream>
 using namespace std;
 int main (){
int num1, num2, n, currentNum, counter;

cout<<"Enter the 1st number: ";
cin>>num1;

cout<<"Enter the 2nd number: ";
 cin>>num2;

 cout<<"Enter n: ";
 cin>>n;

if(n==1)
 {
 currentNum = num1;
 cout<<num1;
 }
else if(n==2)
 {
 currentNum = num2;
cout<<num1<<" "<<num2;
 }
 else
 {
 counter = 3;
 cout<<num1<<" "<<num2;
 while(counter<=n){
 currentNum = num1 + num2;
 num1 = num2;
num2 = currentNum;
 cout<<" "<<currentNum;
 counter++;
 }
}
cout<<"\nThe number in the "<<n<<" position is : "<<currentNum;



}
