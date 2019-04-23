if(month<=0||month>12)
{
do
{
cout<<"\nInvalid input for month !"<<"";
cout<<"\nAgain enter the month: "<<"";
cin>>month;
}
while(month>0||month<=12);
}
cout<<"\nDate: ";
switch(month)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
{
cin>>date;
while(date<1||date>31)
{
cout<<"\nInvalid date !"<<"";
cout<<"\nAgain enter the date: "<<"";
cin>>date;
}
break;
}
case 2:
{
cin>>date;
if(year%4==0)
{
while(date<0||date>29) //for leap year
{
cout<<"\nInvalid date !"<<"";
cout<<"\nAgain enter the date: "<<"";
cin>>date;
}
}
else
{
while(date<0||date>28) //for non-leap year
{
cout<<"\nInvalid date !"<<"";
cout<<"\nAgain enter the date: "<<"";
cin>>date;
}
}
break;
}
default:
{
cin>>date;
while(date<1||date>30)
{
cout<<"\nInvalid date !"<<"";
cout<<"\nAgain enter the date: "<<"";
cin>>date;
}
break;
}
} //end of switch
}
void date::show_date() //remove the goto ststements in this function
{
clrscr();
cout<<"\nHello....It's ";
cout<<date;
rem=date%10;
switch(date)
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
switch(month)
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
