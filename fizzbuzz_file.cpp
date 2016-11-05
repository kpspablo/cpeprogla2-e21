//pablo
#include<iostream>
#include<fstream>
using namespace std;
int n;
int main(){
	ifstream fizzbuzz("input.txt");
	while(fizzbuzz >> n){	
		if((n%3==0) && (n%5==0)){
			cout << "\nFizzBuzz";
		}
		else if(n%5==0){
			cout << "\nBuzz";
		}
		else if(n%3==0){
			cout << "\nFizz";
		}
		else{
			cout << n << endl;	
		}
	}
	return 0;
}
