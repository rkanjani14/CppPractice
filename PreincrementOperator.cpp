#include<conio.h>
#include<iostream>
using namespace std;
class Integer
{
private:
    int x;
public:
    void setData(int a)
    {
        x=a;
    }
    void showData()
    {
        cout<<"x="<<x;
    }
    Integer operator++()  // Preincrement operator
    {
        Integer i;
        i.x=++x;
        return(i);
    }

};

main()
{
    Integer i1,i2;
    i1.setData(3);
    i1.showData();
    i2=++i1;    //i2=i1.operator++();
    i1.showData();
    i2.showData();
    getch();
}
