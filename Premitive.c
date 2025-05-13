#include<stdio.h>

int main()
{
    char ch = 'M';          // 1 byte 
    int no = 11;            // 4 byte
    float f = 89.78;        // 4 byte
    double d = 86.89754;    // 8 bytes

    printf("%c\n",ch);
    printf("%d\n",no);
    printf("%f\n",f);
    printf("%lf\n",d);
    
    return 0;
}