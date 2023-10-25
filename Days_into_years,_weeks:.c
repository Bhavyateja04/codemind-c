#include<stdio.h>
int main()
{
    int days,years,remainingdays,weeks;
    scanf("%d",&days);
    years=days/365;
    remainingdays=days%365;
    weeks=remainingdays/7;
    printf("%d
%d",years,weeks);
}