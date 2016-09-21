#include<iostream>
using namespace std;

class inc
{
int x;

public:

    void getdata()
    {
      x=10;
    }

friend int display(inc);

};

int display(inc i)
{
    i.x++;
    cout<<i.x<<endl;
    return i.x;
}

main()
{
    inc o;
    o.getdata();
    cout<<display(o);
}
