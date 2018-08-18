#include <iostream>
using namespace std;
void cript();
void uncript();
void menu();
void settings();
int step, choice;
char alpha[100];
int main()
{
	
	cout << "*******************\n"
	<< "Добро пожаловать!\n"
	<< "Эта программа предназначена для шифра цезаря.\n";
	void menu();
	return 0;
}
void menu() {
	do {
	cout << "\n\n"
		 << "****МЕНЮ****\n"
		 << "Текущее значение: " << step << "\n"
	     << "1. Изменить шаг\n"
	     << "2. Зашифровать\n"
	     << "3. Расшифровать\n"
	     << "0. Выход";
    cin >> choice;
    switch(choice) {
			case 1:
		settings();
		break;
			case 2:
		cript();
		break;
			case 3:
		uncript();
		break;
	    }	
	} while (choice != 0);
}
void settings() {

}
void cript() {

}
void uncript() {

}