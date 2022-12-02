/*
� �������������� �������� � ��������� ������� �������� ���������,
������� ��������� ����� �� ����� � ������� ��� �� �����, ������� ����� ��
0 �� 9 ������� ������, �����, ..., ��������, ������� ������ ����������� �
����� ������
*/

#include "fstream"
#include <string>
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	ifstream fin;
	fin.open("text.txt");
	if (!fin.is_open())
	{
		cout << "file not found" << endl;
		return 0;
	}

	char c;
	char prev = 'a';

	while (!fin.eof())
	{
		fin.get(c);
		switch (c)
		{
		case '0':
			cout << "����";
			break;
		case '1':
			cout << "����";
			break;
		case '2':
			cout << "���";
			break;
		case '3':
			cout << "���";
			break;
		case '4':
			cout << "������";
			break;
		case '5':
			cout << "����";
			break;
		case '6':
			cout << "�����";
			break;
		case '7':
			cout << "����";
			break;
		case '8':
			cout << "������" ;
			break;
		case '9':
			cout << "������";
			break;
		default:
			cout << c;
			if (c == '.' || c == '!' || c == '?')
			{
				while (c == '.' || c == '!' || c == '?')
				{
					fin.get(c);
					cout << c;
				}	
				cout << endl;
			}
				
			break;
		}
		prev = c;

	}

	fin.close();
}