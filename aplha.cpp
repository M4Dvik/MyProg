#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	char str[80];
	int i;
	cout << "Что такое?: ";
	fgets(str, 80, stdin);
	for (i = strlen(str)-1; i >=0; i--)
	cout << str[i];
	return 0;
}