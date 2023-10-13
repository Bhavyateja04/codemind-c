#include<stdio.h>
int main()
{
    float radius;
    scanf("%f", &radius);
    float volume =(4/3.0)*3.14*radius*radius*radius;
    printf("%.2f",volume);
}