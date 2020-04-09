#define _CRT_SECURE_NO_WARNINGS 

#include<iostream>
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
			for (size_t j = 0; j < Range; ++j)
			{
				if (dp[rand() % Range] == 0)
				{
					j = j + 1;
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
	cout << count << endl;
	system("pause");
	return 0;
}