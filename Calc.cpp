#include <iostream> // ввод/вывод
#include <cstdlib> // rand(0)
#include <cmath> // мат. функции
#include <cstdio> 
using namespace std;
/* Типа комментарий*/
// <iostream> - ввод/вывод; <cstdlib> - rand()
int sum(int a, int b);
int multi(int a, int b);
int subtraction(int a, int b);
int division (int a, int b);
int mod(int a, int b);
void logic(int a, int b);

int main() {
	int a,b,j;
	char i;
	cout << "Введите число а: ";
	cin >>  a;
	cout << "Введите число b: ";
	cin >>  b;
	do {
		cout << "-------------------------\n"
		<< "Что вас интересует?\n" 
		<< "1. Сравнение\n"
		<< "2. Сумма\n"
		<< "3. Разность\n"
		<< "4. Произведение\n"
		<< "5. Целое от деления\n"
		<< "6. Остаток от деления\n"
		<< "Введите цифру: ";
		cin >> j;
		switch(j) {
				case 1:
			logic(a,b);
			break;
				case 2:
			sum(a,b);
			break;
				case 3:
			subtraction(a,b);
			break;
				case 4:
			multi(a,b);
			break;
				case 5:
			division(a,b);
			break;
				case 6:
			mod(a,b);
			break;
				default:
			cout << j << "От 1 до 6 :)\n";
		}
	loop:
	cout << "Что-то еще?[y/n]";
	cin >> i;
	if ((i!='n') && (i!='y')) goto loop;
	} while (i != 'n');
	return 0;
}
int sum(int a,int b) {
	cout << "Сумма = " << a+b << "\n";
	return 0;
}
int multi(int a,int b) {
	cout << "Произведение = " << a*b << "\n";
	return 0;
} 
int subtraction(int a, int b){
	cout << "Разность = " << a-b << "\n";
	return 0;	
}
int division(int a, int b){
	if (b)
	cout << "Частное = " << a/b << "\n";
	else 
	cout << "На ноль делить нельзя!\n";
	return 0;
}
int mod(int a, int b){
	if (b)
	cout << "Остаток = " << a%b << "\n";
	else 
	cout << "На ноль делить нельзя!\n";
	return 0;
}
void logic(int a,int b){
	if (a > b) cout << "Число а больше b\n";
	else {
	if (a == b) cout << "Число a = b\n";	
	else cout << "Число a меньше b\n";
	}
}