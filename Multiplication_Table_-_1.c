#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<13;i=i+1){
        printf("%d x %d = %d
",n,i,n*i);
    }
}