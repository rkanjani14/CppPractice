#include<conio.h>
#include<iostream>
using namespace std;
class box
{
    private:
        int l,b,h;
    public:
        void setDimension(int l,int b,int h)
        {
          this->l=l; this->b=b; this->h=h;
        }
        void showDimension()
        {
            cout<<"l="<<l<<" b="<<b<<" h="<<h;
        }


};
main()
{
    box smallBox;
    smallBox.setDimension(1,3,4);
    smallBox.showDimension();
    getch;
}
