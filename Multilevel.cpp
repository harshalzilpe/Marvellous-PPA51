#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        Base()
        {
            cout<<"Inside Base Constructor\n";
            i = 10;
            j = 20;
        }
        ~Base()
        {
            cout<<"Inside Base Destructor\n";
        }
        void Fun()
        {
            cout<<"Inside Base fun\n";
        }
};

class Derived : public Base
{
    public:
        int x,y;

        Derived()
        {
            cout<<"Inside Derived Constructor\n";
            x = 30;
            y = 40;
        }
        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }
        void Gun()
        {
            cout<<"Inside Derived gun\n";
        }
};

class DerivedX : public Derived
{
    public:
        int a,b;

        DerivedX()
        {
            cout<<"Inside Derived Constructor\n";
            a = 50;
            b = 60;
        }
        ~DerivedX()
        {
            cout<<"Inside Derived Destructor\n";
        }
        void Sun()
        {
            cout<<"Inside DerivedX Sun\n";
        }
};

int main()
{

    DerivedX dobj;

    cout<<"inside main function\n";

    cout<<"Size of base class "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived class "<<sizeof(Derived)<<"\n";
    cout<<"Size of DerivedX class "<<sizeof(DerivedX)<<"\n";\

    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";
    cout<<dobj.a<<"\n";
    cout<<dobj.b<<"\n";

    dobj.Fun();
    dobj.Gun();
    dobj.Sun();

   // cout<<sizeof(bobj)<<"\n";
   // cout<<sizeof(dobj)<<"\n";

    return 0;
}