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
        a=x; b=y;
    }
    void showData()
    {
        cout<<"\n a="<<a<<" b="<<b;
    }
    complex operator-()
    {
        complex temp;
        temp.a=-a;
        temp.b=-b;
        return(temp);
    }

};
main()
{
    complex c1,c2;
    c1.setData(3,5);
    c2=-c1;     //c2=c1.operator-();
    c2.showData();

    getch();
}
