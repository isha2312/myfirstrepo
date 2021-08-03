// 2. GCD with recurrsion

#include <stdio.h>

int gcd(int i,int j)
{
  if(i==j)
  return i;
 
  if(i%j==0)
  return j;
  
  if(j%i==0)
  return i;
  
  if(i>j)
  {
      return (gcd(i%j,j));
  }
  else
  {
      return (gcd(i,j%i));
  }
}


int main()
{
     
     int n1,n2,g;
     //scanning inputs
    printf("Enter first no: ");
    scanf("%d", &n1);
    
    printf("Enter second no: ");
    scanf("%d", &n2);
    

    //calling function
   g= gcd(n1,n2);
    
    printf("GCD of numbers is: %d",g);
    
    return 0;
}
