#include <stdio.h>

/**
 * linear_search - searches for an element in an array
 *
 * @array: pointer to array
 * @size: number of elements in the array
 * @value: value to be serached for
 *
 * Return: the value is found or not
 */

int linear_search(int *array, size_t size, int value){
  /*
    Have a loop iterating the array
    compare the value at a given pint to value
       if vaulue == array[i] return idex and terminate search

       else print the wrong value 
   */
  long unsigned int i = 0;

  if (array == NULL){
    return (-1);
  }
  else{
    for(i=0; i<size; i++){
      if (value == array[i]){
	printf("Value checked array[%ld] = [%d]\n", i, value);

	return (i);
      }
      else{
       printf("Value checked array[%ld] = [%d]\n", i, array[i]);
      }

    }
  }
  return (0);
}
