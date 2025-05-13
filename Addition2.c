#include<stdio.h>

int main()
{
    int No1 = 0;
    int No2 = 0;
    int Ans = 0;

    printf("Enter your no1 : ",No1);
    scanf("%d", &No1);

    printf("Enter your no2 : ",No2);
    scanf("%d", &No2);
    
    Ans = No1 + No2;

    printf("Addition is : %d\n", Ans);

    return 0;
}