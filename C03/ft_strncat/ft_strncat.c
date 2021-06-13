#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, int nb)
{
	  int i;
	    int y;


	      i = 0;
	        y = 0;
		  while (dest[i] != '\0')
			    {
				        i++;
					  }
		    while (y != nb)
			      {
				          dest[i] = src[y];
					      i++;
					          y++;
						    }
		      dest[i] = '\0';
		        return (dest);
}

int main(void) {
	  char a[] = "BONJOur";
	    char b[] = "bon";
	      ft_strncat(a, b, 2);
	        printf("%s \n", a);
		  return 0;
}
