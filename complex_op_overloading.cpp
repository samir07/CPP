#include<iostream>

using namespace std;

class Complex
{
    int r,i;
public:
    void getData(int a,int b){r=a;i=b;}
    void showData(){cout<<endl<<r<<" "<<i;}

    Complex operator+(Complex c2)
    {
        Complex temp;

        temp.r=r+c2.r;
        temp.i=i+c2.i;

        return temp;
    }
};

main()
{
    Complex c1,c2,c3;

    c1.getData(7,5);
    c2.getData(4,2);

    c3=c1+c2;

    c3.showData();
return 0;
}
