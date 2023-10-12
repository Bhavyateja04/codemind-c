#include<stdio.h>
int main(){
    int radius;
    scanf("%d",&radius);
    float area=3.14*radius*radius;
    float perimeter=2*3.14*radius;
    printf("%.2f
%.2f" ,area,perimeter);
}