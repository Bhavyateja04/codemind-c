#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if (a<=34)
    {
        printf("FAILED");
    }
    else if (b<=34)
    {
        printf ("FAILED");
    }
    else if (c<=34)
    {
        printf("FAILED");
    }
    else if (d<=34){
        printf("FAILED");
    }
    else if ( e<=34)
    {
        printf("FAILED");
    }
    else {
        printf("PASSED");
    }
}