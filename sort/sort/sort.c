#include"common.h"

int main()
{

	int arr[] = { 1,8,9,6,7 };
	int n = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < n; ++i)
	{
		printf("%d ",arr[i]);
	}

	system("pause");
	return 0;
}