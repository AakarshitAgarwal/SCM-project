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
cout<<"\n***ENTERING INFORMATION FOR PATIENT SERIAL NUMBER "<<i<<"***"<<""<<endl;
cin.get(ch);
cout<<"\nRegistration Number : "<<PI[i].reg_no<<"";
cout<<"\nEnter the name of patient :"<<"";
clreol();
cin.getline(PI[i].name,50);
cout<<"\nSex (1-Male 2-Female) :"<<"";
clreol();
cin>>PI[i].sex;
while(PI[i].sex!=1&&PI[i].sex!=2)
{
cout<<"\nInvalid input for sex of patient!!!"<<"";
cout<<"\nSex :"<<"";
clreol();
cin>>PI[i].sex;
}
cout<<"\n***ENTERING ADDRESS**"<<"";
cout<<"\nHouse number :"<<" ";
clreol();
cin>>PI[i].AD1.house;
while(PI[i].AD1.house<=0)
{
cout<<"\nInvalid input for house number ."<<"";
cout<<"\nAgain enter the house number ."<<"";
clreol();
cin>>PI[i].AD1.house;
}
cin.get(ch);
cout<<"\nStreet: "<<"";
clreol();
cin.getline(PI[i].AD1.street,30);
cout<<"\nCity: "<<"";
clreol();
cin.getline(PI[i].AD1.city,30);
cout<<"\nState: "<<"";
clreol();
cin.getline(PI[i].AD1.state,30);
cout<<"\nCountry: "<<"";
clreol();
cin.getline(PI[i].AD1.country,30);
DOB1.enter_date();
//to calculate age
cin.get(ch);
cout<<"\nMartial status(1-Married,2-Not Married): "<<"";
if(count!=0)
{
clreol();
}
cin>>PI[i].martial_status;
while(PI[i].martial_status<1||PI[i].martial_status>2)
{
cout<<"\nInvalid input for martial status ."<<"";
cout<<"\nEnter a valid martial status: "<<"";
clreol();
cin>>PI[i].martial_status;
}
cin.get(ch);
if(count!=0)
{
clreol();
}
clreol();
cout<<"\nBlood group: "<<"";
clreol();
cout<<"1. A+ "<<"";
clreol();
cout<<"2. A- "<<"";
clreol();
cout<<"3. B+ "<<"";
clreol();
cout<<"4. B- "<<"";
clreol();
cout<<"5. AB+ "<<"";
clreol();
cout<<"6. AB- "<<"";
clreol();
cout<<"7. O+ "<<"";
clreol();
cout<<"8. O- "<<"";
clreol();
cout<<"Enter :"<<"";
clreol();
cin>>PI[i].bld_group;
switch(PI[i].bld_group)
{
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
{
break;
}
default:
{
while(PI[i].bld_group!=1&&PI[i].bld_group!=2&&PI[i].bld_group!=3&&
PI[i].bld_group!=4&&PI[i].bld_group!=5&&PI[i].bld_group!=6&&
PI[i].bld_group!=7&&PI[i].bld_group!=8)
{
clreol();
cout<<"\nInvalid input !"<<"";
cout<<"\nBlood Group: "<<"";
clreol();
cin>>PI[i].bld_group;
}
break;
}
}
cin.get(ch);
cout<<"\nWant to enter information for another patient ? "<<"";
clreol();
cin>>answer;
count++;
serial++;
}
clrscr();
A1.tasks();
}
void dob::enter_date()
{
clreol();
cout<<"\nDate of birth -"<<"";
clreol();
cout<<"\nYear :";
clreol();
clreol();
cin>>DOB11[temp].year;
if(DOB11[temp].year<=0||DOB11[temp].year>10000)
{
do
{
clreol();
cout<<"\nInvalid input for year !"<<"";
cout<<"\nPlease enter the year correctly :"<<"";
cin>>DOB11[temp].year;
}
while(DOB11[temp].year<0||DOB11[temp].year>10000);
}
clreol();
cout<<"\nMonth: ";
clreol();
cin>>DOB11[temp].month;
if(DOB11[temp].month<=0||DOB11[temp].month>12)
{
do
{
clreol();
cout<<"\nInvalid input for month !"<<"";
cout<<"\nAgain enter the month: "<<"";
clreol();
if(count!=0)
{
clreol();
}
cin>>DOB11[temp].month;
}
while(DOB11[temp].month<0||DOB11[temp].month>12);
}
cout<<"\nDate: ";
clreol();
switch(DOB11[temp].month)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
{
cin>>DOB11[temp].date;
while(DOB11[temp].date<1||DOB11[temp].date>31)
{
clreol();
cout<<"\nInvalid date !"<<"";
cout<<"\nAgain enter the date: "<<"";
clreol();
cin>>DOB11[temp].date;
}
break;
}
case 2:
{
cin>>DOB11[temp].date;
if(DOB11[temp].year%4==0)
{
while(DOB11[temp].date<0||DOB11[temp].date>29)
//for leap year
{
clreol();
cout<<"\nInvalid date !"<<"";
cout<<"\nAgain enter the date: "<<"";
clreol();
cin>>DOB11[temp].date;
}
}
else
{
while(DOB11[temp].date<0||DOB11[temp].date>28)
//for non-leap year
{
clreol();
cout<<"\nInvalid date !"<<"";
cout<<"\nAgain enter the date: "<<"";
clreol();
cin>>DOB11[temp].date;
}
}
break;
}
default:
{
cin>>DOB11[temp].date;
while(DOB11[temp].date<1||DOB11[temp].date>30)
{
clreol();
cout<<"\nInvalid date !"<<"";
cout<<"\nAgain enter the date: "<<"";
clreol();
cin>>DOB11[temp].date;
}
break;
}
} //end of switch
clreol();
}
void date::enter_date()
{
cout<<"\n First of all I need the current date ..."<<"";
cout<<"\nYear :";
cin>>year;
if(year<=0||year>10000)
{
do
{
cout<<"\nInvalid input for year !"<<"";
cout<<"\nPlease enter the year correctly: "<<"";
cin>>year;
}
while(year>0||year<10000);
}
cout<<"\nMonth: ";
cin>>month;

{
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:
{
cout<<"th ";
goto over;
}
}
switch(rem)
{
case 1:
{
cout<<"st ";
break;
}
case 2:
{
cout<<"nd ";
break;
}
case 3:
{
cout<<"rd ";
break;
}
default:
{
cout<<"th ";
break;
}
}
over:
{
case 1:
{
cout<<"January , ";
break;
}
case 2:
{
cout<<"February , ";
break;
}
case 3:
{
cout<<"March , ";
break;
}
case 4:
{
cout<<"April , ";
break;
}
case 5:
{
cout<<"May , ";
break;
}
case 6:
{
cout<<"June , ";
break;
}
case 7:
{
cout<<"July , ";
break;
}
case 8:
{
cout<<"August , ";
break;
}
case 9:
{
cout<<"September , ";
break;
}
case 10:
{
cout<<"October , ";
break;
}
case 11:
{
cout<<"November , ";
break;

}
case 12:
{
cout<<"December , ";
break;
}
