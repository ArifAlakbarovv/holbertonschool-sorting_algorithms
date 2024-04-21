#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

void selection_sort(int *array, size_t size)
{
size_t i, n;
int t, *arr, z;
arr = array;
for (i = 0; i < size; i++)
{
t = arr[i];
for (n = 0; n < size; n++)
{
if (t < arr[n])
{
z = arr[n];
arr[n] = t;
t = z; 
}
}
arr[i] = t;
}
return ;
}
