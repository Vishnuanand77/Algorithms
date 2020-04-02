#include <stdio.h>
#include <stdlib.h>


int partition(int A[], int l, int r){
    int pivot = A[l];
    int start = l;
    int end  = r;
    while (start<end)
    {
        while(A[start]<= pivot){
            start++;
        }
        while (A[end]>pivot)
        {
            end--;
        }
        if(start<end){
            int temp = A[start];
            A[start] = A[end];
            A[end] = temp;
        }
        
    }
    int swap = A[l];
    A[l] = A[end];
    A[end] = swap;

    return end;
}

void QuickSort(int A[], int l, int r){
    if(l<r){
        int loc = partition(A, l, r);
        QuickSort(A,l, loc -1);
        QuickSort(A, loc+1, r);
    }
}

void display(int A[], int n){
for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	
}

int main(){

    int A[]= {7,6,10,5,9,2,1,15};
    int n = sizeof(A)/sizeof(A[0]);
    display(A, n);
    QuickSort(A, 0, n-1);
    display(A,n);
}