#include<iostream.h>
#include<time.h>
#include<conio.h>

int main()
{
long int year,month,day,date;
int n,flag;

clrscr();


cout<<"Enter date (yyyy/mm/dd)"<<endl;

flag=0;

do
{

cin>>date;

day=date%100;
cout<<day;
date=date/100;

month=date%100;
cout<<endl<<month;
date=date/100;

year=date;
cout<<endl<<year;
flag=0;
	if(month>12 || day>31 || year>9999)
	{
	cout<<endl<<"Plz enter valid date!!!(year<9999 month<12 day<31)";
	flag=1;
	}

}while(flag);


cout<<endl<<"how many days you would like to enter-";
cin>>n;



day=day+n;

LOOP:do
{


    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {

   if(day>31)
	{
	day=day-31;
	month=month+1;
	goto LOOP;

	}
    }
    else if(month==2)
    {
	if(day>29)
	{
	day=day-29;
	month=month+1;
	goto LOOP;

	}
    }
    else
    {
	if(day>30)
	{
	day=day-30;
	month=month+1;
	goto LOOP;

	}
    }

}while(0);



cout<<endl<<day<<"/"<<month<<"/"<<year;

 getch();
 return 0;
}