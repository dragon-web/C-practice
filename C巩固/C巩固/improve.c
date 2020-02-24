#include"common.h"

int totalOneBinary(int a);
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
	int a = -1;
	int ret = totalOneBinary(a);
	printf("%d \n", ret);
	system("pause");
	return 0;
}