#include<iostream.h>
#include<conio.h>
#include<process.h>
class all
{
private:
struct address
{
int house;
char street[30];
char city[30];
char state[30];
char country[30];
};
struct age
{
int day;
int month;
int year;
};
struct patient_info
{
char name[50];
address AD1; //nested structure implemented
age A1; //nested structure inplemented
int martial_status;
int reg_no;
int bld_group;
int sex;
}
PI[100];
int task;
protected:
void enter_patient_info();
void show_patient_detail();
public:
void software_detail();
void tasks();
char answer;
char answer1;
char ch;
int serial;
};
class date
{
private:
int date;
int month;
int year;
public:
void enter_date();
void show_date();
};
class dob
{
private:
struct dob1
{
int date;
int month;
int year;
int rem;
}
DOB11[100];
public:
void enter_date();
void show_date();
};
int i=0;
int rem;
int count;
int regis;
int attempt;
int temp;
int show_count=0;
all A1; //object declared
date D1; //object declared
dob DOB1; //object declared
void main()
{
clrscr();
count=0;
cout<<"Welcome to..."<<"";
cout<<"\n\t\t***HOSPITAL MANAGEMENT SOFTWARE***"<<"";
D1.enter_date();
A1.tasks();
getch();
}
void all::tasks()
{
attempt=0;
D1.show_date();
cout<<"\n\t\t\t***HOSPITAL MANAGEMENT SOFTWARE***"<<""<<endl;
cout<<"\t\t\t  **Hospital Management Tasks**"<<""<<endl;
cout<<"\t\t     ****************************************"<<""<<endl;
cout<<"Please select a task to do...."<<""<<endl;
cout<<"1. Enter a new patient information ."<<""<<endl;
cout<<"2. View detail of existing patient ."<<""<<endl;
cout<<"3. View detail about the program ."<<""<<endl;
cout<<"4. Exit from the program ."<<""<<endl;
//other function remain
cout<<"Enter your task serial: "<<"";
cin>>task;
switch(task)
{
case 1:
{
A1.enter_patient_info();
break;
}
case 2:
{
A1.show_patient_detail();
break;
}
case 3:
{
A1.software_detail();
break;
}
case 4:
{
clrscr();
cout<<"\n Thank You for trying this program !!!"<<""<<endl;
cout<<" This is the end of program...."<<""<<endl;
cout<<"Press any key to exit....."<<""<<endl;
getch();
exit(0);
break;
}
default:
{
clrscr();
cout<<"\n Invalid task serial ."<<""<<endl;
cout<<"Press any key to continue...."<<""<<endl;
getch();
clrscr();
A1.tasks();
}
}
}
void all::enter_patient_info()
{
clrscr();
answer='y';
if(count==0)
{
serial=1;
}
else
{
i=serial;
}
for(i=serial;answer=='y'||answer=='Y';i++)
{
PI[i].reg_no=i;
temp=serial;
