//pablo
//lab5 prob3 to be revised/edited
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
const int apple=13;
const int orange=15;
const int banana=7;
const int ponkan=5;
const int guava=20;
const int longan=2;
const int pear=8; 
struct Name{
	char firstname[30];
    char lastname[30];
};
struct Item{
    int id[4];
    char Name[10];
    int price[4];
    int quantity[3];
    int fruitprice[3];
};
struct Date{
    int day;
    int month;
    int year;
};
struct Order{
    Date date;
    Item item;
};
struct customer{
    char contactNo[30];
    Name name;
    Order order;
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
	customer person[4][4];
    cout << "Enter 3 customers\n";
    for (int i=0;i<3;i++){
    	cout << "\nCUSTOMER INFORMATION " << i+1 << "\n";
        cout << "First Name: ";
        cin.ignore();
        cin.getline(person[i][i].name.firstname,29);
        cout << "Last Name: ";
        cin.ignore();
        cin.getline(person[i][i].name.lastname,29);
        cout << "Contact No: ";
        cin.ignore();
        cin.getline(person[i][i].contactNo,29);
        cout << "Order Date: \n";
        cout << "Day: ";
        cin.ignore();
        cin >> person[i][i].order.date.day;
        cout << "Month: ";
        cin.ignore();
        cin >> person[i][i].order.date.month;
        cout << "Year: ";
        cin.ignore();
        cin >> person[i][i].order.date.year;
        for(int o=0;o<3;o++){
        	cout << "Enter 3 items" << endl;
        	cout << "ID: ";
            cin.ignore();
            cin >> person[i][o].order.item.id[o];
            switch (person[i][o].order.item.id[o]){
            	case 1:
                	cout << "Name: Apple\n";
                    cout << "Price: " << apple << "\n";
                    cout << "Quantity: ";
                    cin.ignore();
                    cin >> person[i][o].order.item.quantity[o];
                    strcpy(person[i][o].order.item.Name,"Apple");
                    person[i][o].order.item.fruitprice[o]=apple;
                    person[i][o].order.item.id[o]=person[i][o].order.item.quantity[o]*apple;
                    break;
            	case 2:
                	cout << "Name: Orange\n";
                    cout << "Price: " << orange << "\n";
                    cout << "Quantity: ";
                    cin.ignore();
                    cin >> person[i][o].order.item.quantity[o];
                    strcpy(person[i][o].order.item.Name,"Orange");
                    person[i][o].order.item.fruitprice[o]=orange;
                    person[i][o].order.item.id[o]=person[i][o].order.item.quantity[o]*orange;
                    break;
                case 3:
                	cout << "Name: Banana\n";
                    cout << "Price: " << banana << "\n";
                    cout << "Quantity: ";
                    cin.ignore();
                    cin >> person[i][o].order.item.quantity[o];
                    strcpy(person[i][o].order.item.Name,"Banana");
                    person[i][o].order.item.fruitprice[o]=banana;
                    person[i][o].order.item.id[o]=person[i][o].order.item.quantity[o]*banana;
                    break;
                case 4:
                	cout << "Name: Ponkan\n";
                    cout << "Price: " << ponkan << "\n";
                    cout << "Quantity: ";
                    cin.ignore();
                    cin >> person[i][o].order.item.quantity[o];
                    strcpy(person[i][o].order.item.Name,"Ponkan");
                    person[i][o].order.item.fruitprice[o]=ponkan;
                    person[i][o].order.item.id[o]=person[i][o].order.item.quantity[o]*ponkan;
                    break;
                case 5:
                	cout << "Name: Guava\n";
                    cout << "Price: " << guava << "\n";
                    cout << "Quantity: ";
                    cin.ignore();
                    cin >> person[i][o].order.item.quantity[o];
                    strcpy(person[i][o].order.item.Name,"Guava");
                    person[i][o].order.item.fruitprice[o]=guava;
                    person[i][o].order.item.id[o]=person[i][o].order.item.quantity[o]*guava;
                    break;
                case 6:
                	cout << "Name: Longan\n";
                    cout << "Price: " << longan << "\n";
                    cout << "Quantity: ";
                    cin.ignore();
                    cin >> person[i][o].order.item.quantity[o];
                    strcpy(person[i][o].order.item.Name,"Longan");
                    person[i][o].order.item.fruitprice[o]=longan;
                    person[i][o].order.item.id[o]=person[i][o].order.item.quantity[o]*longan;
                    break;
                case 7:
                	cout << "Name: Pear\n";
                    cout << "Price: " << pear << "\n";
                    cout << "Quantity: ";
                    cin.ignore();
                    cin >> person[i][o].order.item.quantity[o];
                    strcpy(person[i][o].order.item.Name,"Pear");
                    person[i][o].order.item.fruitprice[o]=pear;
                    person[i][o].order.item.id[o]=person[i][o].order.item.quantity[o]*pear;
                    break;
        	}
        }
    }
                                    
    cout << "\n\nSUMMARY REPORT\n";
	cout << setw(2) << "#" << setw(22)
	<< "Costumer Name" << setw(14)
	<< "Order Date" << setw(10) << "Item"
	<< setw(8) << "price" << setw(11) << "Quantity\n";
    for(int i=0;i<3;i++){
        cout << setw(2) << i+1 << setw(16)
		<< person[i][i].name.lastname
		<< " ," << person[i][i].name.firstname << setw(6)
		<< person[i][i].order.date.day << "/"
		<< person[i][i].order.date.month
		<< "/" << person[i][i].order.date.year << endl;
        for(int o=0;o<3;o++){
        	cout << setw(43) << " " << person[i][o].order.item.Name
			<< setw(6) << person[i][o].order.item.fruitprice[o] << setw(7)
			<< person[i][o].order.item.quantity[o] << " \n";
        }
        for(int o=1;o<=1;o++){
            cout << setw(45) << "TOTAL PRICE:" << setw(17)
			<< person[i][o].order.item.id[1]+person[i][o+1].order.item.id[2]+person[i][o+2].order.item.id[3] << ".00" << endl;
        }
    }
	
	
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
