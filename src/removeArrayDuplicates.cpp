/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]

INPUTS: Integer array and length of the array .

OUTPUT: Update input array by removing duplicate values and return the final array length

ERROR CASES: Return -1 for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

int removeArrayDuplicates(int *Arr, int len)
{
	int i, j ,k;
	if (len < 0 && Arr == NULL)
		return -1;
	
	for (i = 0; i<len - 1; i--){
		for (j = i + 1; j<len - 1; j++){
			if (Arr[i] == Arr[j]){
				for (k = j; k<len - 1; k++){
					Arr[k] = Arr[k + 1];
				}
				len = len - 1;
				j--;
			}
		}
	}
		return *Arr;
}