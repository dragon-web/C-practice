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
/*给定一个仅包含大小写字母和空格 ' ' 的字符串 s，返回其最后一个单词的长度。

如果字符串从左向右滚动显示，那么最后一个单词就是最后出现的单词。

如果不存在最后一个单词，请返回 0 。

说明：一个单词是指仅由字母组成、不包含任何空格的 最大子字符串。

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
/*给定两个有序整数数组 nums1 和 nums2，将 nums2 合并到 nums1 中，使得 num1 成为一个有序数组。
说明:
	初始化 nums1 和 nums2 的元素数量分别为 m 和 n。
	你可以假设 nums1 有足够的空间（空间大小大于或等于 m + n）来保存 nums2 中的元素。
输入:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

输出: [1,2,2,3,5,6]
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
/*bool isLongPressedName(char * name, char * typed) {
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
*/
//仅仅反转字母
/*char * reverseOnlyLetters(char * S) {
	char* p = S;
	int length = strlen(S) - 1;
	while (*p != S[length])
	{
		char temp;
		if (*p != '-'&&S[length] != '-')
		{
			temp = *p;
			*p = S[length];
			S[length] = temp;
			length--;
			p++;
		}
		else
		{
			if (*p == '-')
			{
				p++;
			}
			else if (S[length] == '-')
			{
				length--;
			}
		}
	}
	return S;
}
int main()
{
	char arr[] = "a - bC - dEf - ghIj";
	char *q = reverseOnlyLetters(arr);
	printf("%s", q);
	system("pause");
	return 0;
}*/
//不是字母的字符不反转
/*char * reverseOnlyLetters(char * S) {
	char* p = S;
	int length = strlen(S)-1;
	while (p <(S+length))
	{
		char temp;
		if (((*p <= 'Z'&&*p >= 'A') || (*p >= 'a'&&*p <='z'))&&((S[length]<= 'Z'&&S[length]>='A')||( S[length] >= 'a'&&S[length] <= 'z')))
		{	temp = *p;
			*p = S[length];
			S[length] = temp;
			length--;
			p++;
		}
		else
		{
			if (*p < 'A'||(*p > 'Z'&&*p<'a')||*p >'z')
			{
				p++;
			}
			else if (S[length] < 'A' || (S[length] > 'Z'&&S[length] < 'a') || S[length] >'z')
			{
				length--;
			}
		}
	}
	return S;
}
int main()
{
	//char arr[] = "a - bC - dEf - ghIj";
	char arr[] = "abcd";
	char *q = reverseOnlyLetters(arr);
	printf("%s", q);
	system("pause");
	return 0;
}
*/

/*char * addBinary(char * a, char * b) {
	int length, length1 = strlen(a), length2 = strlen(b), sum = 0, i = length1 - 1, j = length2 - 1, k, num;
	if (length1 > length2)
		length = length1 + 1;
	else
		length = length2 + 1;
	char *c = (char *)malloc(sizeof(char)*(length + 1));
	c[0] = '0'; c[length] = '\0';
	k = length - 1;
	while (i > -1 || j > -1 || sum)
	{
		num = (i > -1 ? a[i] - '0' : 0) + (j > -1 ? b[j] - '0' : 0) + sum;
		sum = 0;
		if (num > 1)
		{
			sum = 1;
			num -= 2;
		}
		c[k--] = num + '0';
		j--; i--;
	}
	if (c[0] == '0')
	{
		for (i = 0; i < length - 1; i++)
			c[i] = c[i + 1];
		c[length - 1] = '\0';
	}
	return c;
}*/

/*给定两个二进制字符串，返回他们的和（用二进制表示）。

输入为非空字符串且只包含数字 1 和 0。*/

