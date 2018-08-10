#include <iostream>
using namespace std;
void total(int x);
int count,sum;
int main()
{
	cout << "Enter count: ";
	cin >> count;
	total(count);
	cout << "Sum 1 to " << count << ": " << sum << "\n"; 
	return 0;
}
void total(int x) {
	for (int i = 1; i <= count; ++i)
	{
		for (int f = 0; f < 10; ++f)
		{
			cout << ".";
		}
		sum = sum + i;
		cout << "Промежуточное значение:" << sum << "\n";

	}
}