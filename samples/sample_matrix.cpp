// ����, ���, ���� "������ ����������������-2", �++, ���
//
// sample_matrix.cpp - Copyright (c) ������� �.�. 07.05.2001
//   ������������ ��� Microsoft Visual Studio 2008 �������� �.�. (20.04.2015)
//
// ������������ ����������������� �������

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

void main()
{
	int size;

	setlocale(LC_ALL, "Russian");
	cout << "������ ������:" << endl << "-> ";
	cin >> size;

	TMatrix<int> M1(size), M2(size);

	cout << "������� ������ �������: " << endl << "-> ";
	cin >> M1;
	cout << "������� ������ �������: " << endl << "-> ";
	cin >> M2;
	cout << M1 << endl << M2 << endl;

	cout << "M1 + M2 = " << endl << M1 + M2 << endl;
	cout << "M1 - M2 = " << endl << M1 - M2 << endl;

  
}
//---------------------------------------------------------------------------
