#include <cassert>
#include "moreArrayFuncs.h"

// a: an array of ints.  size is how many ints in array
// Return the index of largest value.  
// If more than one element has largest value, 
// break tie by returning the smallest index that
// corresponds to an element with the largest value.
// You may assume size >= 1

int indexOfMax(int *a, int size) 
{
  assert(size >= 1);
  int seeker = 0, temp = 0; // initiliaze controllers
  int max = 0, max_value = a[0]; //initiliaze outputs

  for (int i = 0; i < size; i++)
  {
  	if (a[i] > max_value)
	{
		max_value = a[i];
		max = i;
	}
	else if (a[i] == max_value)
	{
		if (i == size - 1) break; //if last two identical break
		temp = i;
		max_value = a[i];
		++seeker;
		max = temp - seeker + 1; //keeps track of smallest index
	}
	if (a[i] != max_value)
	{
		seeker = 0; //resets index seeker, if a[i] stops repeating
	}
  }
  return max;
}

// a: an array of ints.  size is how many ints in array
// Return the index of smallest value.  
// If more than one element has largest value, 
// break tie by returning the smallest index that
// corresponds to an element with the largest value.
// You may assume size >= 1
int indexOfMin(int *a, int size) 
{
  assert(size >= 1);
  int seeker = 0, temp = 0; // initiliaze controllers
  int min = 0, min_value = a[0]; //initiliaze outputs

  for (int i = 0; i < size; i++)
  {
  	if (a[i] < min_value)
	{
		min_value = a[i];
		min = i;
	}
	else if (a[i] == min_value)
	{
		if (i == size - 1) break;//if last two identical, break.
		temp = i;
		min_value = a[i];
		++seeker;
		min = temp - seeker + 1; //keeps track of smallest index
	}
	if (a[i] != min_value)
	{
		seeker = 0; //resets index seeker, if a[i] stops repeating
	}
  }
  return min;
}

// a: an array of ints.  size is how many ints in array
// Return the largest value in the list.
// This value may be unique, or may occur more than once
// You may assume size >= 1
int largestValue(int *a, int size) 
{
  assert(size >= 1);
  int max = a[0];
  for (int i = 0; i < size; i++)
  {
	  if (a[i] > max)
	  {
		  max = a[i];
	  }
  }
  return max;
}

// a: an array of ints.  size is how many ints in array
// Return the smallest value in the list.
// This value may be unique, or may occur more than once
// You may assume size >= 1

int smallestValue(int *a, int size) 
{
  assert(size >= 1);
  int min = a[0];
  for (int i = 0; i < size; i++)
  {
	  if (a[i] < min)
	  {
		  min = a[i];
	  }
  }
  return min;
}


// a: an array of ints.  size is how many ints in array
// Return the sum of all the elements in the array
// size may be 0 in this case, or non-zero.

int sum(int *a, int size) 
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
	  sum = a[i] + sum;
  }
  return sum; 
}


// dest is an array of int that has capacity at LEAST of size n
// (whatever is in dest will be written over, so is irrelevant)
// src is an array of int of at least size n
// n is number of elements in src to be copied
// copy n elements from src to dest.

void copyElements(int *dest, int *src, int n) 
{
  for (int i = 0; i < n; i++)
  {
	 dest[i] = src[i];
  }
}


// dest is an array of int that has capacity at LEAST of size n
// (whatever is in dest will be written over, so is irrelevant)
// src is an array of int of at least size n
// n is number of elements in src to be copied
// copy ONLY the elements with odd values from src to dest.
// return the number of elements that were copied

int copyOddOnly(int *dest, int *src, int n) 
{
  int count = 0;
  int j = 0; //index for new size array for dest
  for (int i = 0; i < n;  i++)
  {
	  if (src[i] % 2 != 0) // it is odd if true
	  {
		  dest[j] = src[i]; // copy only odd values
		  j++;
		  count++;
	  }
  }
  return count;
}

// a, b and product are all arrays of size n (or greater)
// in each case, only the first n elements of a, b and product are used
// a and b have their values read, and are unchanged
// the old values in product are ignored, and overwritten.
// After this function, each element of product should
// contain the product of the corresponding elements of 
// a and b.
// Example if a is {1,2,3,4} b is {3,5,7,9} and n=4,
// then after a call to multiplePairwise(a,b,product,4), 
// product will be {3,10,21,36}.

void multiplyPairwise(int *a, int *b, int *product, int n) 
{
  int i = 0; //elements of a
  int j = 0; //elements of b
  int k = 0; //elements of product
 
  for (k = 0; k < n; i++, j++, k++)
  {
	  product[k] = a[i] * b[j];
  }
}

// len is the number of elements the array you create should contain
// you should return a pointer to the new integer array of size len
// with all of the elements in it set to 0
int* createArray(int len) 
{
  int *ptr;
  ptr = new int[10]; //allocate memory in the heap space
  for (int i = 0; i < len; i++)
	  ptr[i] = 0;
  return ptr;
}
