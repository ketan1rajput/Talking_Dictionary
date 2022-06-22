#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("Enter the number till which you want to print the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}