#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    float profit=y-x;
    float a=(profit/x)*100;
    printf("%.2f",a);
}