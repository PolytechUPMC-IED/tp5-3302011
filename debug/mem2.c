#include<stdlib.h>
#include <stdio.h>

int main(void)
{
  int i,size,sum;
  sum=0;  
  int *p;
  
  printf("Entrez un nombre\n");
  scanf("%d",&size);
  

  p=(int *)malloc(size*sizeof(int));

  for(i = 0 ; i< size ; i++)
    p[i] = i ;
  

  for(i = 0 ; i< size ; i++) 
      sum += p[i]; 

  printf("\n"); // pour de la lisibilité  

  free(p);

  return EXIT_SUCCESS;     
}
