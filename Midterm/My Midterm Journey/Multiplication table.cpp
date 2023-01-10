#include <iostream>
using namespace std;

int main()
{
   int num,product;
   cout<<"Enter the #: ";
   cin>>num;

   for(product>=0;product<=10;product++)
   {
   	cout<<num<<" * "<<product<<" = "<<(num*product)<<endl;
   }
   
}

