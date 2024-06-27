#include <iostream>
#include <cstdlib>
using namespace std;

void Last_String(int**&arr, int x, int y) {
    int** arr2 = new int* [x + 1];
    for (int i = 0; i < x; i++) {   
        arr2[i] = arr[i];
    }
    arr2[x] = new int[y];// выделение памяти для последней строки
    cout << "\nВвод значений в новую строку (в конце):\n";
    for (int j = 0; j < y; j++) {      
        cin >> arr2[x][j];
    }
    ++x;// увеличение с 5 до 6 для отображения последней строки
   delete[] arr;//удаляем исходный массив
    arr = arr2;// записываем новый массив в исходный указатель arr
    cout << "Ваша новая матрица: \n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void First_String(int**&arr, int x, int y) {
    int** arr2 = new int* [x + 1];
    for (int i = 1; i <= x; i++)
    {
        arr2[i] = arr[i - 1];//копируем и сдвигаем каждую строку вниз на одну позицию исходного массива
    }
    arr2[0] = new int[y];// выделение памяти под первую строку
    cout << "\nВвод значений в новую строку (в начало):\n";
    for (int j = 0; j < y; j++)
    {
        cin >> arr2[0][j];
    }
    x++;
    delete[] arr;
    arr = arr2;
    cout << "Ваша новая матрица: \n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
	setlocale(LC_ALL, "RU");
	//Задание 1
	cout << "Задание 1\n\n";
    int x = 5, y = 5;
    int** arr = new int* [x];
    for (int i = 0; i < x; i++) {
        arr[i] = new int[y];
    }
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    Last_String(arr, x, y);
    for (int i = 0; i < x + 1; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    cout << "\n\n";
    //Задание 2
    cout << "Задание 2\n\n";
    int X = 5, Y = 5;
    int** ARR = new int* [X];
    for (int i = 0; i < X; i++) {
        ARR[i] = new int[Y];
    }
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            ARR[i][j] = rand() % 10;
            cout << ARR[i][j] << " ";
        }
        cout << endl;
    }
    First_String(ARR, X, Y);
    for (int i = 0; i < X + 1; i++) {
        delete[] ARR[i];
    }
    delete[] ARR;
    cout << "\n\n";
	return 0;
}