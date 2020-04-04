#include"common.h"

//算法设计思想： 重新申请一个数组，这个数组的长度=原来数组长度+新插入的n。

int* ConnectTwoArr(int* arr1, int len1, int* arr2, int len2)
{
	int* q = (int*)malloc(sizeof(int)*(len1 + len2));
	for (int i = 0; i < len2; ++i)
	{
		q[i] = arr2[i];
	}
	for (int j = 0; j < len1; ++j)
	{
		q[len2 + j] = arr1[j];
	}
	return q;
}
int main()
{
	int num;
	int arr1[] = { 1,2,3,5 };
	int length = sizeof(arr1) / sizeof(arr1[0]);
	printf("请输入你要输入的整数个数\n");
	scanf("%d", &num);
	int* p = (int*)malloc(sizeof(int)*num);
	for (int i = 0; i < num; ++i)
	{
		printf("输入第%d个数", i + 1);
		scanf("%d", &p[i]);
	}
	int * res = ConnectTwoArr(arr1,length,p,num);
	for (int k = 0; k < length + num; ++k)
	{
		printf("%d ", res[k]);
	}
	system("pause");
	return 0;
}