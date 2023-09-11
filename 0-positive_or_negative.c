#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * this main fonction will check
 * if the number is pos or neg
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*we use if to check*/
	if(n>0)
	  printf("%d is positive \n",n);
	else if(n==0)
	  printf("%d is zero \n",n);
	else
	  printf("%d is negative \n ",n);
	return (0);
}

