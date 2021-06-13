#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int *ft_range(int min, int max)
{
	  int i;
	  int *range;
	      
	    range = malloc(sizeof(*range) * ((max - min) + 1));
	    i = 0;  
	  while (min < max)
	    {
	    range[i] = min;
	    i++;
	    min++;
	    }
	   range[i] =0;
                
       return (range);
 }
		
		  
int	main()
{
	        int min = 1;
	        int max = 5;
	        int i;
		int *range = ft_range(min, max);                                
	        i = 0;
	     while ( i <4)
	 {
	      printf("%d", range[i] );
	      i++;
	 }                 
       	return (0);	
}
