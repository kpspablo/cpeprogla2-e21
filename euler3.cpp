/pablo
#include<iostream>
#include<fstream>
using namespace std;
int n,x;
int main(){
  ifstream eul("input.txt");
	while(eul >> n){
		for(int i = 1; i < n; i++)
		  if(i%3 == 0 || i%5 == 0)
			  x+ = i;
	    cout << x << endl;	
	}
  system("pause");
}
