#include <stdio.h>
#include <stdlib.h>


void display(int A[], int n){
for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	
}


void merge(int A[], int lb, int mid, int ub){

	int i,j,k;
	int n1 = mid - lb +1;
	int n2 = ub - mid;
	int L[n1], R[n2];

	for(i =0; i<n1; i++){
		L[i] = A[lb+i];
	}

	for(j=0;j<n2;j++){
		R[j] = A[mid+1+j];
	}

	i =0; j =0; k =lb;

	while (i< n1 && j <n2)
	{
		if(L[i] <= R[j]){
			A[k] = L[i];
			i++;
		}
		else{
			A[k] = R[j];
			j++;
		}
		k++;
	}
	
	
	while(i<n1){
		A[k] = L[i];
		i++; k++;
	}

	while (j<n2)
	{
		A[k] = R[j];
		j++; k++;
	}

}

void divide(int A[], int lb, int ub){
	
	if(lb< ub){
		int mid = lb+(ub-lb)/2;
		divide(A, lb, mid);
		divide(A,mid+1,ub);
		merge(A, lb, mid, ub);
		
	}

}


int main(){
	int A[] = {15,5,24,8,1,3,16,10,20};
	int n = sizeof(A)/sizeof(A[0]);

	display(A, n);
	divide(A, 0, n-1);
	display(A, n);
}