#include<stdio.h>
#include<conio.h>
int main()
{
    double r;
    printf("enter the radius of circle");
    scanf("%lf",&r);
    double area=3.14*(r*r);
    printf("The area of circle is %lf",area);
    return 0;
}