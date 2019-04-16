#include<conio.h>
#include<iostream>
using namespace std;
class complex
{  public:
    ~complex()
    {
        cout<<"hello destructor";
    }

};
void fun()
{
    complex obj;
}
main()
{
    fun();
    getch();
}
