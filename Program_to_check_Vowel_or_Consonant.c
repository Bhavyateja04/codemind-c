#include<stdio.h>
int main()
{
    char r,a,e,i,o,u,A,E,I,O,U;
    scanf("%c",&r);
    if (r == 'a'||r == 'e'||r == 'i'||r == 'o'||r == 'u'|| r == 'A'||r == 'E'||r == 'I'||r == 'O'||r == 'U')
    {
        printf("Vowel");
    }
    else 
    {
        printf("Consonant");
    }
}