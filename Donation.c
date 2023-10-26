#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int a=y-x,b=x-y;
    if (x<y)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
    }
}