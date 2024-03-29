// Function that shows the components of a GMM on the screen 

#include<stdio.h>
#include "structs.h"

void showgmm(struct mixture *l, int nGaussians, int dim)
{
	int i,j; // counters
	
	for (i=0;i<nGaussians;i++)
	{
		printf("Gaussian %d:\n",i+1);
		printf("p = %f\n",l[i].p);
		puts("m = ");
		for (j=0;j<dim;j++)
		  printf("%f\n",l[i].m[j]);
		puts("s = ");
		for (j=0;j<dim;j++)
		  printf("%f\n",l[i].s[j]);
		puts("\n");
	} 
}