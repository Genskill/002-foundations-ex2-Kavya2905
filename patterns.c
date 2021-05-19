// Online C compiler to run C program online
#include <stdio.h>
#include <cs50.h>

int main() {
    
    int p, n;
    
    p = get_int("Enter pattern number: ");

    n = get_int("Enter number of lines: ");

    printf("\n");
    
    if (p == 1)
    {
        for(int i = n; i >= 1; i--)
        {        
        // loop to print *
        for(int j = i; j >= 1; j--)
            {
            printf("* ");
            }               

        printf("\n");
    }
        
    }
        
    
    if (p==2)
    {
        for (int i = 1 ; i <= n; i++ ) 
    {
      for (int j = 1 ; j <= n; j++ ) 
      {
      	if(j <= n-i)
      	{
          printf(" ");
	    }
	    else
	    {
	    printf("*");		  	
	    }         
      }
      printf("\n");
    }
        
    }
        
    
    
    
    
    return 0;
}
