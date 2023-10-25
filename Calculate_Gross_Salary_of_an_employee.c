#include<stdio.h>
int main()
{
    float salary,hra,da,pf,gross;
    scanf("%f %f %f",&salary,&hra,&da);
    pf=(12/100.00)*salary;
    gross=salary+hra+da+pf;
    printf("%.2f
%.2f",pf,gross);
}