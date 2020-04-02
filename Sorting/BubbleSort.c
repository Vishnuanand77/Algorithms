#include <stdio.h>

void display(int A[], int n)
{
	for(int i = 0; i< n ; i++)
	{
		printf(" %d ", A[i]);
	}
	printf("\n");
}

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void BubbleSort(int A[], int n)
{
	for(int i =0; i< n-1; i++){
		for(int j = 0; j<n-1-i; j++){
			if(A[j+1]<A[j])
				swap(&A[j+1], &A[j]);
		}
	}
	display(A, n);
}
int main()
{
	int A[] = {10,9,8,7,6,5,4,3,2,1};
	int n = sizeof(A)/sizeof(A[0]);
	display(A, n);
	BubbleSort(A,n);
}