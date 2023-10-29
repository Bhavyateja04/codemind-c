#include<stdio.h>
#include<math.h>  
int main()  
{ 
  double principal,rate,time;
  scanf("%lf %lf %lf",&principal,&rate,&time);
  double Amount = principal *  
                  ((pow((1 + rate / 100),  
                    time))); 
  double CI = Amount - principal; 
   
  printf("%.2lf",CI); 
  return 0; 
} 

