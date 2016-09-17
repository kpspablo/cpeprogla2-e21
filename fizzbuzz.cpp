#include<iostream>
using namespace std;
int main()
{
	for(int k=1; k<=100; k++)
	{
		if((k%15)==0)
			cout<<"FizzBuzz"<<endl;
		else if((k%3)==0)
			cout<<"Fizz"<<endl;
		else if((k%5)==0)
			cout<<"Buzz"<<endl;
		else
			cout<<k<<endl;			
	}
}
