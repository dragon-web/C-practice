#include"common.h"

/*int JudgeNum(int x);

int main()
{
	int num;
	scanf("%d", &num);
	if (JudgeNum(num))
	{
		printf("这个数不是素数");
	}
	else
		printf("这个数是素数");

	system("pause");
	return 0;
}
int JudgeNum(int x)
{
	int count = 0;
	for (int i = 1; i <= x; ++i)
	{
		if (x % i == 0)
		count++;
	}
	if (count <= 2)
		return 0;
	else
		return 1;
}*/


/*int binary_search(int x,int left,int right,int sz)


int main()
{
	binary_search()

	system("pause");
	return 0;
}
*/


/*void print_table(int num)
{
	if (num > 9)
	{
		print_table(num / 10);
	}
	printf("%d ", num%10);
}
int main()
{
	int num;
	scanf("%d", &num);
	print_table(num);

	system("pause");
	return 0;
}
*/
//求第n个斐波拉契数

/*
int fib(int x)
{
	if (x <= 2)
		return 1;
	return fib(x - 1) + fib(x - 2);
}

int main()
{
	int num;
	int ret;
	scanf("%d", &num);
	ret = fib(num);
	printf("第%d个斐波拉契数是%d ",num,ret);
	system("pause");
	return 0;
}
*/
//斐波拉契数列的非递归形式
/*int fib(int x)
{
	int count = 1;
	int a = 1, b = 1;
	int temp;
	int ret = 1;
	if(x <= 2)
	return ret;
	while (count+2 <= x)
	{
		temp = b;
		b = a + b;
		a = temp;
		count++;
	}
	return b;
}
int main()
{
	int num;
	int ret;
	scanf("%d", &num);
	ret = fib(num);
	printf("结果是%d", ret);
	system("pause");
	return 0;
}*/

char * toLowerCase(char * str) {
	char* p = str;
	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
			p = p + 1;
		else if (*p >= 'A'&&*p <= 'Z')
		{
			*p += 32;
			p = p + 1;
		}
		else
			p = p + 1;
	}
	return str;
}
int main()
{
	char arr[] = "Hello";
	toLowerCase(arr);
	for (int i = 0; i < sizeof(arr) /sizeof(arr[0]); i++)
	{
		printf("%c ", arr[i]);
	}
	system("pause");
	return 0;
}