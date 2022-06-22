#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,output;
    printf("Enter the number of which you want to calculate the table");
    scanf("%d",&n);5
    for(i=1;i<=10;i++)
    {
        output=n*i;
        printf("%d*%d=%d\n",n,i,output);
    }
    return 0;
}