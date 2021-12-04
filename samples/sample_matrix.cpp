// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// sample_matrix.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (20.04.2015)
//
// Тестирование верхнетреугольной матрицы

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

void main()
{
	int size;

	setlocale(LC_ALL, "Russian");
	cout << "Размер матриц:" << endl << "-> ";
	cin >> size;

	TMatrix<int> M1(size), M2(size);

	cout << "Введите первую матрицу: " << endl << "-> ";
	cin >> M1;
	cout << "Введите вторую матрицу: " << endl << "-> ";
	cin >> M2;
	cout << M1 << endl << M2 << endl;

	cout << "M1 + M2 = " << endl << M1 + M2 << endl;
	cout << "M1 - M2 = " << endl << M1 - M2 << endl;

  
}
//---------------------------------------------------------------------------
