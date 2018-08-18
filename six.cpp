#include <iostream>
#include <climits>
using namespace std;
int main()
{
	char n_char = sizeof(char);
	short n_short = sizeof(short);
	int n_int = sizeof (int);
	long n_long = sizeof (long);
	long long n_llong = sizeof(long long);
	cout << "Size char: " << n_char << "\n"
		 << "Size short: " << n_short << "\n"
		 << "Size int: " << n_int << "\n"
		 << "Size long: " << n_long << "\n"
		 << "Size llong: " << n_llong << "\n\n";
	cout << "Maximum type char : " << CHAR_MAX << "   *******   " << "Minimum type char: " << CHAR_MIN << "\n"
		 << "Maximum type short : " << SHRT_MAX << "   *******   " << "Minimum type short: " << SHRT_MIN << "\n"
		 << "Maximum type int : " << INT_MAX << "   *******   " << "Minimum type int: " << INT_MIN << "\n"
		 << "Maximum type long : " << LONG_MAX << "   *******   " << "Minimum type long: " << LONG_MIN << "\n"
		 << "Maximum type Llong : " << LLONG_MAX << "   *******   " << "Minimum type Llong: " << LLONG_MIN << "\n"; 
	return 0;
}