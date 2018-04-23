/* find_peak.c | Created on: Apr 14, 2018 | Author: hsahu */
#include <stdio.h>
#include <stdlib.h>
#include "array.h"
/**
 * CTCI
 * find_peak_in_array - find the peak element in an array
 * Peak Element is that element in the array which is larger than its neighbors
 * A[] = 1 3 4 2 5
 * Peak element = 4
 *
 * Algorithm:
 * 1. Linear Search
 * Iterate through the array and check if the index +1 and index-1 is smaller then this index element.
 * Time Complexity:  O(n)
 *
 * 2. Binary Search
 * i) Sort the Array
 * ii) Use binary search and find the peak.
 * -- For peak , binary Search condition would be:
 * 1. if A[mid] > A[mid+1] && A[mid] > A[mid-1]
 * 2. Boundary Conditions:
 * a) start, if mid == start && A[mid]>A[mid+1]
 * b) end, if mid == end && A[mid] > A[mid-1]
 *
 *
 * Time Complexity = O(nlogn)
 *
 */
void find_peak_in_array(int *A, int length){
	// HINT: The array is unsorted.
	int i;

	for(i = 0; i<length; i++) {
		if (A[i]>A[i+1] && A[i] > A[i-1]){
			printf("Peak Element in the Array: %d\n", A[i]);
		}
	}
}
