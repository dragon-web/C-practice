#include"common.h"

/*int totalOneBinary(int a);
int totalOneBinary(int a)
{
	int count = 0;
	while (a != 0)
	{
		if ((a & 1) == 1)
		{
			count++;
		}
		a = a >> 1;
	}
	return count;
}

int main()
{
	int a = 1;
	int ret = totalOneBinary(a);
	printf("%d \n", ret);
	system("pause");
	return 0;
}//��μ���һ�������ڴ��ж����ƴ洢�Ķ�������1�Ĵ���
	char a = 128;
	printf("%d\n", a);
*/
int Add(int x, int y);
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	//int arr[10] = { 0 };
	//int(*p)[10] = &arr;
	//����ָ���Ӧ��
	int(*p)(int, int) = &Add;
	printf("%d  \n", (*p)(2, 6));
	printf("%d  \n", p(2, 6));

	system("pause");
	return 0;
}