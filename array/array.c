/* ARRAY_C_ */
#include <stdio.h>
#include <stdlib.h>
/**
 * Insert in an Array
 *
 */

void insert(int *A, int data, int position, int length){
	int i;

	for (i = length-1; i>=position-1; i--) {
		printf("A[%d]: %d\n", i, A[i]);
		A[i+1] = A[i];
		printf("A[%d]: %d\n", i, A[i]);
	}

	A[position-1] = data;
}

/**
 * Print an array
 * == NOTE == :
 * The sizeof way is the right way iff you are dealing with arrays not received
 * as parameters. An array sent as a parameter to a function is treated as a pointer,
 * so sizeof will return the pointer's size, instead of the array's.
 */
void print_array(int *A, int length){
	int i;

	printf("\nLength of the array is : %d\n", length);
	printf("Array: ");

	for(i = 0; i<length; i++)
		printf("%d ", A[i]);

	printf("\n");
}

/**
 * find_max_in_array - find maximum element in the array.
 * 1. By index
 * 2. By pointers
 */
void find_max_in_array(int *A, int length){
	int i, max, location = 0;

	max = A[0];
	for(i = 0; i<length; i++){
		if (A[i] > max) {
			max = A[i];
			location = i;
		}
	}
	printf("The maximum element is %d at location %d\n", max, location);
}

/**
 * find_peak_in_array - find the peak element in an array
 * Peak Element is that element in the array which is larger than its neighbors
 * A[] = 1 3 4 2 5
 * Peak element = 4
 */
void find_peak_in_array(int *A, int length){

}


int main(){
	int A[] = {1, -3, 16, 6, 7, 9};
	int length = 0;
	length = sizeof(A)/sizeof(A[0]);

	/*for(int i = 0; i<5; i++){
		A[i]  = i+1;
		printf("%d\n", A[i]);
	}
	*/
	//print_array(A, length);
	//insert(A, 2, 1, length);
	//length = sizeof(A)/sizeof(A[0]);
	print_array(A, length);
	find_max_in_array(A, length);


	return 0;
}
