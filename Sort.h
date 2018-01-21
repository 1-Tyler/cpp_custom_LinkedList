#pragma once
#include <vector>

/*
*Sort class that contains various sorting algorithms 
*/
template<class T>
class Sort
{
private:
	/*
	*QuickSort helper to partition the vector
	*/
	int partition(std::vector<int>& A, int p, int q);
public:
	Sort();
	~Sort();

	/*
	*QuickSort algorithm
	*/
	void quickSort(std::vector<T>& A, int p, int q);
};
