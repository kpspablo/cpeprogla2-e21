//pablo
#include<iostream>
using namespace std;
void aste();
char*mystrcpy(char *str2, const char*str1);
int mystrcmp(const char* sl, const char* s2);
char* mystrcat(char* stri2, const char*stri1);
char* mystrrev(char* r);
int mystrlen(char *s);
char *ptr = "na";
char name[50] = "Sir?";
char str1[50]="Yooo";
char str2[50];
char st1[20], st2[20];
char stri2[50]="Laboratory";
char stri1[50]="Exercise4";
int res;
char str[20];
int main(){
	aste();
	cout << "MACHINE PROBLEM 4" <<endl;
	aste();
	cout << "STRCPY" << endl;
	aste();
	puts("String 1 is ");
	puts(str1);
	mystrcpy(str2,str1);
	puts("String 2 is ");
	puts(str2);
	aste();
	cout << "STRCMP" << endl;
	aste();
	puts("Enter string1: ");
	gets(st1);
	puts("Enter string2: ");
	gets(st2);
	res=mystrcmp(st1,st2);
	if(res==0)
		puts("equal");
	else 
		puts("not equal");
	aste();
	cout << "STRCAT" << endl;
	aste();
	puts("The strings are: ");
	puts(stri2);
	puts(stri1);
	mystrcat(stri2,stri1);
	puts("New value for string is: ");
	puts(stri2);
	aste();
	cout << "STRLEN" << endl;
	aste();
	cout << "The length of the strings: " << endl;
	cout << "Pasado is " << mystrlen("Pasado") << endl;
	cout << "na " << mystrlen (ptr) << endl;
	cout << "Sir? " << mystrlen (name) <<endl;
	aste();
	cout << "STRREV" << endl;
	aste();
	puts("Enter a string: ");
	gets(str);
	mystrrev(str);
	puts("Reversed string is: ");
	puts(str);	
}
void aste(){
	cout << "********************" << endl;
}
char*mystrcpy(char *str2, const char*str1){
	int i=0;
	while(str1[i]!='\0'){
		str2[i]=str1[i];
		i++;
	}
}
int mystrcmp(const  char* s1, const char* s2){
	int i=0;
	while(s1[i]!='\0' || s2[i]!='\0'){
		if(s1[i]!=s2[i]);
			return(s1[i]-s2[i]);
		i++;
	}
}
char* mystrcat(char* stri2, const char* stri1){
	int i(0), j(0);
	while(stri2[i]!='\0')
		i++;
	while(stri1[j]!='\0'){
		stri2[i]=stri1[j];
		i++;
		j++;
	}
	stri2[i]='\0';
	return stri2;
}
int mystrlen(char*s){
	int i=0;
	while(*(s+i)!='\0')
	i++;
	return i;
}
char* mystrrev(char* r){
	int i=0, j=0;
	char temp;
	while(r[i]!='\0')
		i++;
	i--;
	while(i>j){
		temp=r[i];
		r[i]=r[j];
		r[j]=temp;
		j++;
		i--;
	}
	return r;
}
