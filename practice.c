#include<stdio.h>
int main()
{
    int i;
    int Arr[10];
    printf("Enter elements in an Array!");
    for(i=0;i<5;i++)
    {
        scanf("%d",&Arr[i]);
    }
    printf("The elements are");
    for(i=0;i<5;i++)
    {
        printf("%d",Arr[i]);
    }
}