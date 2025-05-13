#include<stdio.h>
#include<io.h>
#include<fcntl.h>

int main()
{
    char FileName[20];
    int FD = 0;
    char Data[100] = {'\0'};

    printf("Enter the file name that you want to delete : \n");
    scanf("%s",FileName);

    unlink(FileName);
    
    return 0;
}

