#include<iostream>
using namespace std;

int main()
{
    int Arr[5];     //Static Memory

    int *ptr = NULL;

    //Step1 : Allocate the memory
    ptr = new int[5];

    //Step2 : Use the memory
    //Logic

    //Step3 : Deallocate the memory
    delete []ptr;

    return 0;
}