#include<stdio.h>

int main()
{
    /* Price is an One dimensional array,
     which contains 6 elements, 
     each element is of type integer */
    int Price[] = {67,89,45,88,90,34};

    printf("%d\n",Price[0]);
    printf("%d\n",Price[2]);
    printf("%d\n",Price[5]);

    printf("%d\n",sizeof(Price));
    printf("%d\n",sizeof(Price[1]));
    printf("%d\n",sizeof(Price[3]));

    return 0;
}