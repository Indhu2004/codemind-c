#include<stdio.h>
int main()
{
    char A,E,I,O,U,b;
    scanf("%c",&b);
    if(b=='A'||b=='E'||b=='I'||b=='O'||b=='U')
    {
        printf("Vowel");
    }
    else
    if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}