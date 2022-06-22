#include<stdio.h>
int main()
{
    int number,sum=0,ans,temp;
    printf("Enter the number to check whether it is armstrong or not.");
    scanf("%d",&number);
    temp=number;
    while(number>0)
    {
        ans=number%10;
        sum=sum+(ans*ans*ans);
        number=number/10;
    }
    if(sum==temp)
        printf("The number is armstrong!");
    else
        printf("Not Armstrong");
        return 0;
}