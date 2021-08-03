//3. Towe of hanoi

#include <stdio.h>
#include <math.h>

void tower_of_hanoi(int n, char from, char to, char aux)
{
     
    if(n==1)
    {
        printf(" %c to %c ",from,to);
        return;
    }
    
    //moving the n-1 disk to intermediate
    tower_of_hanoi(n-1,from,aux,to);
    
    printf("\n %c to %c \n",from,to);
    
    //moving the n-1 disk from intermediate to final destination
    tower_of_hanoi(n-1,aux,to,from);

}


int main()
{
    
    printf("The moves are:\n");
    
    //calling the function
    tower_of_hanoi(3,'A','C','B');
    
    //printing the number of moves
    int n=3;
    int k= pow(2,n)-1;
    printf("\nTotal no of moves: %d",k);

    return 0;
}
