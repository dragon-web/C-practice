#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

/*
class A
{
public:
	A(int _a = int(), int _b = int())
	{
		a = _a;
		b = _b;
	}
	int GetB()
	{
		return b;
	}
protected:
	int GetA()
	{
		return a;
	}
private:
	int a;
	int b;
};

class Son : public A
{
public:
	Son(int _c = int())
	{
		c = _c;
		int aa = GetB();
	}
protected:
	int getC()
	{
		return c;
	}
private:
	int c;
};

union MyUnion
{
	int a;
	char c;
};



class Test
{
	Test(int a = int(), int b = int())
	{
		m_a = a;
		m_b = b;
	}
	 int GetA(Test a);
	static void Print()
	{
		cout << "Print" << endl;
	}
public:
	int m_a;
	int m_b;
};


int Test::GetA(Test a)
{
	return a.m_a;
}*/

int main()
{
	int b = 3;
	int* const a = &b;
	int c = 0;
	b = 0;
	const int* d = &c;
	d = &b;
	return 0;
}






/*
class Date
{
public:
	void PrintA()
	{
		cout << typeid(this).name() << endl;
		/*cout << _a << endl;
	}
	void Show()
	{
		cout << "Show()" << endl;
	}
private:
	int _a;
};

int main()
{
	Date* p = NULL; 
	//cout << p << endl;
	p->Show();
	p->PrintA(); 
	return 0;
}
*/