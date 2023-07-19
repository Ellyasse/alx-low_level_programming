#include "function_pointers.h"
/**
 * int_index - this functions find the index of a int
(* a blank line
 *@array: the array to find the index
 *@size: the size of the array
 *@cmp: this a function pointer.
* Description: this function find the index of a int)?
(* section header: the header of this function is function_pointers.h)*
* Return: this is a void function no return
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}

