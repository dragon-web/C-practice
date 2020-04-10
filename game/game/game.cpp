#define _CRT_SECURE_NO_WARNINGS 

/*#include<iostream>
#include<vector>
#include<ctime>
using namespace std;

size_t JudgeRes(size_t Seconds, size_t Num, size_t Range, size_t Blood)
{
	if (Seconds*Range >= Num * Blood)
	{
		return 0;
	}
	else {
		vector<size_t> dp(Num, Blood);
		
		while (Seconds)
		{
			for (int j = 0; j < Range; ++j)
			{

				if (dp[rand() % Range] == 0)
				{
					j = j - 1;
					continue;
				}
				else
				{
					dp[rand() % Range]--;
				}
			}
			Seconds--;
		}
		size_t count = 0;
		vector<size_t>::iterator it = dp.begin();
		while(it != dp.end())
		{
			if (*it != 0)
			{
				count++;
			}
			it++;
		}
		return count;
	}
}

int main()
{
	size_t Seconds, Num, Range, Blood;
	cin >> Seconds >> Num >> Blood >> Range;
	size_t count = JudgeRes(Seconds, Num, Range, Blood);
	cout << Num - count << endl;
	system("pause");
	return 0;
}

// N���������  L�����ָ���
#include<iostream>
/*using namespace std;
int main() {
	int N, L;
	cin >> N >> L;
	for (int i = L; i <= 100; i++) {
		if ((2 * N + i - i * i) % (2 * i) == 0) {
			int start = (2 * N + i - i * i) / (2 * i);
			for (int j = 0; j < i - 1; j++) {
				cout << start + j << " ";
			}
			cout << start + i - 1;
			system("pause");
			return 0;
		}
	}
	system("pause");
	cout << "No" << endl;
}*/
/*����һ��������N�ͳ���L���ҳ�һ�γ��ȴ��ڵ���L�������Ǹ����������ǵĺ�ǡ��ΪN���𰸿����ж������������Ҫ�ҳ�������С���Ǹ���
���� N = 18 L = 2��
5 + 6 + 7 = 18
3 + 4 + 5 + 6 = 18
��������Ҫ��ģ���������������̵� 5 6 7
*/
#include<iostream>
#include<vector>
using namespace std;

vector<int> JudgeNum(int N, int L)
{
	vector<int> temp;
	vector<int> res;
	res.resize(100);//��res���㹻��ռ���Ϊ��ʼ�ռ�
	for (int i = L; i < 100; i++)
	{
		if ((2 * N + i - i * i) % (2 * i) == 0)
		{
			int a1 = (2 * N + i - i * i) / (2 * i);//�ҵ�����
			if (a1 < 0)
			{
				return res;
			}
			int sum = 0;
			for (int j = a1;sum <= N;++j)
			{
				temp.push_back(a1);
				a1++;
				sum += a1;
			}
			res = temp.size() > res.size() ? res : temp;
		}
	}
	return res;
}
int main()
{
	int N, L;//N����ͣ�L������Ҫ���ڳ���

	while (cin >> N >> L)
	{
		vector<int> res = JudgeNum(N, L);
		if (res.size() != 100)
		{
			vector<int>::iterator it = res.begin();
			while (it != res.end())
			{
				cout << *it<<" ";
				it++;
			}
			cout << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	system("pause");
	return 0;
}
