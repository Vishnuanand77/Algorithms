#include <stdio.h>

int solvePoly(int n, int coeff[], int x)
{
	int p = coeff[0];
	int power = 1;
	int i;
	for(i=0;i<n;i++){
		power = power*x;
		p = p + coeff[i]*power;
	}
	printf("solution : %d\n", p);
}

int main()
{
	int n = 2;//Largest power in the polynomial
	int coeff[] = {4,4,4}; //Coefficients of the polynomial
	int x = 2;//Initial condition for the polynomial

	solvePoly(n, coeff, x);
}