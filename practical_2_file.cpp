#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;



void insert(){
        fstream f1;
	string name;
	int roll;
	f1.open("sample.txt",ios::app);
	cout<<"Enter Details:"<<endl;
	cout<<"Enter Name :";
	cin>>name;
	cout<<"Enter Roll No :";
	cin>>roll;
	f1<<name<<"  "<<roll<<endl;
	f1.close();

	 }


void display(){
        fstream f2;
	f2.open("sample.txt",ios::in);
	string s1;
	while(!f2.eof()){
	getline(f2,s1);
	cout<<s1<<endl;
	}
	f2.close();
  }
  
 //--------------- 
void remove(string roll){

fstream f3,f2;
f2.open("sample.txt",ios::in);
f3.open("new.txt",ios::out);

while(!f2.eof()){
string str;
getline(f2,str);
if (str.find(roll)>=50)
{ f3<<str<<endl;}
}
f2.close();
f3.close();

f2.open("sample.txt",ios:: out);
f3.open("new.txt",ios::in);

while(!f3.eof()){
string str;
getline(f3,str);
f2<<str<<endl;

}
f2.close();
f3.close();
}
//--------------

int main(){
	int ch=0;
	int n;
	
	while(ch<3){
	cout<<"**** File Handling ****"<<endl;
	cout<<"1.Insert details"<<endl;
	cout<<"2.Show Details"<<endl;
	cout<<"3.remove record"<<endl;
	cout<<"4.Exit"<<endl;
	cout<<"Enter Your Choice :";
	cin>>ch;
	
	if(ch==1){
	cout<<"Enter No.of Students :";
	cin>>n;
	for(int i=0;i<n;i++){
	insert();}
	}
	if(ch==2){
	display();
	}
	if(ch==3){
	string r;
	 cout<<"Enter roll number to remove :";
	 cin>>r;
	 remove(r);
	}
	if(ch==4){
		break;
	}
	
	}


		return 0;
        }
