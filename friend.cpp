#include<iostream>
using namespace std;

class inc
{
int x;

public:
    void getdata()
    {
        cout<<"Enter x-";
        cin>>x;
    }

friend void increment();

};
void increment(inc c)
    {
        cout<<c.x++;
    }
main()
{

inc obj;
obj.getdata();
increment(obj);
return 0;
}
