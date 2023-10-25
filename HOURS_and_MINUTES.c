#include<stdio.h>
int main()
{
    int minutes,hours,remainingminutes;
    scanf("%d",&minutes);
    hours=minutes/60;
    remainingminutes=minutes%60;
    printf("%d Hour(s) %d Minute(s)
",hours,remainingminutes);
}