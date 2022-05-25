#include<stdio.h>
int main()
{
    int n,i,ecount,ocount,x[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(x[i]%2==0)
        ecount++;
        else
        ocount++;
    }
    printf("%d %d",ecount,ocount);
    return 0;
}