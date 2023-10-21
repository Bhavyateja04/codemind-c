#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    float loss= x-y;
    float a=(loss/x)*100;
    printf("%.2f",a);
}