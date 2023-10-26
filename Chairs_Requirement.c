#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int a=x-y,b=y-x;
    if (x>y)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
    }
}