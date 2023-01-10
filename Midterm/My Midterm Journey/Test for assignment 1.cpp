#include <iostream>
using namespace std;

int main(){
	int day,burnedCalperWeek,burnedCalperday;
	double ave;
	day=1;//This variable increases when the while statement prove's to be true.
	
	while(day<=20){ //Some what the limiter or when the codition is met this statement ends.
		cout<<"Enter the integers "<<day<<": ";
		cin>>burnedCalperday;
		
		burnedCalperWeek = burnedCalperWeek + burnedCalperday;
		day=day+1;//Manipulate's the value for the day, when ever the user enter's a value it increases the value of the variable depending on the value
		// example the day=day+1 so one is added everytime the while statement is true.a
	}
	//This part of the code calculate's the value for the average or ave as the variable for the average
	ave = burnedCalperWeek/7.0;
	cout<<"The ave burned cal is: "<<ave;
}

