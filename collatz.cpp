//pablo
#include<iostream>
#include<fstream>
using namespace std;
main(){
  ifstream input("input.txt");
  int num1,num2, n, count;
  while( input >> num1 >> num2){
    if((num1 > 0 && num1 < 1000000) && (num2 > 0 && num2 < 1000000)){
      int max(0), a = num1, b = num2;
      if(num1 > num2){	
        a=num2;
   		  b=num1;
      }
 	    for(int i = a; i <= b; i++){
    	  n=i;
        count=1;
        while(n!=1){
          if(n%2 == 0){
   	        n = n/2;
   	        count++;
  	      }
          else{
    	      n = 3*n+1;
     	      count++;
   	      }
        }
        if(max < count)
          max=count;
      }
      cout << num1 << ' ' << num2 << ' ' << max << endl;
    }
  }
  return(0);
}
