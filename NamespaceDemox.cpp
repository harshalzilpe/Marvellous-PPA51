#include<iostream>
using namespace std;    // Pre-define

namespace Marvellous    
{
    class Demo
    {
        public:
        void Display()
        {
            cout<<"Inside the display method\n";
        }
    };
}

int main()
{
    Marvellous::Demo obj;
    obj.Display();

    return 0;
}