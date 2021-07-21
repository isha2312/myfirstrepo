#include <stdio.h>

int main()
{
    int n,p;
    scanf("%d %d",&n,&p);
    int start=0;
    int end=n;
    int mid;
    float sqr;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(mid*mid==n)
        {
            sqr=mid;
            break;
        }
        else if(mid*mid<n)
        {   
            sqr=start;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    
    float c=0.1;
    for(int i=0;i<p;i++)
    {
        while(sqr*sqr<=n)
        {
            sqr+=c;
        }
        sqr-=c;
        c=c/10;
    }
    printf("squareroot of n is= %g",sqr);
}

