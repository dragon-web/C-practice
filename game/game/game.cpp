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

// N是求和数据  L是数字个数
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
/*给出一个正整数N和长度L，找出一段长度大于等于L的连续非负整数，他们的和恰好为N。答案可能有多个，我我们需要找出长度最小的那个。
例如 N = 18 L = 2：
5 + 6 + 7 = 18
3 + 4 + 5 + 6 = 18
都是满足要求的，但是我们输出更短的 5 6 7
*/
#include<iostream>
#include<vector>
using namespace std;

vector<int> JudgeNum(int N, int L)
{
	vector<int> temp;
	vector<int> res;
	res.resize(100);//给res个足够大空间作为初始空间
	for (int i = L; i < 100; i++)
	{
		if ((2 * N + i - i * i) % (2 * i) == 0)
		{
			int a1 = (2 * N + i - i * i) / (2 * i);//找到首项
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
	int N, L;//N代表和，L代表需要大于长度

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
