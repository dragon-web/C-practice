#pragma once
#include"common.h"
void Swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void BubbleSort(int *arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - i; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				Swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}



