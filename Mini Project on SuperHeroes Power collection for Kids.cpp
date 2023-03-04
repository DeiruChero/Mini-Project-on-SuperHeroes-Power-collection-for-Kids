using namespace std;
#include<conio.h>
#include<iostream>
#include<stdio.h>
void Delete();
void ShowDetails();
void One();
void Two();
void Four();
int Occurance();
int o=0,t=0,f=0,count=0,amount=0;
int main(){
	while(1){
		system("cls");
		system("color B");
	switch(Occurance()){
		case 1: One();break;
		case 2: Two();break;
		case 3: Four();break;
		case 4: ShowDetails();break;
		case 5: Delete();break;
		case 6: exit(0);
		default : cout<<"INVALID PARAMETERS\n";
	}
	getch();
}
}
void Delete(){
	cout<<"\n   Data Deleted Successfully";
	o=0;
	t=0;
	f=0;
	amount=0;
	count=0;
}
int Occurance(){
	int ch=0;
	cout<<"1. Hero 'ONE': \n";
	cout<<"2. Hero 'TWO': \n";
	cout<<"3. Hero 'FOUR': \n";
	cout<<"4. Show Status: \n";
	cout<<"5. Delete Data: \n";
	cout<<"6. Exit\n";
	cout<<"\n\n  Enter your choice: ";
	cin>>ch;
	return(ch);
}
void ShowDetails(){
	cout<<"\n   Occurance of ONE: "<<o<<endl<<endl;
	cout<<"   Occurance of TWO: "<<t<<endl<<endl;
	cout<<"   Occurance of FOUR: "<<f<<endl<<endl;
	cout<<"   Total Number of Values: "<<count<<endl<<endl;
	cout<<"   Total Amount: "<<amount<<endl;
}
void One(){
	cout<<"\n   Entry Successful";
	o++;
	amount=amount+10;
	count++;
}
void Two(){
	cout<<"\n   Entry Successful";
	t++;
	amount=amount+20;
	count++;
}
void Four(){
	cout<<"\n   Entry Successful";
	f++;
	amount=amount+40;
	count++;
}