#include<iostream>
#include<conio.h>
using namespace std;
class complex
{  private:
    int a,b;
public:
    complex(int x,int y)
    {a=x; b=y;}
    complex(int k)
    {a=k;}
    complex()
    { a=0;b=0;}
    complex(complex &c)
    {
        a=c.a;
        b=c.b;
    }


};
 main()
{
    complex c1(3,5) ,c2(3),c3;  //  first method
 //  complex c1=complex(3,2) ,c2=complex(3),c3;     second method to call constructor
// complex c1=3;// third method to call constructor of single argument passes here
    complex c4(c1);

    getch();
}
