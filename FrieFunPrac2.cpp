#include<conio.h>
#include<iostream>
using namespace std;
class B;
class A
{private:
    int a;
public:
    void setData(int x)
    {
        a=x;
    }
    friend void fun(A,B);
};
class B
{
private:
    int b;
public:
    void setData(int y)
    {
        b=y;
    }
    friend void fun(A,B);
};
void fun(A aa1,B bb1)
{
    cout<<"sum is "<<aa1.a+bb1.b;
}
main()
{
    A a1; B b1;
    a1.setData(4);
    b1.setData(8);
    fun(a1,b1);
    getch();
}
