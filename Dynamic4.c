#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;

    ptr = (int *)malloc(5 * sizeof(int));

    ptr = (int *)realloc(ptr, 7 * sizeof(int));  //Case 1
    
    ptr = (int *)realloc(ptr, 3 * sizeof(int));  //Case 2
    
    ptr = (int *)realloc(NULL, 5 * sizeof(int)); //Works like malloc

    ptr = (int *)realloc(ptr, 0);                //Works like free
    
    return 0;
}