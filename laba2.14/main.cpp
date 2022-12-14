#include "stdio.h"
#include "note.h"
#include "my.h"
#include "keeper.h"
/*
Определить класс с именем NОТЕ, содержащий следующие поля:
● фамилия, имя;
● номер телефона;
● день рождения (массив из трех чисел).
Определить методы доступа к этим полям и перегруженные операции
извлечения и вставки для объектов типа NОТЕ.
Заранее число объектов не известно.
Написать программу, выполняющую следующие действия:
● записи должны быть упорядочены по трем первым цифрам номера
телефона;
● вывод на экран информации о человеке, чья фамилия введена с
клавиатуры;
● если такого нет, выдать на дисплей соответствующее сообщение.

*/


void list()
{
	printf("\n\tlist of main commands:\n");
	printf("-1 exit programm\n");
	printf("1 print all\n");
	printf("2 search\n");
	printf("3 add new\n");
	printf("4 edit one item\n");
	printf("5 delete one item\n");
	printf("\n");
}


int main()
{
	Keeper conf;

	int t = 0;
	while (true)
	{
		list();
		printf("enter menu command:\n");
		scan("%d", &t);
		switch (t)
		{
			case -1:
				return 0;

			case 1:
				conf.printAll();
				break;

			case 2:
				conf.searchPrint();
				break;

			case 3:
				conf.add();
				break;

			case 4:
				try {
					conf.edit();
				}
				catch (char* msg)
				{
					printf("exeption: %s\n", msg);
				}
				break;

			case 5:
				conf.delit();
				break;

			default:
				printf("no such command\n");
				break;
		}


	}

	return 0;
}
