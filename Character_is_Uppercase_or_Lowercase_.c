#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if (x >='A' and x <='Z')
    {
        printf("uppercase alphabet");
    }
    else if(x>='a' and x<='z')
    {
        printf("lowercase alphabet");
    }
    else{
        printf("not an alphabet");
    }
}