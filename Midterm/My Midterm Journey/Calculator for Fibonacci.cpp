 #include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double num,num2,n,c,sum;
	cout<<"Enter the Nth: ";
	cin>>n;
	num=0;
	num2=1;
    c=2;

    cout<<num<<" "<<num2<<"";
	for(c>2;c<=n;c++)
{
	sum=num+num2;
	num=num2;
	num2=sum;
	cout<<fixed;
	cout<<setprecision(0)<<" "<<round(sum);

}
sum=round(sum);
cout<<"\nThe results for the nth of: "<<n<<"\nIs: "<<sum;
}
