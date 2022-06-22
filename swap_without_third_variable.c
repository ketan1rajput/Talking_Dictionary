#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the numbers");
    scanf("%d%d",&a,&b);
    int c=a+b;
    a=c-a;
    b=c-b;
    printf("%d\n%d",a,b);
    return 0;
}