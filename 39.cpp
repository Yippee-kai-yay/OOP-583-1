// № 583-1 Surkov V.E.
// 39. Найти минимальный элемент матрицы. Строку, содержащую
//минимальный элемент, поменять с первой строкой матрицы.

#include <iostream> //библиотека input output stream

using namespace std; //ввод пространство имён std

int main()
{
	setlocale(LC_ALL, "Russian");
	int i, j, m, n, nmin,min,x[10], a[10][10];
	min = 100000000;
	nmin = 0;
	// Ввод матрицы
	cout << "Введите кол-во строк \n"; cin >> n;
	cout << "Введите кол-во столбцов \n"; cin >> m;
	cout << "Введите матрицу \n";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <m; j++){
			cin >> a[i][j];
			if (a[i][j] < min) { min = a[i][j]; nmin = i;}
		}
	}
	//Меняем местами
		for (j = 0; j <m; j++) {
			x[j] = a[0][j];
			a[0][j] = a[nmin][j];
			a[nmin][j] = x[j];
		}

	// Вывод матриц
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0; //успешное завершение программы
}
