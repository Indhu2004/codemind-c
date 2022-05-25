#include<stdio.h>
int main()
{
    int n,i,w[20],t,bill;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&w[i]);
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(w[i]<=t)
        bill+=1;
        else
        bill+=2;
    }
    printf("%d",bill);
    return 0;
}