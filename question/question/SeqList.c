#include"common.h"

//�㷨���˼�룺 ��������һ�����飬�������ĳ���=ԭ�����鳤��+�²����n��

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
	printf("��������Ҫ�������������\n");
	scanf("%d", &num);
	int* p = (int*)malloc(sizeof(int)*num);
	for (int i = 0; i < num; ++i)
	{
		printf("�����%d����", i + 1);
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