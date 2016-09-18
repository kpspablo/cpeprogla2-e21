//pablo
#include<iostream>
#include<conio.h>
#include<string.h>
#include <iomanip>
using namespace std;
struct stgrade{
	int stid;
	char name[100];
	double grade[3];
};
struct student{
	int id;
	char name[80];
	double a,b,c,d;
	float g;
};
void aste();
void newLine();
void problem1();
void problem2();
void problem3();
int main(){
	aste();
	cout << "MACHINE PROBLEM 5" <<endl;
	aste();
	problem1();
	problem2();
	problem3();
}
void problem1(){
	stgrade info;
	double no1;
	aste();
	cout << "Problem 1: ";
	cout << "\nEnter Student Record:" << endl;
	cout << "ID: ";
	cin >> info.stid;
	cout << "Name: ";
	cin.ignore();
	cin.getline(info.name,100);
    for (int i=0;i<3;i++){
    	cout << "Quiz " << i+1 << ": ";
    	cin >> info.grade[i];
    	no1+=info.grade[i];
	}
no1=no1/3;
cout << endl << endl;
if(no1<=74 && no1>=0){
	cout << "Student Record: " << endl;
	cout << "ID: " << info.stid << endl;
	cout << "Name: " << info.name << endl;
    cout << "Grades: " << setprecision(4) << no1 << endl;
	cout << "Remarks: Failed" << endl << endl;
}
else if(no1<=100 && no1>=75){
	cout << "Student Record: " << endl;
	cout << "ID: " << info.stid << endl;
	cout << "Name: " << info.name << endl;
    cout << "Grades: " << no1 << endl;
	cout << "Remarks: Passed" << endl << endl;
}
else 
	cout << "invalid" << endl << endl;
}
void problem2(){
	student stud[5];
	int i;
	aste();
	cout << "Problem 2: ";
	cout << "\nEnter 5Student(s) Record" << endl;
	for (i=0; i<5; i++){
	cout << "\nStudent " << i+1 << endl;
	cout << "ID: ";
	cin >> stud[i].id;
	newLine();
	cout << "Name: ";
	cin.getline(stud[i].name,80);
	cout << "Enter 3 Quize(s): ";
	cin >> stud[i].a >> stud[i].b >> stud[i].c;
	stud[i].d=stud[i].a+stud[i].b+stud[i].c;
	stud[i].g=stud[i].d/3;
	cout << "\n";
}
cout << setw(0) << "No."
	<< setw(16) << "Student ID"
	<< setw(25) << "Student Name"
	<< setw(16) << "Quiz"
	<< setw(9) << "Remarks";
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
for (i=0;i<5;i++){
	cout << endl;
	cout << setw(0) << i+1
	<< setw(14) << stud[i].id
	<< setw(25) << stud[i].name
	<< setw(20) << stud[i].g
	<< setw(9);
if(stud[i].g>100 || stud[i].g<0)
	cout << "Invalid\n";
else if (stud[i].g=0 || stud[i].g<75)
	cout << "Failed\n";
else if (stud[i].g>75 || stud[i].g<100)
	cout << "Passed\n";
	}
}
void problem3(){
	
	
	
}
void aste(){
	cout << "********************" << endl;
}
void newLine()
{
	char s;
	do{cin.get(s);}
	while(s!='\n');
	
}
