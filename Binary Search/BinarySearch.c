#include <stdio.h>

int BinarySearch(int A[], int key, int left, int right)
{
if(right >=1 ){
	int mid = (left+right)/2;
	if(key = A[mid])
		 printf("Key found at: %d\n", mid+1);
	else if(key<A[mid])
			return BinarySearch(A,key,left, mid-1);
	else
		return BinarySearch(A,key,mid+1,right);
}
}

int main()
{
	int A[] = {1,2,3,4,5,6};
	BinarySearch(A,1,0,5);
	BinarySearch(A,3,0,5);
	BinarySearch(A,5,0,5);

}