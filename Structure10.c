#include<stdio.h>

struct Demo
{
    int no;     // 4
    float f;    // 4
};

struct PPA
{
    int X;              // 4
    struct Demo dobj;   // 8 (Addition of size of struct Demo variables i.e no and f )
    int Y               // 4
};                      // 16

int main()
{
    struct PPA obj;
    obj.X = 10;
    obj.Y = 20;
    obj.dobj.no = 11;
    obj.dobj.f = 3.14;

    return 0;
}