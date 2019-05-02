//how to put the value in variables using pointer
//pointer to call any variables or function , which point it first
#include<conio.h>
#include<iostream>
using namespace std;
class box
{
private:
    int l,b,h;
public:
    void setData(int x,int y, int z)
    {
        l=x; b=y; h=z;
    }
    void showData()
    {
        cout<<"l="<<l<<" b="<<b<<" h="<<h;
    }
};

main()
{
    box b1,*p;
    p=&b1;
    p->setData(1,3,4);
    p->showData();
    getch();
}
