#ifndef MAXHEAPSORT_H
#define MAXHEAPSORT_H

/*函数声明*/
int parent(int iNode);

int leftChild(int iNode);

int rightChild(int iNode);

void heapMax(int *p, int iNode);

void buildHeapMax(int *p, int iLength);

void maxHeapSort(int *p, int iLength);

int heapMaximum(int *p);

#endif
