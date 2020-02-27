#include"common.h"
/*
给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。

你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。

示例:

给定 nums = [2, 7, 11, 15], target = 9

因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
*/
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int i = 0;
	for (i = 0; i < numsSize-1; ++i)
	{
		int j = 0;
		for (j = i+1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target )
			{
				returnSize[0] = i;
				returnSize[1] = j;
				return returnSize;
			}
		}
	}
	return NULL;
}//编译器上面能执行的代码

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int* res = (int *)malloc(sizeof(int) * 2);
	*returnSize = 0;
	for (int i = 0; i < numsSize - 1; i++) {
		for (int j = i + 1; j < numsSize; j++) {
			if (nums[i] + nums[j] == target) {
				res[0] = i;
				res[1] = j;
				*returnSize = 2;
				return res;
			}
		}
	}
	return res;
}//力扣上面通过的代码
int main()
{
	int arr[] = { 2,7,5,94 };
	int * reSize  = (int*)malloc(sizeof(int) * 2);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int *p = twoSum(arr, sz, 9, reSize);
	for(int i = 0; i < 2;++i)
	{
		printf("%d", *p);
		p++;
	}
	system("pause");
	return 0;
}
