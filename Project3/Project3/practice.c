#include"common.h"

/*int JudgeNum(int x);

int main()
{
	int num;
	scanf("%d", &num);
	if (JudgeNum(num))
	{
		printf("�������������");
	}
	else
		printf("�����������");

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
//���n��쳲�������

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
	printf("��%d��쳲���������%d ",num,ret);
	system("pause");
	return 0;
}
*/
//쳲��������еķǵݹ���ʽ
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
	printf("�����%d", ret);
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
			printf("���Ӵ�\n");
		else
			printf("�����Ӵ�\n");
		system("pause");
	}
*/
/*����� �㷨��һ������p����magazine��ÿ���ַ����ֵĴ�����
Ȼ�����ransomNote����ĳһ���ַ���p��Ϊ0������false,���򽫳��ִ�����1��*/

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
}//�д��о�
*/
//�жϻ�����
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
/*
int func(int a)
{
	int b;
	switch (a)
	{
	case 1: b = 30;
	case 2: b = 20;
	case 3: b = 16;
	default: b = 0;
	}
	return b;
}

int main()
{
	printf("%d ", func(1));
	system("pause");
	return 0;
}
*/
/*int main()
{
	int b[2][3] = { 0,1,2,3,4,5 };
	int j = 1;
	int i = 2;
	b[i][j];
	*(b[i] + j);
	*(*b + i) + j;
	(*(b + i))[j];




	system("pause");
	return 0;
}
*/

/*int main()
{
	int n = 2;
	n += n -= n * n;
	printf("%d \n", n);
	*/
		/*char *p = "abcdefgh", *r;
		long *q;
		q = (long*)p;
		q++;
		r = (char*)q;
		printf("%s\n", r);
		
	char str[] = "ABCD", *p = str;
	printf("%d\n", *(p + 4));*/

	/*printf("%x", 256);
	char s[] = "abcdefgh", *p = s;
	p += 3;
	printf("%d\n", strlen
	(strcpy(p, "ABCD")));
	short i = 65537;
	printf("%d\n", i);

	int a[] = { 2, 4, 6, 8, 10 }, *p, **k;
	p = a;
	k = &p;
	printf(" % d", *(p++));
	printf(" % d\n", **k);
	system("pause");
	return 0;
}*/
/*����һ����������Сд��ĸ�Ϳո� ' ' ���ַ��� s�����������һ�����ʵĳ��ȡ�

����ַ����������ҹ�����ʾ����ô���һ�����ʾ��������ֵĵ��ʡ�

������������һ�����ʣ��뷵�� 0 ��

˵����һ��������ָ������ĸ��ɡ��������κοո�� ������ַ�����

*/
/*
int lengthOfLastWord(char * s) {
	if (s == NULL || *s == ' ')
		return 0;
	int length = strlen(s);
	for (int i = length - 1; i > 0; --i)
	{
		if (s[i] == ' ')
			return length - i - 1;
	}
	return length;
}
int main()
{
	char s[] = "a";
	int ret = lengthOfLastWord(s);
	printf("%d ", ret);
	system("pause");
	return 0;
}*/
/*�������������������� nums1 �� nums2���� nums2 �ϲ��� nums1 �У�ʹ�� num1 ��Ϊһ���������顣
˵��:
	��ʼ�� nums1 �� nums2 ��Ԫ�������ֱ�Ϊ m �� n��
	����Լ��� nums1 ���㹻�Ŀռ䣨�ռ��С���ڻ���� m + n�������� nums2 �е�Ԫ�ء�
����:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

���: [1,2,2,3,5,6]
*/


/*void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	int i = 0;
	int j = 0;
	while (i<m && j<n)
	{
		if (nums1[i] < nums2[j])
			i++;
		else
		{
			int temp = i;
			for (int z = m - 1; z >= i; z--)
			{
				nums1[z + 1] = nums1[z];
			}
			nums2[j] = nums1[temp];
			j++;
		}
	}
	while(j <= n-1)
	{
		nums1[i + j + 1] = nums2[j];
		j++;
	}
}
int main()
{
	int arr1[] = { 1,3,80 };
	int arr2[] = { 2,8,9};
	merge(arr1, 3, 3, arr2, 3, 3);
	system("pause");
	return 0;
}
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
	for(int i=0;i<n;i++){
int j=m-1;
for(;j>=0;j--){
if(nums2[i]<nums1[j]){
nums1[j+1]=nums1[j];
}else{
				break;
			}
}
nums1[j+1]=nums2[i];
m++;
}
}
*/

/*bool containsDuplicate(int* nums, int numsSize) {
	int count = 0;
	int i = 0;
	while (i < numsSize)
	{
		for (int j = i + 1; j < numsSize; j++)
		{
			if (nums[i] == nums[j])
				count++;
		}
		i++;
	}
	if (count != 0)
		return true;
	return false;

}

int main()
{
	int arr[] = { 1,5,9,3,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d ", containsDuplicate(arr,sz));


	system("pause");
	return 0;
}
*/
bool isLongPressedName(char * name, char * typed) {
	char* p1 = name;
	char* p2 = typed;
	while (*p1 != '\0')
	{
		if (*p1 == *p2)
		{
			p1++;
			p2++;
		}
		else
		{
			if (*p2 == '\0')
			return false;
			p2++;
			if (*p2 == '\0')
				return false;
		}
	}
	return true;
}

int main()
{
	char name[] = "pyplrz";
	char typed[] = "ppyypllr";
	printf("%d \n", isLongPressedName(name, typed));
	system("pause");
	return 0;
}