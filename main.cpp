#include <iostream>
#include "maxheapsort.h"
#include "minheapsort.h"

using namespace std;

int main(int argc, char **argv)
{
	int iArray[14] = {4,6,8,9,2,11,34,65,93,24,45,32,36,78};
	int iLength = sizeof(iArray)/sizeof(int);
	//cout<<iLength<<endl;
	maxHeapSort(iArray, iLength);
	for (int i = 0; i <sizeof(iArray)/sizeof(int); i++)
	{
		cout<<iArray[i]<<"   ";
	}
	cout<<endl;
	minHeapSort(iArray, iLength);
	for (int i = 0; i <sizeof(iArray)/sizeof(int); i++)
	{
		cout<<iArray[i]<<"   ";
	}
	cout<<endl;
	return 0;
}