/*char * addBinary(char * a, char * b) {
	int length1 = strlen(a);
	int length2 = strlen(b);
	int length = length1 > length2 ? length1 + 1 : length2 + 1;
	int sum1 = 0;
	int sum2 = 0;
	for (int i = length1-1; i >= 0; --i)
	{
		sum1 += a[i] * pow(a[i], length1 - i -1);
	}
	for (int i = length2 - 1; i >= 0; --i)
	{
		sum1 += b[i]*pow(a[i], length2 - i - 1);
	}
	int sum = sum1 + sum2;
	char* p = (char*)malloc(sizeof(char)*length);
	p = (char*)
	
}
int main()
{
	char arr1 = "10110101";
	char arr2 = "10110101";
	char* p = addBinary(arr1, arr2);
	printf("%s",p);
	system("pause");
	return 0;
}


int cmp(int* a, int* b)
{
	return (*a) > (*b) ? 1 : 0;
}
int thirdMax(int* nums, int numsSize) {
	int cnt = 0;
	qsort(nums, numsSize, sizeof(int), cmp);
	for (int i = 0; i < numsSize - 1; i++)
	{
		if (nums[i + 1] != nums[i])
		{
			nums[++cnt] = nums[i + 1];
		}
	}
	if (cnt >= 2)
	{
		return nums[cnt - 2];
	}
	else
	{
		return nums[cnt];
	}
}
*/


/*给定一个按照升序排列的整数数组 nums，和一个目标值 target。找出给定目标值在数组中的开始位置和结束位置。

你的算法时间复杂度必须是 O(log n) 级别。

如果数组中不存在目标值，返回 [-1, -1]。*/


/*int* searchRange(int* nums, int numsSize, int target, int* returnSize)
{
	int *res = (int *)malloc(sizeof(int) * 2);
	*returnSize = 2;
	res[0] = -1;
	res[1] = -1;

	//二分查找算法必须在n >1 的场景下才能正常运行，否则会出现越界访问
	if (numsSize == 1) {
		if (nums[0] == target) {
			res[0] = 0;
			res[1] = 0;
		}
		return res;
	}

	int left = 0;
	int right = numsSize; //[left, right) 左闭右开的搜索区间

	//寻找左边界
	while (left < right) { //左闭右开的搜索区间，终止条件是left == right，即区间变成[left, left)时，区间已空，所以这里使用小于号
		int mid = left + (right - left) / 2;
		if (nums[mid] == target) {
			right = mid; //继续向左搜索，区间保持左闭右开，mid已被搜索过了，所以right == mid时，mid不会再被搜索，区间依然是左闭右开
		}
		else if (nums[mid] < target) {
			left = mid + 1; //向右搜索，为了保持区间左闭右开，left = mid + 1，可以保证左闭
		}
		else if (nums[mid] > target) {
			right = mid; //向左搜索，right = mid，可以保证右开。
		}
	}
	//二分查找算法运行完成后left中保存的是搜索结果，这里left保存的是左边界，因为左边界是闭合的，
	//而numsSize是越界下标，所以left == numsSize时越界
	if (left == numsSize) {
		res[0] = -1;
		res[1] = -1;
		return res;
	}
	else {
		res[0] = left;
	}

	//寻找右边界
	left = 0;
	right = numsSize;
	while (left < right) {
		int mid = left + (right - left) / 2;
		if (nums[mid] == target) {
			left = mid + 1; //保证新的搜索区间也是左闭的
		}
		else if (nums[mid] < target) {
			left = mid + 1;
		}
		else if (nums[mid] > target) {
			right = mid;
		}
	}
	//二分查找算法运行完成后left中保存的是搜索结果，这里left保存的是右边界，因为右边界是开放的，
	//所以left == numsSize时并不超出区间，left - 1 等于 nusSize时才算超出搜索区间
	if (left - 1 == numsSize) {
		res[0] = -1;
		res[1] = -1;
		return res;
	}
	else {
		res[1] = left - 1;
	}

	if (res[0] > res[1]) {
		res[0] = -1;
		res[1] = -1;
	}

	return res;
}
int main()
{

	int arr[] = { 1,8,6,9,6,8,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int *returnSize;
	int tar = 8;
	searchRange(arr,sz,tar, returnSize);
	system("pause");
	return 0;
}
*/

