#include<stdio.h>

bool isPalin(char*);
int strlen(char*);

int main()
{
	char str[1000];
	char* pStr = str;
	scanf_s("%s", str,1000);
	if (isPalin(pStr) and strlen(pStr) > 1)
	{
		printf("Palindrome");
	}
	else {
		printf("Not Palindrome");
	}
	
	return 0;
}

bool isPalin(char* pStr)
{
	int n = strlen(pStr);
	int i = 0;
	while (n-i > 0) // abctcba - abccba
	{
		if (*(pStr+i) == *(pStr+n-1))
		{
			i++;
			n--;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int strlen(char* pStr)
{
	int i = 0;
	while (*(pStr+i) != '\0')
	{
		i++;
	}
	return i;
}