#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int i;
    for (i=1;i<m+1;i=i+1)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}