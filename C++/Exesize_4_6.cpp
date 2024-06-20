#include <iostream>
#include <stdio.h>

#define X 128

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	//Задание 4
	cout << "Задание 4\n\n";
	char str[X], s = '.', c = '!';
	cout << "Введите вашу строку: "; gets_s(str);
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == s) str[i] = c;
		cout << str[i];
	}
	cout << "\n\n";
	//Задание 5
	cout << "Задание 5\n\n";
	char STR[X], sym;
	int count = 0;
	cout << "Введите вашу строку: "; gets_s(STR);
	cout << "Введите искомый символ: "; cin >> sym;
	for (int i = 0; i < strlen(STR); i++) {
		if (STR[i] == sym) count++;
	}
	cout << "Ваш символ встречается в строке " << count << " раз(-а)!";
	cout << "\n\n";
	//Задание 6
	cout << "Задание 6\n\n";
	char strin[X];
	int k = 0, u = 0, z = 0;
	int i = 0;
	cout << "Введите вашу строку: "; gets_s(strin); gets_s(strin);
	while (strin[i]){
		if (strin[i] >= '0' && strin[i] <= '9') k++;
		else if ((strin[i] >= 'a' && strin[i] <= 'z') || (strin[i] >= 'A' && strin[i] <= 'Z')) u++;
		else z++;
		i++;
	}
	cout << "Числа: " << k << endl;
	cout << "Буквы: " << u << endl;
	cout << "Прочее: " << z << endl;
	cout << "\n\n";
	return 0;
}
