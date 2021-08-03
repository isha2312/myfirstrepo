// 1. selection sort with recurrsion

#include <stdio.h>

void selection(int array[], int start,int n)
{
    if ( start>= n - 1 )
        return;
        
    int minIndex = start;
    
    for (int i=start+ 1;i<n; i++ )
    {
        if (array[i] < array[minIndex] )
            minIndex = i;
    }
    int temp = array[start];
    array[start] = array[minIndex];
    array[minIndex] = temp;
    selection(array, start + 1,n);
}

int main()
{
     
     int n,i;
    printf("Enter the size: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Enter the elements in array:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    
    //calling function
    selection(a,0,n);
    
    printf("The final array is \n");
    for (i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    
    return 0;
}
