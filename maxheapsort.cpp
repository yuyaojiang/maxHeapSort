#include "maxheapsort.h"
#define NULL (void*)0

/*返回父节点*/
int parent(int iNode)
{
	return iNode>>1;
}

/*返回左孩子*/
int leftChild(int iNode)
{
	return iNode<<1;
}

/*返回右孩子*/
int rightChild(int iNode)
{
	return (iNode<<1) + 1;
}

/*以iNode为根节点的子树满足最大堆特性*/
void  heapMax(int *p, int iNode, int heapSize)
{
	if (p == NULL)
		return;
	int iLeft = leftChild(iNode);
	int iRight = rightChild(iNode);
	int largest;
	
	if (iLeft <= heapSize && *(p + iLeft - 1) > *(p + iNode - 1))
		largest = iLeft;
	else
		largest = iNode;
	if (iRight <= heapSize && *(p + iRight - 1) > *(p + largest - 1))
		largest = iRight;
	if (largest != iNode)
	{
		int iTemp = *(p + iNode - 1);
		*(p + iNode - 1) = *(p + largest - 1);
		*(p + largest - 1) = iTemp;
		heapMax(p, largest, heapSize);
	}
}

/*建立最大堆二叉树*/
void buildHeapMax(int *p, int iLength)
{
	if (p == NULL)
		return;
	int heapSize = iLength;
	
	for (int index = iLength/2; index > 0;index--)
	{
		heapMax(p, index, heapSize);
	}
}

/*堆排序*/
void maxHeapSort(int *p, int iLength)
{
	if (p == NULL)
		return;
	int iHeapSize = iLength;
	int iTemp;
	
	buildHeapMax(p, iLength);
	for (int index = iLength; index >=2; index--)
	{
		iTemp = *p;
		*p = *(p + index - 1);
		*(p + index - 1) = iTemp;
		iHeapSize--;
		heapMax(p, 1, iHeapSize);
	}	
}

int heapMaximum(int *p)
{
	if (p == NULL)
		return -1;
	return *p;
}




