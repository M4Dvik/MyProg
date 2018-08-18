#include <iostream>
using namespace std;
int main()
{
	unsigned char ch;
	ch = 128;
	while(ch) {
		cout << ch << "\n";
		ch++;
	}
	return 0;
}