#include<iostream>

using namespace std;

class complex
{
    int real,imag;
public:
    void getdata()
    {
        cout<<"Enter real and imaginary :";
        cin>>real>>imag;
    }

    complex Add(complex c2);
    void display()
    {
        cout<<endl<<real<<"+"<<imag<<"i";
    }
};

complex complex::Add(complex c2)
    {
        complex temp;
        temp.real=real+c2.real;
        temp.imag=imag+c2.imag;

        return temp;
    }

main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();

    c3=c1.Add(c2);

    c1.display();
    c2.display();
    c3.display();
    return 0;
}
