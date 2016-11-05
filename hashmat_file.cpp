//pablo
#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int hash, opp;
int main(){
    ifstream f("input.txt");
      while (f >> hash >> opp)
        cout << abs(hash-opp)<<endl;
    return 0;
}   
