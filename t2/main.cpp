/*
С использованием файловых и строковых потоков написать программу,
которая считывает текст из файла и выводит его на экран, заменив цифры от
0 до 9 словами «ноль», «один», ..., «девять», начиная каждое предложение с
новой строки
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
			cout << "ноль";
			break;
		case '1':
			cout << "один";
			break;
		case '2':
			cout << "два";
			break;
		case '3':
			cout << "три";
			break;
		case '4':
			cout << "четыре";
			break;
		case '5':
			cout << "пять";
			break;
		case '6':
			cout << "шесть";
			break;
		case '7':
			cout << "семь";
			break;
		case '8':
			cout << "восемь" ;
			break;
		case '9':
			cout << "девять";
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