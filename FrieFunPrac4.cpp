
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
    cout<<"\na="<<a<<"b="<<b;
    }

friend



    };
    main()
    {
        complex c1,c2;
        cout<<"Enter a complex number";
        cin>>c1;
        cout<<"You entered";
        cout<<c1;
        getch();
    }
