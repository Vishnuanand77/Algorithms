#include <stdio.h>

void display(int A[], int n)
{
	for(int i = 0; i< n ; i++)
	{
		printf(" %d ", A[i]);
	}
	printf("\n");
}

void InsertionSort(int A[], int n)
{
	for(int i=0; i<n;i++){
		int v = A[i];
		int j = i-1;
		while(j>=0 && A[j]>v){
			A[j+1] = A[j];
			j= j-1;
		}
		A[j+1] = v;
		display(A, n);
	}
}

int main()
{
	int A[] = {4,3,2,1,5,7,9,6};
	int n = sizeof(A)/sizeof(A[0]);
	InsertionSort(A, n);
}