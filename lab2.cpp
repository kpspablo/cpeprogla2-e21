//pablo
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;
void problem1();
void problem2();
void problem3();
int call_by_reference(int x);
int main(){
	int n, facto;
	cout << "Problem 1" << endl;
	problem1();
	cout << "Problem 2" << endl;
	problem2();
	cout << "Problem 3" << endl;
	problem3();
	cout << "Call by reference" << endl;
	cout << "Enter number: ";
	cin >> n;
	facto = call_by_reference(n);
	cout << "The factorial of number: " << n << " is: " << facto << endl;
	getch();
	return 0;
      }
void problem1(){
	double num;
      cout << "Enter a number to be round off: ";
      cin >> num;
      cout << "Round off value: " << floor(num+.5) << endl << endl;
}
void problem2(){
	srand((unsigned)time(0));
	int integer;
	int lowest = 1, highest = 20;
	int range =( highest - lowest ) + 1;
	for(int i = 0; i < 10; i ++)
	{
		integer = lowest + int(range*rand()/(RAND_MAX + 1.0));
		cout << integer << " ";	
	}
	cout << endl << endl;
}
void problem3(){
	int choice;
	double num1, num2, rec, circ, tri;
	cout << "Menu\n[1] - Area of Square\n[2] - Area of Rectangle\n[3] - Area of Triangle\n[4] - Radius of Circle\n[5] - Exit\n";
	cout << "Enter your choice: ";
	cin >> choice;
	switch (choice)
	{
	case 1: cout << "Area of Square" << endl;
	        cout << "Enter side of square:";
	        cin >> num1;
	        num1 = num1*num1;
	        cout << "The area is:" << num1 << " sq. units";
		    break;
	case 2: cout << "Area of rectangle\n";
	        cout << "Enter length of rectangle:";
	        cin >> num1;
	        cout << "\nEnter width of rectangle:";
	        cin >> num2;
	        rec = num1*num2;
	        cout << "The area is:" << rec << " sq. units";
	     	break;
	case 3: cout << "Area of Triangle\n";
	        cout << "Enter base of triangle:";
	        cin >> num1;
	        cout << "\nEnter height of triangle:";
	        cin >> num2;
	        tri = (num1*num2)*1/2;
	        cout << "The area is:" << tri << " sq. units";
		    break;
	case 4: cout << "Area of circle\n";
	        cout << "Enter radius of circle:";
	        cin >> num1;
	        circ = 3.142*num1*num1;
	        cout << "The area is:" << circ << " sq. units";
		    break;
    case 5: cout <<"Bye bye";
	        getch();
		    break;
    default:
            cout << "Invalid enrty";
           }
    cout << endl << endl;
}
int call_by_reference(int x){
	int k, f = 1;
	for (k = 1; k <= x; k++)
	f*=k;
	return f;
}

