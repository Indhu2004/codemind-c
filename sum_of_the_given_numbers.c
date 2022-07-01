#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,b,sum=0;
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("%d
",sum);
    }
}