#include<stdio.h>

int main()
{
    int no = 11;

    int *p = &no;
    int *q = &no;

    /*
        no     	11		
        *p	    11		
        &q 	    300		
        (*p)++	12
        *q	    11		
        &no	    100		
        p     	100		
        q 	    100
    */
    return 0;
}