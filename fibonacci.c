// 4. Print n times the every third element of the fibonacci series
//
#include <stdio.h>

void fib(int n)
{
    int a,b,i,c,k=0,j;
    int arr[50];
    a=0;
    b=1;
    
    for(i=1;i<=3*n;i++)
    {
        //putting values of fibonacci series to an array
        arr[k]=a;
        k++;
        
        c=a+b;
        a=b;
        b=c;
    }
    
    //printing array for every 3rd element
    for(j=2;j<=k;j+=3)
    {
       printf("%d ",arr[j]);
    }
}


int main()
{
    int num;
    
    //scanning value for n
    printf("Enter the value of num ");
    scanf("%d",&num);
    
    //calling function
    fib(num);

    return 0;
}
