#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
void aste();
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
char str(char x[100], char y[100]);
char stri(char x[100], char y[100]);
char str(char a[100]);
char stri(char x[100]);
int main(){
	aste();
	cout << endl;
	aste();
	cout << "\nMACHINE PROBLEM 3" << endl;
	aste();
	cout << endl;
	problem1();
	problem2();
	problem3();
	problem4();
	problem5();
	problem6();
	cout << endl;
	aste();
	cout << "\n~kpspablo";
	cout << endl;
	aste();
	cout << endl;
	aste();
}
void aste(){
	cout << "********************";
}
void problem1(){
	char str1[1000];
	char str2[1000];
	int result;
	aste();
	cout << "\nSTRING COMPARE\n";
	aste();
	cout << "\nEnter a first word (str1): ";
	cin >> str1;
	cout << "Enter a second word (str2): ";
	cin >> str2;	
	result = strcmp(str1,str2);	
	switch(result){
		case -1:
			cout << "negative ";
			break;
		case 0:
			cout << "equal ";
			break;
		case 1:
			cout << "positive";
			break;
	}
}
void problem2(){
	char str1[100];
	char str2[100];
	char str(char x[100], char y[100]); 
    cout << "\n\n";
	aste();
    cout << "\nSTRING COPY\n";
    aste();
    cin.ignore();
    cout << "\nEnter a first word (str1): ";
    cin.getline(str1,100); 
    cout << "Enter a second word (str2): ";
    cin.getline(str2,100);
    str(str1,str2);
}
char str(char x[100], char y[100]){
     cout << "new string value for str1: " << strcpy(x,y) << endl << endl;
     }
void problem3(){
	char stri1[100], stri2[100];
    aste();
    cout << "\nSTRING CONCATENATION\n";
    aste();
	cout << "\nEnter a first word(str1):";
    cin.getline(stri1,100);
    cout << "Enter a second word(str2):";
    cin.getline(stri2,100);
    stri(stri1,stri2);
}
char stri(char x[100], char y[100]){
     cout << "new string value for str1:" << strcat(x,y) << endl << endl;
     }
void problem4(){
	string str1;
	aste();
	cout << "\nPALINDROME\n";
	aste();
	cout << "\nEnter a word: ";
	cin >> str1;
	if(str1==string(str1.rbegin(), str1.rend())){
		cout << str1 << " is a palidrome" << endl << endl;
	}
	else{
		cout << str1 << " is not a palidrome" << endl << endl;
	}
}
void problem5(){
	char str1[100];
	aste();
    cout << "\nEnter some string:";
    cin.ignore();
    gets(str1);
    str(str1);
}
char str(char a[100]){
    if(a[0]>='A' && a[0]<='Z') 
    	a[0]=(char)a[0]+32; 
    for(int i=0;a[i]!='\0';i++){
    	if(a[i+1]>='A' && a[i+1]<='Z') 
    		a[i+1]=(char)(a[i+1]+32); 
	} 
    if(a[0]>='a' && a[0]<='z') 
    	a[0]=(char)a[0]-32; 
    for(int i=1;a[i]!='\0';i++){ 
    	if(a[i]==' '){ 
    		if(a[i+1]>='a' && a[i+1]<='z') 
    			a[i+1]=(char)(a[i+1]-32); 
		} 
	}
    cout << a << endl << endl; 
}
void problem6(){
	char str1[30];
	aste();
	cout << "\nEnter a string: ";
	gets(str1);
	stri(str1);
}
char stri(char x[100]){
	int i,tmp;
	for(i=0; x[i]!='\0'; i++);
	for(i--; i>=0;i--){
		if(x[i-1]==' ' || i==0){
			for(tmp=i; x[tmp]!='\0' && x[tmp]!=' '; tmp++)
      			cout<<x[tmp];
      			cout<<"\n";
		}
 	}		
 	cout << endl << endl;
	aste();
}
