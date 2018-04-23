/*
 * remove_duplicates.c
 *
 *  Created on: Apr 21, 2018
 *      Author: hsahu
 */


int removeDuplicates(int A[], int n){
	if (n==0 || n==1)
        return n;

    // To store index of next unique element
    int j = 0;

    // Doing same as done in Method 1
    // Just maintaining another updated index i.e. j
    for (int i=0; i < n-1; i++) {
    	if (A[i] != A[i+1])
            A[j++] = A[i];
    }

    A[j++] = A[n-1];

    return j;
}
