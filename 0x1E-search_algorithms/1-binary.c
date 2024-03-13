#include <stdio.h>
/**
 * binary_search - searches value in a sorted array
 *
 * @array: the sorted array
 * @size: size of the array
 * @value: That to look for in the array
 *
 * Return: Returns the index of the found value
 */

int binary_search(int *array, size_t size, int value){
  /**
   * Assume array is in ascending order
   * Assume that value will apear only once 
   *
   * if not presennt in array || Array is NULL => retrun -1
   *
   * print the array each time it changes
   * devide array by half
   * Check for 
   */

    int left = 0;
    int right = size - 1;
    int mid;
    int i;


  if (array == NULL || size == 0)
        return -1;


    while (left <= right) {
        mid = left + (right - left) / 2;

        printf("Searching in array: ");
        for (i = left; i <= right; i++) {
            printf("%d", array[i]);
            if (i != right)
                printf(", ");
        }
        printf("\n");

        if (array[mid] == value)
	  return (mid);

        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}

