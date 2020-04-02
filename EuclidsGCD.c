#include <stdio.h>

int EuclidGCD(int m, int n)
{
	while( n != 0)
	{
		int r = m % n;
		m=n;
		n=r;
	}

	printf("GCD: %d\n", m);
}

int main()
{
	EuclidGCD(24,16);
	EuclidGCD(2,0);
	EuclidGCD(108,30);
}
