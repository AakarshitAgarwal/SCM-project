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
