#include"heap.h"

int main()
{
		int ar[] = { 27,15,19,89,85,1,4,85,6,8,9,12};
		int n = sizeof(ar) / sizeof(int);
		HeapSort(ar, 0, n);
		for (int i = 0; i < n; ++i)
		{
			printf("%d ", ar[i]);
		}


		/*HeapShow(&hp);
		HeapRemove(&hp);
		HeapShow(&hp);
		HeapRemove(&hp);
		HeapShow(&hp);
		heapdestroy(&hp);
		Heap hp;
		int i;
		HeapInit(&hp, n);
		for (i = 0; i < n; ++i)
		{
			HeapInsert(&hp, ar[i]);
		}*/
	system("pause");
	return 0;
}