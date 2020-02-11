#define _CRT_SECURE_NO_WARNINGS 


#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<assert.h>//╤оят
#include<stdbool.h>
#include<string.h>


char * toLowerCase(char * str) {
	if (str = NULL)
		return NULL;
	else
	{
		char *p = str;
		while (*p != NULL)
		{
			*p += 32;
			p += 1;
		}
		return p;
	}
}
int main()
{

	char arr[] = "HELLO" ;
	char* p = toLowerCase(arr);
	
	system("pause");
	return 0;
}