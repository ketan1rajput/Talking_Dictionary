#include<stdio.h>
#include<conio.h>
int main()
{
double principle,rate,time;
printf("Enter principle amount");
scanf("%lf",&principle);
printf("Enter Rate of Interest");
scanf("%lf",&rate);
printf("Enter Time");
scanf("%lf",&time);
double interest=(principle*rate*time)/100;
printf("%lf",interest);
return 0;
}
