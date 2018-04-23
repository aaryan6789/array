/*
 * find_max_average.c
 *
 *  Created on: Apr 21, 2018
 *      Author: hsahu
 */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "array.h"

/* LeetCode Easy
 *  Given an array consisting of n integers,
 *  find the contiguous sub-array of given length k that has
 *  the maximum average value.
 *  And you need to output the maximum average value.

Example 1:
Input: [1,12,-5,-6,50,3], k = 4
Output: 12.75

Explanation: Maximum average is (12-5-6+50)/4 = 51/4 = 12.75

Note:
1 <= k <= n <= 30,000.
Elements of the given array will be in the range [-10,000, 10,000].
 */
/*
Algorithm: By Hash Map
1. create a Hash map of size size - 3
2. For each entry in the Hash map store the average of the contiguos k numbers
3. Check the Max of them
*/

double findMaxAverage(int* A, int size, int k) {

    if(size == 1){
        return A[0];
    }
    printf("Size = %d, k = %d, size-k+1 = %d\n", size, k, size-k+1);

    double hash[size-k+1];
    memset( hash, 0, (size-k+1)*sizeof(double));

    double average;
    int sum;

    for(int i = 0; i<size-k+1; i++) {
        sum = 0;
        for(int j = 0; j<k; j++){
            sum = sum + A[i + j];
            //printf("Sum = %d i = %d j = %d A[i+j] %d\n", sum, i, j, A[i+j] );
        }

        average = (double)sum/k;
        //printf("i = %d\n", i);
        hash[i] = (double)average;

        //printf("Sum = %d Average = %f ~ %f hash[%d] = %d\n",sum, average, sum/k, i, hash[i]);
    }

    double max = LONG_MIN;
    for(int m = 0; m<size-k+1; m++) {
        if(hash[m] > max){
            max = hash[m];
        }
    }

    printf("Max average is %f\n", max);
    return max;
}


/* Method 2:
 *
 *
 */
double findMaxAverage2(int* A, int size, int k) {
    int max= INT_MIN;
    int tem=0;

    // When size and K are the same
    if(size<=k){
        max=0;
        for(int i=0; i<size; i++)
            max= max + A[i];

        printf("%d *",max);
        return (double)max/size;
    }

    for(int i=0; i<k; i++){
        tem = tem + A[i];
        printf("%d %d %d\n", tem, size, k);
    }

    for(int i=0; i<=size-k; i++){
    	if (tem>max)
    		max=tem;

        tem = tem - A[i]+ A[i+k];
    }

    printf("%d",max);
    return (double)max/k;
}
