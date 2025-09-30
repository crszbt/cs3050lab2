#include <cs3050.h>
void compareandswap(void *array, int i, size_t size)
{
	if(CompareFunc(array[i],array[i/2])>0 && i!=1) //if the item being looked at isn't the root and isn't in the right place...
		{
			Swap(array[i], array[i/2], size); //swap with the parent node
			compareandswap(*array, i/2, size); //check new location
		}
}

void heapsort(void *array, //array to be sorted
				size_t nitems, //number of array items
				size_t size, //size of each array item
				int (*CompareFunc)(const void *, const void*)) //compare function
{
	for(int i=1,i=<nitems,i++) //for each item in the list...
	{
		compareandswap(*array, i, size); //compare and swap if necessary
	}
}
