#include<stdio.h>
int main()
{
    int number,lastdigit,firstdigit,sum;
    scanf("%d",&number);
    lastdigit=number%10;
    while(number>=10)
    {
        number/=10;
    }
    firstdigit=number;
    sum=firstdigit+lastdigit;
    printf("%d",sum);
}