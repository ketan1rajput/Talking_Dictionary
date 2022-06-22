#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the numbers");
    scanf("%d%d",&a,&c);
    b=a;
    a=c;
    c=b;
    printf("%d%d",a,c);
    return 0;
}