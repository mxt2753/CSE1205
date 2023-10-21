#include <stdio.h>

int main()
{
	int A, B;
	printf("Enter A: ");
	scanf("%d", &A);
	
	printf("Enter B: ");
	scanf("%d", &B);
	
	printf("A&&B = %d\n", A&&B);
	printf("A||B = %d\n", A||B);
	printf("!(A||B) = %d\n",!(A||B)); 
	/*if(A && B)
	{
		printf("");
	}
	else if((A||B))
	{
		printf("");
	}
	else(!A||B)
	{
		printf("");
	} */
	return 0;
}
