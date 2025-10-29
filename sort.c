#include <cs3050.h>
void compareandswap(void *array, int i, size_t size, int (*CompareFunc)(const void *, const void*))
{
	if(i!=0 && CompareFunc(array+i*size,array+((i-1)/2)*size)<0) //if the item being looked at isn't the root and isn't in the right place...
		{
			Swap(array+i*size,array+((i-1)/2)*size, size); //swap with the parent node. 
			compareandswap(array, (i-1)/2, size, CompareFunc); //check new location
		}
}

void heapsort(void *array, //array to be sorted
				size_t nitems, //number of array items
				size_t size, //size of each array item
				int (*CompareFunc)(const void *, const void*)) //compare function
{
	while(nitems>0)
	{
		for(int i=0;i<nitems;i++) //for each item in the list...
		{
		compareandswap(array, i, size, CompareFunc); //compare and swap if necessary
		}
		Swap(array,array+(nitems-1)*size, size); //places front at back of list
		nitems--; //decreases the number of unsorted nodes by 1
	}
}
