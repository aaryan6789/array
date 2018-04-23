/*
 * sum_subarray_k.c
 *
 *  Created on: Apr 15, 2018
 *      Author: hsahu
 */
#include <stdio.h>
#include <stdlib.h>
#include "array.h"

/*
 * Given an array of integers and an integer k,
 * you need to find the total number of continuous subarrays whose sum equals to k.
 *
 * Algorithm 1: Two Loop method
 * 1. For each element see if the continuous sub arrays can be formed which can
 * lead to the sum.
 * 2. Pick a element one by one from the First loop.
 * 3. Check for the subsequent elements if they can form a sum == k.
 *
 * Time Complexity = O(n2)
*/

int subarraySum(int* A, int size, int k) {
    int count = 0;
    for(int i = 0; i< size; i++){
        int sum = A[i];
        if (sum == k)
            count = count+1;

        for(int j = i+1; j< size; j++){
            sum = sum + A[j];
            if(sum == k){
                count++;
            }
        }
    }
    printf("total subarrays with sum = %d are %d\n", k, count);
    return count;
}

/*
Algorithm : Use Hash Map
The idea behind this approach is as follows:

1. If the cumulative sum (represented by sum[i] for sum upto ith index)
upto two indices is the same, the sum of the elements lying in between those indices is zero.

Extending the same thought further, if the cumulative sum upto two indices, say i and j
is at a difference of k i.e. if sum[i] - sum[j] = k,
the sum of elements lying between indices i and j is k.

Based on these thoughts, we make use of a hashmap sumMap which is used to store
the cumulative sum upto all the indices possible along with the number of times
the same sum occurs.

We store the data in the form: (sum_i, no. of occurrences of sum_i).

We traverse over the array A and keep on finding the cumulative sum.
Every time we encounter a new sum, we make a new entry in the hashmap corresponding to that sum.
If the same sum occurs again, we increment the count corresponding to that sum in the hashmap.
Further, for every sum encountered, we also determine the number of times the sum sum-k
has occurred already, since it will determine the number of times a subarray with sum k has

occurred upto the current index.

We increment the count by the same amount.
After the complete array has been traversed, the count gives the required result.

*/

void subArraySum_hash(int *A, int size){



}
