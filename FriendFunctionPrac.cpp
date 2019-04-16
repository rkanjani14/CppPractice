#include<conio.h>
#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void setData(int x,int y)
    {
        a=x;b=y;
    }
    void showData()
    {
        cout<<"a="<<a<<" b="<<b;
    }
    friend void fun(complex c);
};
void fun(complex c)
{
    cout<<"sum is"<<c.a+c.b;
}
main()
{
    complex c1,c2;
    c1.setData(3,9);
    fun(c1);
    getch();
}
