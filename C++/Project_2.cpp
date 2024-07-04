#include <iostream>
#include <cstdlib>
#define X 5
#define Y 5

using namespace std;

void INIT(int** arr, int x, int y) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void PRINT(int** arr, int x, int y) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void EXECIZE_3(int** arr, int x, int y) {
	int ch, vec, step;
	cout << "\nВыберите объекты (строки - 1 или столбцы - 2): "; cin >> ch;
	switch (ch){
	case 1:
		cout << "\nЦиклический сдвиг строк!\n";
		cout << "\nУкажите направление (1 - влево или 2 - вправо): "; cin >> vec;
		switch (vec){
		case 1:
			cout << "\nНаправление - влево\n";
			cout << "\nВведите кол - во шагов: "; cin >> step;
			for (int k = 0; k < step; k++) {// первый цикл до кол - ва шагов
				for (int i = 0; i < x; i++) {// идём по строкам
					for (int j = 0; j < y - 1; j++) {// от текущего к последнему с увеличением
						swap(arr[i][j], arr[i][j + 1]);// меняем местами на одну позицию
					}
				}
			}
			break;
		case 2:
			cout << "\nНаправление - вправо\n";
			cout << "\nВведите кол - во шагов: "; cin >> step;
			for (int k = 0; k < step; k++) {
				for (int i = 0; i < x; i++) {
					for (int j = y - 1; j > 0; j--) {// от последнего к текущему с уменьшением
						swap(arr[i][j], arr[i][j - 1]);// меняем местами на одну позицию
					}
				}
			}
			break;
		}
		break;
	case 2:
		cout << "\nЦиклический сдвиг столбцов!\n";
		cout << "\nУкажите направление (1 - вверх или 2 - вниз): "; cin >> vec;
		switch (vec) {
		case 1:
			cout << "\nНаправление - вверх\n";
			cout << "\nВведите кол - во шагов: "; cin >> step;
			for (int k = 0; k < step; k++) {
				for (int j = 0; j < y; j++) {// идём по столбцам
					for (int i = 0; i < x - 1; i++) {
						swap(arr[i][j], arr[i + 1][j]);
					}
				}
			}
			break;
		case 2:
			cout << "\nНаправление - вниз\n";
			cout << "\nВведите кол - во шагов: "; cin >> step;
			for (int k = 0; k < step; k++) {
				for (int j = 0; j < y; j++) {
					for (int i = y - 1; i > 0; i--) {
						swap(arr[i][j], arr[i - 1][j]);
					}
				}
			}
			break;
		}
		break;
	}
}

int main() {
	setlocale(LC_ALL, "RU");
	cout << "Задание 3\n\n";
	int** matrix = new int* [X];
	for (int i = 0; i < X; i++) { // создание 2D массива
		matrix[i] = new int[Y];
	}
	INIT(matrix, X, Y); // инициализация
	EXECIZE_3(matrix, X, Y);// рабочая функция
	cout << "\nВаша новая матрица:\n\n";
	PRINT(matrix, X, Y);//вывод
	for (int i = 0; i < X; i++) {
		delete[] matrix[i]; // чистка памяти
	}
	delete[] matrix;
	return 0;
}