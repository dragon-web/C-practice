#include"common.h"
/*输入一个字符串，分别统计出其中英文字母、空格、数字和其它字符的个数。
题目：输入一个字符串，分别统计出其中英文字母、空格、数字和其它字符的个数。*/
//空格的Ascll码值是32
void Total(char ar[],int sz);

int main()
{
	char arr[] = "ad45 ##";
	int sz = sizeof(arr) / sizeof(arr[0]);
	Total(arr,sz);
	system("pause");
	return 0;
}

void Total(char ar[],int sz)
{
	int num1 = 0, num2 = 0, num3 = 0,num4 = 0;
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		if (('A' <= ar[i]&&ar[i] <= 'Z' )||( 'a' <= ar[i]&& ar[i] <= 'z'))
		{
			num1++;
		}
		else if (ar[i] == ' ')
		{
			num2++;
		}
		else if ('0' <=  ar[i]&&ar[i] <= '9')
		{
			num3++;
		}
		else
		{
			num4++;
		}
	}
		printf("字母的个数是%d\n", num1);
		printf("数字的个数是%d\n", num3); 
		printf("空格的个数是%d\n",num2);
		printf("其他字符的个数是%d\n",num4);

}
