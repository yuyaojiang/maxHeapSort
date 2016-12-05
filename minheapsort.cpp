
#include "minheapsort.h"
#include "maxheapsort.h"

void  heapMin(int *p, int iNode, int heapSize)
{
	int iLeft = leftChild(iNode);
	int iRight = rightChild(iNode);
	int largest;
	
	if (iLeft <= heapSize && *(p + iLeft - 1) < *(p + iNode - 1))
		largest = iLeft;
	else
		largest = iNode;
	if (iRight <= heapSize && *(p + iRight - 1) < *(p + largest - 1))
		largest = iRight;
	if (largest != iNode)
	{
		int iTemp = *(p + iNode - 1);
		*(p + iNode - 1) = *(p + largest - 1);
		*(p + largest - 1) = iTemp;
		heapMin(p, largest, heapSize);
	}
}

void buildHeapMin(int *p, int iLength)
{
	int heapSize = iLength;
	
	for (int index = iLength/2; index > 0;index--)
	{
		heapMin(p, index, heapSize);
	}
}

void minHeapSort(int *p, int iLength)
{
	int iHeapSize = iLength;
	int iTemp;
	
	buildHeapMin(p, iLength);
	for (int index = iLength; index >=2; index--)
	{
		iTemp = *p;
		*p = *(p + index - 1);
		*(p + index - 1) = iTemp;
		iHeapSize--;
		heapMin(p, 1, iHeapSize);
	}
}


