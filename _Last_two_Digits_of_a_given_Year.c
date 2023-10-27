#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int lasttwodigit=a%100;
    printf("%.2d",lasttwodigit);
}