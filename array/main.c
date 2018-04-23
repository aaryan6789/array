/* ARRAY_C_ */
#include <stdio.h>
#include <stdlib.h>
#include "array.h"

#define length(a) (sizeof a / sizeof *a)
//=============================================================================
// Utility Functions
//=============================================================================
/**
 * Swap - swaps 2 numbers by reference
 */
void swap(int *a, int *b){
	int temp ;
	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * insert - Insert in an Array
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

// </Utility Functions>

int main(){
	int A[] = {1, -3, 16, 6, 7, 9};
	int length = 0;
	length = sizeof(A)/sizeof(A[0]);

	int B[] = {1, 0, 1, 0, 1, 0};
	int lengthB = 0;
	lengthB = sizeof(B)/sizeof(B[0]);

	int a = 7;
	int b = 8;
	swap(&a, &b);
	printf("a = %d", a);
	printf("b = %d", b);

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
	find_peak_in_array(A, length);
	print_array(A, length);
	segregate_even_odd(A, length);
	print_array(A, length);

	print_array(B, lengthB);
	segregate_0_1(B, lengthB);
	print_array(B, lengthB);

	int C[] = {};
	int D[] = { 3, 6, 9};

	sorted_merge(C, D, 0, 3);
	print_array(C, 4);

	/* ------------ bit Array --------*/
    int arr[] = {1, 5, 1, 10, 12, 10};
    int size = sizeof(arr)/sizeof(arr[0]);

    check_duplicates_bitArray(arr, size);

    /* ------------ Rearrange Array --------*/

    int E[] = {20, -10, 35, 45, 55, 67, -90};
    int esize = sizeof(E)/sizeof(E[0]);

    regarrange_pos_neg(E, esize);
    print_array(E, esize);

    int F[] = {0, 0, 1 , 3, 5, 6, 0, 9, 0, 2, 0, 0, 8};
    int fsize = sizeof(F)/sizeof(F[0]);

    push_zero_to_end(F, fsize);
    print_array(F, fsize);

    int G[] = {8,1,1,1,2,7,4,3,1,1};
    int gsize = sizeof(G)/sizeof(G[0]);
    print_array(G, gsize);

    maxProfit(G, gsize);
    max_profit_many(G, gsize);
    findDuplicate(G, gsize);

    check_zero_subarray(E, esize);


    int H[] = {1,3, -2, 9, 5, -6};
    int hsize = sizeof(H)/sizeof(H[0]);

    printArray(H, hsize);
    //plus_one(H, hsize);
    printArray(H, hsize);

    countPairs(G, gsize, 2);

    countPairsWithDiffK(G, gsize, 2);

    sum_close_to_zero(H, hsize);


	return 0;
}
