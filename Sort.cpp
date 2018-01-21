#include "stdafx.h"
#include "Sort.h"

template<class T>
Sort<T>::Sort()
{
}

template<class T>
Sort<T>::~Sort()
{
}

template<class T>
void Sort<T>::quickSort(std::vector<T>& A, int p, int q)
{
	int r;
	if (p<q)
	{
		r = partition(A, p, q);
		quickSort(A, p, r);
		quickSort(A, r + 1, q);
	}
}

template<class T>
int Sort<T>::partition(std::vector<int>& A, int p, int q)
{
	int x = A[p];
	int i = p;
	int j;

	for (j = p + 1; j<q; j++)
	{
		if (A[j] <= x)
		{
			i = i + 1;
			swap(A[i], A[j]);
		}
	}

	swap(A[i], A[p]);
	return i;
}