/*int compress(char* chars, int charsSize) {
	char*p = chars;
	int sum = 1;
	int i = 0;
	while (*p != '\0')
	{
		if (*p == *(p+1))
		{
			sum++;
			char* q = chars+i;
			while (*q != '\0')
			{
				q = q + 1;
			}
			charsSize--;
			i++;
		}
		p++;
	}
	return charsSize;
}


int main()
{
	char arr[] = "abbbbbbbb";
	int sz = strlen(arr);
	int res = compress(arr, sz);
	printf("%d \n", res);
	system("pause");
	return 0;
}
*/
//最短无序子数列：升序排列
/*改良版暴力拆解法
算法思想：算法思想：从左到右循环，记录最大值为 max，若 nums[i] < max, 
则表明位置 i 需要调整, 循环结束，
记录需要调整的最大位置 i 为 high; 同理，从右到左循环，
记录最小值为 min, 若 nums[i] > min, 则表明位置 i 需要调整，
循环结束，记录需要调整的最小位置 i 为 low.
*/

int findUnsortedSubarray(int* nums, int numsSize) {
	int temp1 = 0;
	int temp2 = numsSize-1;
	while (temp1 < numsSize - 1)
	{
		if (nums[temp1] < nums[temp1 + 1])
			temp1++;
		else
			break;
	}
	while (temp2 > 0)
	{
		if (nums[temp2] > nums[temp2 - 1])
			temp2--;
		else
			break;
	}
	if (temp1 == numsSize - 1 && temp2 == 0)
		return 0;
	return temp2 - temp1 + 1;
}
void bubblesort(int* a, int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; ++i)
	{
		for (int j = 0; j < sz - 1 - i; ++j)
		{
			if (a[j] > a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubblesort(arr, sz);
	int res = findUnsortedSubarray(arr, sz);
	printf("%d  ",res);
	/*for (int i = 0; i < sz; ++i)
	{
		printf("%d  ", arr[i]);
	}
	*/
	system("pause");
	return 0;
}


int evalRPN(char ** tokens, int tokensSize) {
    int *stack = malloc(sizeof(int)*tokensSize);
    int top = 0;
      for (int i = 0; i < tokensSize; i++) {
		if (isdigit(tokens[i][0])) {
			stack[top++] = atoi(tokens[i]);
			continue;
		}if (tokens[i][1] && isdigit(tokens[i][1])) {
			stack[top++] = -1 * atoi(tokens[i] + 1);
			continue;
		}
		int op2 = stack[--top];
		int op1 = stack[--top];
		if (tokens[i][0] == '+') {
			stack[top++] = op1 + op2;
		}
		else if (tokens[i][0] == '-') {
			stack[top++] = op1 - op2;
		}
		else if (tokens[i][0] == '*') {
			stack[top++] = op1 * op2;
		}
		else {
			stack[top++] = op1 / op2;
		}
	}

	return stack[0];
}

int* rightSideView(struct TreeNode* root, int* returnSize) {
	*returnSize = 0;
	int *res = malloc(sizeof(int) * 500);
	struct TreeNode *Queue[10000];
	int front, last, rear;

	/* front指向队列头（即出队元素）last指向该层的尾部，rear实时更新尾部 */
	front = rear = 0;

	Queue[root ? rear++ : rear] = root;
	last = rear;

	while (front < rear) {
		struct TreeNode *p = Queue[front++];

		/* 每次一个元素出队时，就将它的儿子添加到下一层的队列中 */
		if (p->left)
			Queue[rear++] = p->left;
		if (p->right)
			Queue[rear++] = p->right;

		/* 当前元素到了该层的尾部，取出我们想要的元素，然后更新last为下一层的尾部 */
		if (front == last) {
			res[(*returnSize)++] = Queue[last - 1]->val;
			last = rear;
		}
	}

	return res;
}
