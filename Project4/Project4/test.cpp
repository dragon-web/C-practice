#include <iostream>
#include <vector>
#include <string>

using namespace std;
/*
vector<string> Solution(const string &str,char s)
{
	size_t begin = 0;
	size_t end = 0;
	vector<string> res;
	bool flag = 0;
	// ,,,,
	for (size_t i = 0; i < str.size(); ++i)
	{
		if (flag == 0 && str[i] != s)
		{
			begin = i;
			flag = 1;  //找到第一个非s的位置 
		}
		if (str[i] == s && flag == 1)
		{
			end = i;
				string temp = str.substr(begin, end - begin);
				res.push_back(temp);
				flag = 0;
			begin = i;
		}
	}
	string temp1 = str.substr(begin, end - begin);
	if(temp1.size() > 0)
	res.push_back(temp1);
	return res;
}
*/

vector<string> Solution1(const string& str, string& s)
{
	size_t begin = 0;
	size_t end = 0;
	vector<string> res;
	bool flag = 0;
	size_t distance = 1;
	// ,,,,
	for (size_t i = 0; i <= str.size() - s.size(); i += distance)
	{
		string temp = str.substr(i, s.size());
		if (flag == 0 && temp != s)
		{
			begin = i;
			flag = 1;  //找到第一个非s的位置 
			distance = 1;
		}
		if (temp == s && flag == 1)
		{	
			end = i;
			string temp2 = str.substr(begin, end - begin);
			//cout << "begin = " << begin << "end = " << end << endl;
			res.push_back(temp2);
			flag = 0;
			distance = s.size();
		}
	}
	if (flag == 1)
	{
		end = str.size();
		string temp3 = str.substr(begin, end - begin);
		res.push_back(temp3);
	}
	return res;
}


int main()
{

	string str = ",,,,,,,";
	string s = ",,";
	vector<string> it = Solution1(str, s);
	for (size_t i = 0; i < it.size(); ++i)
	{
		cout << it[i] << " ";
	}
	return 0;
}