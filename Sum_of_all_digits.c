#include<stdio.h>
int main()
{
    int number,sum=0,digit;
    scanf("%d",&number);
    while (number!=0)
    {
        digit=number%10;
        sum+=digit;
        number/=10;
    }
    printf("%d",sum);
}