#include <iostream>
#include <stdio.h>

#define X 128

using namespace std;

void EXECIZE_1(char*str, int pos, char*str_2) {
	int k = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] != str[pos]) {
			str_2[k++] = str[i];
		}
	}
	cout << "Ваша новая строка: ";
	for (int i = 0; i < k; i++) cout << str_2[i];
}

void EXECIZE_2(char* str, char sym, char* str_2) {
	int k = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] != sym) {
			str_2[k++] = str[i];
		}
	}
	cout << "Ваша новая строка: ";
	for (int i = 0; i < k; i++) cout << str_2[i];
}

void EXECIZE_3(char* str, char sym, int pos) {
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == str[pos]) {
			str[i] = sym;
		}
	}
	cout << "Ваша новая строка: ";
	for (int i = 0; i < strlen(str); i++) cout << str[i];
}

int main() {
	setlocale(LC_ALL, "RU");
	// Задание 1
	cout << "Задание 1\n\n";
	char str[X];
	int pos;
	char*str_2 = new char[X - 1];
	cout << "Введите вашу строку: "; gets_s(str);
	cout << "Введите номер символа в строке (нумерация начинается с 0): "; cin >> pos;
	EXECIZE_1(str, pos, str_2);
	delete[] str_2;
	cout << "\n\n";
	// Задание 2
	cout << "Задание 2\n\n";
	char STR[X]; char* STR_2 = new char[X - 1];
	char sym;
	cout << "Введите вашу строку: "; gets_s(STR); gets_s(STR);
	cout << "Введите символ: "; cin >> sym;
	EXECIZE_2(STR, sym, STR_2);
	delete[] STR_2;
	cout << "\n\n";
	// Задание 3
	cout << "Задание 3\n\n";
	char strk[X];
	int POS; char SYM;
	cout << "Введите вашу строку: "; gets_s(strk); gets_s(strk);
	cout << "Введите позицию: "; cin >> POS;
	cout << "Введите символ: "; cin >> SYM;
	EXECIZE_3(strk, SYM, POS);
	cout << "\n\n";
	return 0;
}