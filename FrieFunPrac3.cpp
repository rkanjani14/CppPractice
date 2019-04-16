//friend function in operator
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
        cout<<"a="<<a<<"b="<<b;
    }
    friend complex operator+(complex,complex);
};
complex operator +(complex X,complex Y)
{ complex temp;
temp.a=X.a+Y.a;
temp.b=X.b+Y.b;
return(temp);
}

main()
{
    complex c1,c2,c3;
    c1.setData(4,3);
    c2.setData(8,2);
    c3=c1+c2;    //c3=operator+(c1,c2)both c1,c2 are pass as argument
    c3.showData();
    getch();


}
