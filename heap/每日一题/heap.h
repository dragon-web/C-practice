#pragma once

#include"common.h"

void Swap(datatype* a, datatype* b)
{
	datatype temp = *a;
	*a = *b;
	*b = temp;
}

typedef struct Heap
{
	datatype *heap;
	size_t    capacity;
	size_t    size;
}Heap;

bool HeapEmpty(Heap *php)
{
	return php->size == 0;
}
bool HeapFull(Heap *php)
{
	return php->size >= php->capacity;
}

void HeapInit(Heap *php, int sz);
void heapdestroy(Heap *php);
bool HeapInsert(Heap *php, datatype x);
void HeapShow(Heap *php);
datatype HeapTop(Heap *php);
bool HeapRemove(Heap *php);

void _AdjustUp(Heap *php, int start);
void _AdjustDown(Heap *php, int start);

void HeapInit(Heap *php, int sz)
{
	php->capacity = sz;
	php->size = 0;
	php->heap = (datatype*)malloc(sizeof(datatype) * sz);
}

void heapdestroy(Heap *php)
{
	php->capacity = php->size = 0;
	free(php->heap);
	php->heap = NULL;
}

bool HeapInsert(Heap *php, datatype x)
{
	if (HeapFull(php))
		return false;

	php->heap[php->size] = x;
	_AdjustUp(php, php->size);
	php->size++;
	return true;
}

void _AdjustUp(Heap *php, int start)
{
	int j = start;
	int i = (j - 1) / 2;//父节点
	while (j > 0)//j没到根节点，j是当前节点
	{
		if (php->heap[j] < php->heap[i])
		{
			Swap(&(php->heap[j]),&(php->heap[i]));
			j = i;
			i = (j - 1) / 2;
		}
		else
			break;
	}
}
void HeapShow(Heap *php)
{
	size_t i;
	for (i = 0; i < php->size; ++i)
	{
		printf("%d ", php->heap[i]);
	}
	printf("\n");
}
datatype HeapTop(Heap *php)
{
	if (!HeapEmpty(php))
	{
		return php->heap[0];
	}
	return -1;
}
bool HeapRemove(Heap *php)
{
	if (HeapEmpty(php))
		return false;
	php->heap[0] = php->heap[php->size - 1];
	php->size--;
	_AdjustDown(php, 0);
	return true;
}
void _AdjustDown(Heap *php, int start)
{
	size_t i = start;
	size_t j = 2 * i + 1;
	while (j < php->size)
	{
		if (j + 1 < php->size && php->heap[j] > php->heap[j + 1])//找到最小的
			j++;
		if (php->heap[j] < php->heap[i]) //把小的换上去
		{
			Swap(&(php->heap[j]), &(php->heap[i]));
			i = j;
			j = 2 * i + 1;
		}
		else
			break;
	}
}

//堆排


/*void HeapSort(Heap* p,int len)
{
	_HeapAdjustDown(p, len);//构建出最小堆
	int i = 0;
	while (i < len)
	{
		if (p[2*i+1] > p[2*i+2])
		{
			
		}
		++i;
	}

}
void _HeapAdjustDown(Heap *ar,int len)
{
	int i = 0;
	while (i <len)
	{
		_AdjustDown(ar, i);
		i++;
	}
}
*/
void _HeapAdjustDown(int *ar, int left, int right, int start)
{
	int n = right - left + 1;
	int i = start;
	int j = 2 * i + 1 + left; //+left
	while (j < n)
	{
		if (j + 1 < n && ar[j] < ar[j + 1])
			j++;
		if (ar[i] < ar[j])
		{
			Swap(&ar[i], &ar[j]);
			i = j;
			j = 2 * i + 1;
		}
		else
			break;
	}
}
void HeapSort(int * ar,int left, int right)
{
	int n = right - left- 1;
	int cur = n / 2 - 1 + left; //+left
	while (cur)
	{
		_HeapAdjustDown(ar, left, right, cur);
		cur--;
	}
	int end = right;
	while (end > left)
	{
		Swap(&ar[left], &ar[end]);
		end--;
		_HeapAdjustDown(ar, left, end, 0);
	}
}