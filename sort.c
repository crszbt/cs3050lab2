#include <cs3050.h>
void compareandswap(void *array, int i, size_t size)
{
	if(CompareFunc(array[i],array[i/2])>0 && i!=1)
		{
			Swap(array[i], array[i/2], size);
			compareandswap(*array, i/2, size);
		}
}

void heapsort(void *array, //array to be sorted
				size_t nitems, //number of array items
				size_t size, //size of each array item
				int (*CompareFunc)(const void *, const void*)) //compare function
{
	for(int i=1,i=<nitems,i++)
	{
		compareandswap(*array, i, size);
	}
}
