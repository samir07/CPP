#include<iostream.h>
#include<conio.h>

class Incr
{
	int x;
	public:
	Incr(){}
	Incr(int a)
	{
		x=a;
	}
	Incr operator ++()
	{
		x=x+1;
		//return *this;
		return Incr(x);
	}
	Incr operator ++(int)
	{
		x=x+1;
		return Incr(x);
		//return *this;
	}
	void show()
	{
		cout<<"\n x="<<x;
	}
};
void main()
{
	Incr t1(10),t2(10),t3,t4;

	clrscr();

	t3=t1++;

	t4=++t2;

	t1.show();
	t2.show();
	t3.show();
	t4.show();
	getch();
}



