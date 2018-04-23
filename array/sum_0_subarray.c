#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "array.h"

#define MAX(x, y) ((x) > (y)) ? x : y

/*
 * sum_0_subarray.c |  Created on: Apr 15, 2018 |      Author: hsahu
 *
 * check if a SubArray with '0' sum exists or not from the start index.
 */
void check_zero_subarray(int* A, int size){
	int sum[size];
	memset(sum, -1, size*sizeof(int));
	int sum_till_here = 0;

	for(int i = 0; i<size; i++){
		sum_till_here = sum_till_here + A[i];
		printf("Sum till index %d is %d\n", i, sum_till_here);
		sum[i] = sum_till_here;
	}

	for(int j = 0; j<size; j++){
		if(sum[j] == 0){
			printf("Zero Sum Subarray found.\n");
		}
		else{
			printf("No Zero Sum Subarray found\n");
		}
	}

	return;
}






















































// Algorithm: Using HashMap

/* Use Hashing to solve this problem in O(n) time.
 * The idea is to iterate through the array and for every element arr[i],
 * calculate sum of elements from 0 to i (this can simply be done as sum += arr[i]).
 * If the current sum has been seen before in the hash, then there is a zero sum array.
 * Hashing is used to store the sum values,
 * so that we can quickly store sum and find out whether the current sum is seen before or not.
*/

void max_length_subarray_sum(int *A, int size){
	int sumMap[size];
	int sum = 0;		// Initialize the sum of elements
	int max_len = 0; 	// Number of elements in the subarray

	for(int i = 0; i< size; i++){
		sum = sum + A[i];

		if (sum == 0)
			max_len = i+1;

		sumMap[i] = sum;

		// Look for this sum in Hash table
		for(int j = 0; j< i; j++){
			if(sumMap[j] == sum){
				max_len = MAX(max_len, i);
			}
		}

	}


}
