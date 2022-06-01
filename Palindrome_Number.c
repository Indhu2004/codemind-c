#include<stdio.h>
int main()
{
    int i,t,temp;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int r=0,n,temp,rem;
        scanf("%d",&n);
        temp=n;
    while(n>0)
    {
        rem=n%10;
        r=r*10+rem;
        n=n/10;
    }
    if(temp==r)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
  }
}