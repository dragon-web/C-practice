#include"common.h"
/*����һ���ַ������ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
��Ŀ������һ���ַ������ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����*/
//�ո��Ascll��ֵ��32
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
		printf("��ĸ�ĸ�����%d\n", num1);
		printf("���ֵĸ�����%d\n", num3); 
		printf("�ո�ĸ�����%d\n",num2);
		printf("�����ַ��ĸ�����%d\n",num4);

}
