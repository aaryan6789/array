/*
 * find_odd_occurences_of_element.c
 *
 *  Created on: Apr 14, 2018
 *      Author: hsahu
 */

#include <stdio.h>
#include <stdlib.h>
#include "array.h"
/**
 * Given an Unsorted array, find the numbers occuring odd number of times.
 */
//Method 1:
// O(n2) - Two Nested Loops
// 1. Pick a Number from the array and
// 2. Search for the number in the rest of the array.
// 3. If it is occurring odd number of times then
void odd_occurence_of_number(int *A, int size){
	int count = 0;
	return;
}


// Method 2 : Hash Map
//1. Iterate over the array and Store the numbers in a Hash map.
//2. Now iterate over the hash map and check if Hash[i] %2 != 0 then its that number.
// This method will give you all the numbers that are occuring odd number of times.
// Time Complexity = O(n) and Space = O(k)


// Method 3:
// 1. Sort the Array
// 2. Linear search and keep a count of the number of occurence.
// for(int i = 0; i< size; i++){
//		if(A[i] == A[i+1]){
// 			count++;

// 		if count %2 ! = 0 then print it out
// Time Complexity = O(nlogn) + O(n) Sorting and Searching

