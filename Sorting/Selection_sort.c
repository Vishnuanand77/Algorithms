#include <stdio.h>
void display(int A[], int n)
{
	for(int i = 0; i< n ; i++)
	{
		printf(" %d ", A[i]);
	}
}

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void SelectionSort(int A[], int n)
{
	int i,j, minidx ;
	for(i=0;i<n-1;i++){

		minidx = i;
		for(j = i+1; j<n ;j++)
			if(A[j] < A[minidx])
				minidx = j;
		
		swap(&A[minidx], &A[j]);	
	}
}



int main()
{
	
	int A[] = {10,9,8,7,6,5,4,3,2,1};
	int n = sizeof(A)/sizeof(A[0]);
	display(A, n);

	SelectionSort(A, n);
	printf("\n");
	display(A,n);

}