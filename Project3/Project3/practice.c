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

/*char * toLowerCase(char * str) {
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
*/
/*int main()
{
		int x = 10;
		int y = 10;
		x = y = ++y;
		printf("%d %d", x, y);
		system("pause");
		return 0;
}*/


/*void rotate(int* nums, int numsSize, int k) {

	if (k > numsSize)
	{
		k = k % numsSize;
		int* num1 = (int*)malloc(sizeof(int)*numsSize);
		int i = 0;
		int j = 0;
		for (i = 0; i < k; ++i)
		{
			num1[i] = nums[numsSize - k + i];
		}
		for (j = 0; j < numsSize - k; j++)
		{
			num1[j + k] = nums[j];
		}
		for (i = 0; i < numsSize; ++i)
		{
			nums[i] = num1[i];
		}
	}
	else
	{
		int* num1 = (int*)malloc(sizeof(int)*numsSize);
		int i = 0;
		int j = 0;
		for (i = 0; i < k; ++i)
		{
			num1[i] = nums[numsSize - k + i];
		}
		for (j = 0; j < numsSize - k; j++)
		{
			num1[j + k] = nums[j];
		}
		for (i = 0; i < numsSize; ++i)
		{
			nums[i] = num1[i];
		}
	}
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	int sz = sizeof(arr) / sizeof(arr[0]);
	rotate(arr, sz, 3);
	system("pause");
	return 0;
}*/

/*int removeElement(int* nums, int numsSize, int val) {

	for (int i = 0; i < numsSize; ++i)
	{
		if (nums[i] == val)
		{
			for (int j = i; j < numsSize - i; ++j)
			{
				nums[j] = nums[j + 1];
			}
			numsSize--;
			i--;
		}
	}
	return numsSize;
}

int main()
{
	int arr[] = {1,2,5,5,6,9,7};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = removeElement(arr, sz, 5);
	printf("%d \n", ret);
	system("pause");
	return 0;
}*/

/*int searchInsert(int* nums, int numsSize, int target) {
	int i = 0;
	int pos = 0;
	for (i = 0; i < numsSize; ++i)
	{
		if (nums[i] == target)
			return i;
		else if (nums[i] < target)
		{
			pos++;
		}
	}
	return pos;
}


int main()
{
	int arr[] = { 1,2,5,6,9,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = searchInsert(arr, sz, 5);
	printf("%d ", ret);
	system("pause");
	return 0;
}
*/

/*int main()
{
		int i = 0, a = 0;
		while (i < 20)
		{
			for (;;)
			{
				if ((i % 10) == 0) break;
				else i--;
			} 
			i+= 11; a += i;
		}
		printf("%d\n", a);
	system("pause");
	return 0;
}
*/
/*
int find(char *buf, char* sub) 
{
	int len = strlen(buf);
	char *p = (char*)malloc(len * 2 + 1);
	memset(p, 0x00, len * 2 + 1);
	strcpy(p, buf);
	strcat(p, buf);
	if (strstr(p, sub) == NULL)
		return 0;
	else
		return 1;
}

	int main(void) 
	{
		char  buf[] = "abcdefg";
		if (find(buf, "bcdefga") == 1)
			printf("是子串\n");
		else
			printf("不是子串\n");
		system("pause");
	}
*/
/*赎金信 算法用一个数组p保存magazine中每个字符出现的次数，
然后遍历ransomNote，若某一个字符在p中为0，返回false,否则将出现次数减1。*/

/*bool canConstruct(char * ransomNote, char * magazine)
{
	




}


int main()
{
	char str1 = "adcsd";
	char str2 = "akdvwdkc";
	canConstruct(str1, str2);
	system("pause");
	return 0;
}//有待研究
*/
//判断回文数
/*
bool isPalindrome(int x) {
	if (x < 0 || x % 10 == 0)
		return false;
	int count = 1;
	int temp1 = x;
	int temp2 = x;
	while (x / 10)
	{
		count++;
		x = x / 10;
	}
	int temp3 = count;

	while (temp1 % 10 == temp2 / pow(10, count - 1));
	{
		temp1 = temp1 / 10;
		temp2 = temp2 % (int)pow(10, count - 1);
		count--;
		temp3 -= 2;
	}
	if (temp3 > 1)
		return false;
	return true;
	
}
int main()
{
	int num;
	scanf("%d", &num);
	int ret = isPalindrome(num);
	printf("%d ", ret);
	system("pause");
	return 0;
}
*/

int lengthOfLastWord(char * s) {
	if (s == NULL)
		return 0;
	int length = strlen(s);
	for (int i = length - 1; i > 0; --i)
	{
		if (s[i] == ' ')
			return length - i - 1;
	}
	return length - 1;
}
int main()
{
	char s[] = "Hello World as";
	int ret = lengthOfLastWord(s);
	printf("%d ", ret);
	system("pause");
	return 0;
}