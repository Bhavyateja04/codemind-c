#include<stdio.h>
int main()
{
    int side;
    scanf("%d",&side);
    int Surface=6*side*side;
    int Volume=side*side*side;
    printf("Surface area = %d and Volume = %d",Surface,Volume);
}