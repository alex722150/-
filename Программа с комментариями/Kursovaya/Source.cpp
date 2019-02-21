#pragma warning (disable: 4996)
#pragma warning (disable: 4101)
#pragma warning (disable: 4244)
#include <iostream> //читать или записывать стандартные потоки ввода/вывода
#include <stdio.h>  //включение заголовка stdio.h
#include <conio.h>  //заголовочный файл, используемый в старых компиляторах
#include <windows.h> //подключение функционала, предоставляемый операционной системой
#include <locale.h> //Заголовочный файл объявляет структуру lconv и её поля, которая хранит информацию о текущей кодировке для форматирования чисел.
#include <math.h> //Файл для выполнения простых математических операций. 
#include <string> //поддержка строкового типа данных
#include <fstream> //набор классов, методов и функций, которые предоставляют интерфейс для чтения/записи данных из/в файл.
#include <vector> //реализация динамического массива переменного размера.
#include <iomanip> //в этом файле описаны манипуляторы при работе с потоковыми операциями. может задавать ширину выводимого поля.
#include <time.h> // файл содержащий типы и функции для работы с датой и временем.
#include <stdlib.h> //файл содержит в себе функции, занимающиеся выделением памяти, контролем процесса выполнения программы, преобразованием типов и другие. 
using namespace std; //пространство имен - Используется для того, чтобы ограничить видимость переменных, ф-ий и т.п. открывает пространство имен библиотеки iostream.
int number1, N = 50, n2 = 7; int n = 0;
FILE *f; //Чтение и запись файлов
char s1[256]; //Символьный тип
HANDLE hConsole; //Дескриптор
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); //в данном случае извлекает Дескриптор устройства стандартного вывода.
int m_pos = 0;
int max_pos = 4;
void GotoXY(int X, int Y) //Функция gotoxy() помещает курсор текстового экрана в точку с координатами х,у.
{
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord); // SetConsoleCursorPosition Установить курсор на позицию заголовка hStdOut в координаты coord
}
void SetColor(int text, int background) //Применить цвет
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text)); //Атрибуты текста
}
void zastavka2()
{
	int x = 2;
	for (int i = 1; i <= 10; i++){
		{ SetColor(x, 0);	cout << "                                  ..',;;::;;,'...                       \n";
		cout << "                              .l0XNWMMMMMMMMWWNXKOxl'                     \n";
		cout << "                      .'lO0l.   'oKMMMMMMMMMMMMMMMMM0.   .                \n";
		cout << "                   .;xKWMMMMXx,   .:ONMMMMMMMMMMMMMMK,  'OOl.              \n";
		cout << "                 .l0WMMMMMMMMMW0c.   'oXMMMMMMMMMMMMX:  .OWMXx;           \n";
		cout << "               'xNMMMMMMMMMMMMMMMXx,   .:kNMMMMMMMMMNc  .xWMMMW0:          \n";
		cout << "             .oXMMMMMMMMMMMMMMMMMMMWO:.   'oXMMMMMMMWo.  lNMMMMMWO,         \n";
		cout << "            :KMMMMMMMMMMMMMMMMMMWWWNXKOl.   .:kNMMMMWx.  :NMMMMMMMNx.       \n";
		cout << "          .oNMMMMWNXKK0Okxdocc:;,'.....        .dXWMWO.  ;XMMMMMMMMWO'      \n";
		cout << "          .;;,''....                             .:ONK'  '0MMMMMMMMMMK;       \n";
		cout << "                ....',;:cl;.                        ,l'  .OWMMMMMMMMMWO.       \n";
		cout << "        cxOOKXXNNNNWWWWWXl.                              .xWMMMMMMMMXo.        \n";
		cout << "       ;NMMMMMMMMMMMMMWk'                                .oWMMMMMMWk'   .      \n";
		cout << "      .xWMMMMMMMMMMMWO,                                   cNMMMMWO,   'kK;     \n";
		cout << "      '0MMMMMMMMMMMXc.                                    :XMMMXc.  .oXMNl     \n";
		cout << "      :NMMMMMMMMMKo.                                      ,KWXo.  .lXMMMWx.     \n";
		cout << "      lNMMMMMMMNx.                                        'Od.   :0WMMMMWO.      \n";
		cout << "      lNMMMMMWO,   ,kl                                     .   'OWMMMMMMWO.      \n";
		cout << "      cNMMMW0:   .dNWx.                                      .dXMMMMMMMMWx.      \n";
		cout << "      ,KMWKl.  .oXMMWk.                                    .oXMMMMMMMMMMWo       \n";
		cout << "      .xXd.   :0WMMMM0'                                   :0WMMMMMMMMMMMX;       \n";
		cout << "       ..   ;OWMMMMMMX,                                 ;0WMMMMMMMMMMMMWx.       \n";
		cout << "          'xWMMMMMMMMN:                               'xWMMMMMMWWWWNNXX0'       \n";
		cout << "         :XMMMMMMMMMMNl   ;:.                        ;xxxdolc:;;''....           \n";
		cout << "         .kWMMMMMMMMMWd.  lNKo'                                  .....           \n";
		cout << "          .xWMMMMMMMMWk.  :XMMWO;.              ....',;:clodxkO0KXXN0;          \n";
		cout << "           .lXMMMMMMMMK'  ,KMMMMW0o'    .cxO0KKXXNNNWWMMMMMMMMMMMMWO'            \n";
		cout << "             'xNMMMMMMN;  '0MMMMMMMNk;.   ,dXMMMMMMMMMMMMMMMMMMMWKc              \n";
		cout << "               ;0WMMMMN:  .kWMMMMMMMMWKo.   .l0WMMMMMMMMMMMMMMMXl.               \n";
		cout << "                 ,xXMMWo  .xWMMMMMMMMMMMNk:.   ,xXMMMMMMMMMMW0c.               \n";
		cout << "                   .lOXx   lWMMMMMMMMMMMMMWKo.   .l0WMMMMWKx,                    \n";
		cout << "                      ..   cNMMMMMMMMMMMMMMMMNk;.   ;xKOl'.                      \n";
		cout << "                           .ok0XNWWMMMMMMMMMMMWNk:                              \n";
		cout << "                               ..',;cclllllc:;'..                             \n"; SetColor(15, 0); }
		Sleep(600);

		for (int id = 1; id <= 200; id++){
			SetColor(1, 0);	cout << "ИВТ-173ИВТ-173ИВТ-173ИВТ-173ИВТ-173ИВТ-173ИВТ-173ИВТ-173ИВТ-173ИВТ-173ИВТ-173ИВТ-173ИВТ-173ИВТ-173\n"; SetColor(9, 0);
		}
		x++;


		system("cls"); //очистка экрана
	}
	system("pause");
}
enum ConsoleColor //тип перечисления
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};
int Obavtore(){

	for (int i = 1; i <= 10; i++)
		printf("\n");
	SetColor(4, 15); printf(" Я студент группы ИВТ-173. До института увлекался изучением языков программирования.  \nА также Ремонтом и обслуживанием компьютерной техники.\n  "); SetColor(15, 0);
	SetColor(2, 15); printf("Позже, решил связать свою жизнь с этим направлением.\nПопав в ОмГТУ на желаемую специальность очень был рад"); SetColor(15, 0);
	SetColor(1, 15); printf("Теперь могу совершенствовать свой небольшой накопленный опыт знаний до высшего уровня требуемого в мировом сообществе.\n"); SetColor(15, 0);
	Sleep(1000); return(0);
}
int zastavka()
{

	SetColor(1, 0); cout << "\r|-----------------|\n"; SetColor(15, 0);
	SetColor(1, 0); cout << "\r|                 |\n"; SetColor(15, 0);
	SetColor(1, 0); cout << "\r|     Работу      |\n"; SetColor(15, 0);
	SetColor(1, 0); cout << "\r|   ПОДГОТОВИЛ:   |\n"; SetColor(15, 0);
	SetColor(1, 0); cout << "\r|                 |\n"; SetColor(15, 0);
	SetColor(1, 0); cout << "\r|     Ушаков      |\n"; SetColor(15, 0);
	SetColor(1, 0); cout << "\r|                 |\n"; SetColor(15, 0);
	SetColor(1, 0); cout << "\r|     ИВТ-173!    |\n"; SetColor(15, 0);
	SetColor(1, 0); cout << "\r|                 |\n"; SetColor(15, 0);
	SetColor(1, 0); cout << "\r|                 |\n"; SetColor(15, 0);
	SetColor(1, 0); cout << "\r|                 |\n"; SetColor(15, 0);
	SetColor(1, 0); cout << "\r|-----------------|\n"; SetColor(15, 0);
	Sleep(400);
	system("cls");

	SetColor(2, 0); cout << "                                      |-----------------|\n"; SetColor(15, 0);
	SetColor(2, 0); cout << "                                      |                 |\n"; SetColor(15, 0);
	SetColor(2, 0); cout << "                                      |     Работу      |\n"; SetColor(15, 0);
	SetColor(2, 0); cout << "                                      |   ПОДГОТОВИЛ:   |\n"; SetColor(15, 0);
	SetColor(2, 0); cout << "                                      |                 |\n"; SetColor(15, 0);
	SetColor(2, 0); cout << "                                      |     Ушаков      |\n"; SetColor(15, 0);
	SetColor(2, 0); cout << "                                      |                 |\n"; SetColor(15, 0);
	SetColor(2, 0); cout << "                                      |     ИВТ-173!    |\n"; SetColor(15, 0);
	SetColor(2, 0); cout << "                                      |                 |\n"; SetColor(15, 0);
	SetColor(2, 0); cout << "                                      |                 |\n"; SetColor(15, 0);
	SetColor(2, 0); cout << "                                      |                 |\n"; SetColor(15, 0);
	SetColor(2, 0); cout << "                                      |-----------------|\n"; SetColor(15, 0);
	Sleep(400);
	system("cls");

	SetColor(3, 0); cout << "                                                                                                     |-----------------|\n"; SetColor(15, 0);
	SetColor(3, 0); cout << "                                                                                                     |                 |\n"; SetColor(15, 0);
	SetColor(3, 0); cout << "                                                                                                     |     Работу      |\n"; SetColor(15, 0);
	SetColor(3, 0); cout << "                                                                                                     |   ПОДГОТОВИЛ:   |\n"; SetColor(15, 0);
	SetColor(3, 0); cout << "                                                                                                     |                 |\n"; SetColor(15, 0);
	SetColor(3, 0); cout << "                                                                                                     |     Ушаков      |\n"; SetColor(15, 0);
	SetColor(3, 0); cout << "                                                                                                     |                 |\n"; SetColor(15, 0);
	SetColor(3, 0); cout << "                                                                                                     |     ИВТ-173!     |\n"; SetColor(15, 0);
	SetColor(3, 0); cout << "                                                                                                     |                 |\n"; SetColor(15, 0);
	SetColor(3, 0); cout << "                                                                                                     |                 |\n"; SetColor(15, 0);
	SetColor(3, 0); cout << "                                                                                                     |                 |\n"; SetColor(15, 0);
	SetColor(3, 0); cout << "                                                                                                     |-----------------|\n"; SetColor(15, 0);
	Sleep(400);
	system("cls");

	SetColor(4, 0); cout << "\n";
	SetColor(4, 0); cout << "\n";
	SetColor(4, 0); cout << "\n";
	SetColor(4, 0); cout << "\n";
	SetColor(4, 0); cout << "\n";
	SetColor(4, 0); cout << "\n";
	SetColor(4, 0); cout << "\n";
	SetColor(4, 0); cout << "\n";
	SetColor(4, 0); cout << "\n";
	SetColor(4, 0); cout << "\n";
	SetColor(4, 0); cout << "\n";
	SetColor(4, 0); cout << "\n";
	SetColor(4, 0); cout << "\n";
	SetColor(4, 0); cout << "\n";
	SetColor(4, 0); cout << "\n";
	SetColor(4, 0); cout << "                                      |-----------------|\n"; SetColor(15, 0);
	SetColor(4, 0); cout << "                                      |                 |\n"; SetColor(15, 0);
	SetColor(4, 0); cout << "                                      |     Работу      |\n"; SetColor(15, 0);
	SetColor(4, 0); cout << "                                      |   ПОДГОТОВИЛ:   |\n"; SetColor(15, 0);
	SetColor(4, 0); cout << "                                      |                 |\n"; SetColor(15, 0);
	SetColor(4, 0); cout << "                                      |     Ушаков      |\n"; SetColor(15, 0);
	SetColor(4, 0); cout << "                                      |                 |\n"; SetColor(15, 0);
	SetColor(4, 0); cout << "                                      |     Пи-173!     |\n"; SetColor(15, 0);
	SetColor(4, 0); cout << "                                      |                 |\n"; SetColor(15, 0);
	SetColor(4, 0); cout << "                                      |                 |\n"; SetColor(15, 0);
	SetColor(4, 0); cout << "                                      |                 |\n"; SetColor(15, 0);
	SetColor(4, 0); cout << "                                      |-----------------|\n"; SetColor(15, 0);
	Sleep(400);
	system("cls");
	return(0);


}

struct Kniga
{

	char Family[35];
	char Name[35];
	char Otch[35];
	char City[100];
	char tel[35];
	char den[35];
	char mesyac[35];
	char godr[35];
	char pk[35];
	void Show();
	void Input();

};
void Kniga::Input() // ключевое слово
{
	system("cls");
	cout << "\n"; //стандартный выходной поток
	cout << "==================================================================================================================\n";
	cout << "|Фамилия       |Имя           |Отчество    |Город     |Телефон  |День рождения |Месяц р|Год рождения|ПК|\n";
	cout << "==================================================================================================================\n";
	cout << "|              |              |            |          |         |              |       |            |  |\n";
	cout << "==================================================================================================================\n";



	
	GotoXY(1, 2); //перейти в
	cout << "Фамилия";
	GotoXY(1, 4);
	gets_s(Family); fprintf(f, "%s\n", Family);
	GotoXY(16, 2);
	cout << "Имя";
	GotoXY(16, 4);
	gets_s(Name); fprintf(f, "%s\n", Name);


	GotoXY(31, 2);
	cout << "Отчество";
	GotoXY(31, 4);
	gets_s(Otch); fprintf(f, "%s\n", Otch);

	

	GotoXY(44, 2);
	cout << "Город";
	GotoXY(44, 4);
	gets_s(City); fprintf(f, "%s\n", City);


	GotoXY(55, 2);
	cout << "Телефон";
	GotoXY(55, 4);
	gets_s(tel); fprintf(f, "%s\n", tel);
	GotoXY(65, 2);
	cout << "День р";
	GotoXY(65, 4);
	gets_s(den); fprintf(f, "%s\n", den);
	GotoXY(80, 2);
	cout << "Месяц р";
	GotoXY(80, 4);
	gets_s(mesyac); fprintf(f, "%s\n", mesyac);
	GotoXY(88, 2);
	cout << "Год р";
	GotoXY(88, 4);
	gets_s(godr); fprintf(f, "%s\n", godr);
	GotoXY(101, 2);
	cout << "ПК";
	GotoXY(101, 4);
	gets_s(pk); fprintf(f, "%s\n", pk);
	cout << "\n\n";
	cout << "======================\n";
}
void Kniga::Show()
{

	if (n == 0)
	{
		cout << "\n";
		cout << "==========================================================================================================\n";
		cout << "|Фамилия        |Имя            |Отчество    |Город     |Телефон  |День рождения |Месяц р|Год рождения|ПК|\n";
		cout << "|===============|===============|============|==========|=========|==============|=======|============|==|\n";
	}
	n++;
	if (strcmp(Family, "") == 1 && strcmp(City, "") == 1 && strcmp(godr, "") == 1){
		printf("|%-15s", Family); //Строка символов. выводит выровненное "Family" в 15-символьном поле

		printf("|%-15s", Name); //Строка символов

		printf("|%-12s", Otch); //Строка символов

	

		printf("|%-10s", City); //Строка символов

		printf("|%-9s", tel); //Строка символов

		printf("|%-14s", den); //Строка символов

		printf("|%-7s", mesyac); //Строка символов

		printf("|%-12s", godr); //Строка символов

		printf("|%-2s|", pk); //Строка символов
		printf("\n");

		cout << "|===============|===============|============|==========|=========|==============|=======|============|==|\n";
	}







}

int baza()
{

	char Gorod[20];
	char familya[20];
	char imya[20];
	char otchestv[20];
	char god[20];
	char god2[20];
	char godroc[20];
	char telef[20];
	char denek[35];
	char mesyacoc[35];
	char perem[35]="1";
	Kniga* kniga = new Kniga[50];


	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);

	char f2[20], c;


	cout << "\nВведите имя файла для чтения: ";

	cin >> f2;
	ifstream v(f2);

	for (int i = 0; i < 50; i++)
	{
		v.getline(kniga[i].Family, 35);
		v.getline(kniga[i].Name, 35);
		v.getline(kniga[i].Otch, 35);

		v.getline(kniga[i].City, 35);
		v.getline(kniga[i].tel, 35);
		v.getline(kniga[i].den, 35);
		v.getline(kniga[i].mesyac, 35);
		v.getline(kniga[i].godr, 35);
		v.getline(kniga[i].pk, 35);
	}

	system("cls");
	cout << "\nЧтение из файла " << f2 << ":\n";
	cout << "\n";
	cout << "==========================================================================================================\n";
	cout << "|Фамилия        |Имя            |Отчество    |Город     |Телефон  |День рождения |Месяц р|Год рождения|ПК|\n";
	cout << "|===============|===============|============|==========|=========|==============|=======|============|==|\n";
	for (int i = 0; i < 50; i++)
	{
		if (strcmp(kniga[i].Family, "") == 0 && strcmp(kniga[i].City, "") == 0 && strcmp(kniga[i].godr, "") == 0){ break; }
		printf("|%-15s", kniga[i].Family);

		printf("|%-15s", kniga[i].Name);

		printf("|%-12s", kniga[i].Otch);

		

		printf("|%-10s", kniga[i].City);

		printf("|%-9s", kniga[i].tel);

		printf("|%-14s", kniga[i].den);

		printf("|%-7s", kniga[i].mesyac);

		printf("|%-12s", kniga[i].godr);

		printf("|%-2s|", kniga[i].pk);
		printf("\n");
	}
	cout << "|===============|===============|============|==========|=========|==============|=======|============|==|\n";
	system("pause");
v:for (;;)
{

	  SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);
	  int variant;
	  cout << "Введите вариант\n" << endl;
	  cout << "1. Поиск по городу (2 вар)\n"
		  << "2. Поиск по Фио(4 вар)\n"
		  << "3. Поиск по Месяцу рождения(2 вар)\n"
		  << "4. Поиск по телефону,наличию Пк(2 вар)\n"
		  << "5. Открыть файл\n"
		  << "0. Выход\n" << endl;
	  cout << ">>> ";
	  cin >> variant;
	  switch (variant) { // оператор обеспечивающий выполнение определённой команды (набора команд) только при условии истинности некоторого логического выражения, либо выполнение одной из нескольких команд (наборов команд) в зависимости от значения некоторого выражения.
	  case 1:
	  {{
		  for (;;)
		  {
			  SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
			  int variant2;
			  cout << "Введите вариант\n" << endl;
			  cout << "1. Поиск по городу \n"
				  << "2. Поиск кроме города\n"
				  << "0. Выход\n" << endl;
			  cout << ">>> ";
			  cin >> variant2;
			  switch (variant2) {
			  case 1:
				  cout << "\nВведите нужный город:";
				  (cin >> Gorod).get();

				  for (int i = 0; i < N; i++)
				  {
					  if (strcmp(kniga[i].City, Gorod) == 0)
						  kniga[i].Show();

					  else;
				  }
				  system("pause");
				  break;

			  case 2:

				  cout << "\nВведите нужный город:";
				  (cin >> Gorod).get();

				  for (int i = 0; i < N; i++)
				  {
					  if (strcmp(kniga[i].City, Gorod) == 0)
						  ;

					  else kniga[i].Show();
				  }
				  system("pause");
				  break;
			  case 0:goto v;
			  }
		  } }


	  case 2:
	  {
				for (;;)
				{
					SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
					int variant3;
					cout << "Введите вариант\n" << endl;
					cout << "1. Поиск по Имени \n"
						<< "2. Поиск по Фамилии\n"
						<< "3. Поиск по Отчеству\n"
						<< "4. Поиск по Фио\n"
						<< "0. Выход\n" << endl;
					cout << ">>> ";
					cin >> variant3;
					switch (variant3) {
					case 1: //case — это удобная замена длинной if-else конструкции, которая сравнивает переменную с несколькими константными значениями, например int или char.

						cout << "\nВведите Имя:";
						(cin >> imya).get();

						for (int i = 0; i < N; i++)
						{
							if (strcmp(kniga[i].Name, imya) == 0)
								kniga[i].Show();

							else;
						}
						system("pause");
						break; //принудительное окончание цикла, минуя стандартную проверку условия.

					case 2: //case — это удобная замена длинной if-else конструкции, которая сравнивает переменную с несколькими константными значениями, например int или char.
						cout << "\nВведите Фамилию:";
						(cin >> familya).get();

						for (int i = 0; i < N; i++)
						{
							if (strcmp(kniga[i].Family, familya) == 0)
								kniga[i].Show();

							else;
						}
						system("pause");
						break; //принудительное окончание цикла, минуя стандартную проверку условия.
					case 3: //case — это удобная замена длинной if-else конструкции, которая сравнивает переменную с несколькими константными значениями, например int или char.
						cout << "\nВведите Отчество:";
						(cin >> otchestv).get();
						for (int i = 0; i < N; i++)
						{
							if (strcmp(kniga[i].Otch, otchestv) == 0)
								kniga[i].Show();

							else;
						}
						system("pause");
						break; //принудительное окончание цикла, минуя стандартную проверку условия.
					case 4: //case — это удобная замена длинной if-else конструкции, которая сравнивает переменную с несколькими константными значениями, например int или char.
						cout << "\nВведите Фио:";
						(cin >> familya).get();
						(cin >> imya).get();
						(cin >> otchestv).get();

						for (int i = 0; i < N; i++)
						{

							if (strcmp(kniga[i].Name, imya) == 0 && strcmp(kniga[i].Family, familya) == 0 && strcmp(kniga[i].Otch, otchestv) == 0)
								kniga[i].Show();

							else;
						}
						system("pause");
						break; //принудительное окончание цикла, минуя стандартную проверку условия.
					case 0: goto v; //case — это удобная замена длинной if-else конструкции, которая сравнивает переменную с несколькими константными значениями, например int или char.
					}
				}}


	  
	  case 3:
	  {
				for (;;)
				{
					SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
					int variant5;
					cout << "Введите вариант\n" << endl;
					cout << "1. Поиск по месяцу рождения с сортировкой \n"
					     << "2. Поиск по месяцу рождения без сортировки \n"
						 << "3. Поиск по дню рождения  \n"
						 << "4. Поиск по году рождения  \n"
						<< "0. Выход\n" << endl;
					cout << ">>> ";
					cin >> variant5;
					switch (variant5) {
					case 1: //case — это удобная замена длинной if-else конструкции, которая сравнивает переменную с несколькими константными значениями, например int или char.
						int ty;
						cout << "Введите месяц рождения\t";
						(cin >> mesyacoc).get();
						for (int i = 0; i < N; i++)
						if (strcmp(kniga[i].mesyac, mesyacoc) == 0)
						{
							kniga[i].Show();
	
							
						}
						else;
						system("pause");
						break; //это окончание работы оператора switch

					case 2: //case — это удобная замена длинной if-else конструкции, которая сравнивает переменную с несколькими константными значениями, например int или char.
						cout << "Введите месяц рождения\t";
						(cin >> mesyacoc).get();
						for (int i = 0; i < N; i++)
						if (strcmp(kniga[i].mesyac, mesyacoc) == 0)
							kniga[i].Show();
						else;
						system("pause");
						break;  //принудительное окончание цикла, минуя стандартную проверку условия.

					case 3: //case — это удобная замена длинной if-else конструкции, которая сравнивает переменную с несколькими константными значениями, например int или char.
						cout << "Введите год рождения\t";
						(cin >> god).get();
						for (int i = 0; i < N; i++)
						if (strcmp(kniga[i].godr, god) == 0)
							kniga[i].Show();
						else;
						system("pause");
						break; //принудительное окончание цикла, минуя стандартную проверку условия.

					case 4:  //case — это удобная замена длинной if-else конструкции, которая сравнивает переменную с несколькими константными значениями, например int или char.
						cout << "Введите день рождения\t";
						(cin >> denek).get();
						for (int i = 0; i < N; i++)
						if (strcmp(kniga[i].den, denek) == 0)
							kniga[i].Show();
						else;
						system("pause");
						break; //принудительное окончание цикла, минуя стандартную проверку условия.

				

					case 0: goto v; //case — это удобная замена длинной if-else конструкции, которая сравнивает переменную с несколькими константными значениями, например int или char.

					}
				}}


	  case 4:
	  {
				for (;;)
				{
					SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
					int variant6;
					cout << "Введите вариант\n" << endl;
					cout << "1. Поиск владельцев ПК \n"
						 << "2. Поиск по телефону\n"
						<< "0. Выход\n" << endl;
					cout << ">>> ";
					cin >> variant6;
					switch (variant6) {
					case 1:

						for (int i = 0; i < N; i++)
						if (strcmp(kniga[i].pk, "-") == 0)
							;
						else  kniga[i].Show();
						system("pause");
						break;


					case 2:

						cout << "Введите номер телефона\t";
						(cin >> telef).get();
						for (int i = 0; i < N; i++)
						if (strcmp(kniga[i].tel, telef) == 0)
							kniga[i].Show();
						else;
						system("pause");
						break;
					case 0: goto v;;
					}
				}}
	  case 5:
		  SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE);
		  cout << "Введите кол-во студентов = "; cin >> n2; cin.ignore();

		  cout << "Вводите данные на английском!!!!!\n";
		  cout << "Введите имя файла для записи ";
		  char s[50];
		  cin.getline(s, 50); //предназначена для ввода данных из потока
		  f = fopen(s, "a");
		  for (int i = 0; i < n2; i++) kniga[i].Input();
		  fclose(f);

	  }case 0: return(0);
	  }
}
}



int sheeps(int pole[10][10])
{
	int i, j, f, k, r;
	int rand_chislo, rand_chislo1, ts, s;
	srand(time(NULL));
	for (i = 0; i<10; i++)
	for (j = 0; j<10; j++)
		pole[i][j] = 0;

	do{
		f = 0;
		rand_chislo = 0 + rand() % 10;
		rand_chislo1 = 0 + rand() % 10;
		ts = 1 + rand() % 4;
		if (ts == 1) { for (i = 0; i<3; i++) if (rand_chislo == i)f = 1; }
		if (ts == 2)  { for (i = 7; i<10; i++) if (rand_chislo == i)f = 1; }
		if (ts == 3) { for (i = 0; i<3; i++) if (rand_chislo1 == i)f = 1; }
		if (ts == 4)  { for (i = 7; i<10; i++) if (rand_chislo1 == i)f = 1; }
	} while (f == 1); //цикл, повторяющий одно и то же действие, пока условие продолжения цикла while остаётся истинным.
	switch (ts){
	case 1: pole[rand_chislo][rand_chislo1] = 1; pole[rand_chislo - 1][rand_chislo1] = 1;
		pole[rand_chislo - 2][rand_chislo1] = 1; pole[rand_chislo - 3][rand_chislo1] = 1; break;
	case 2: pole[rand_chislo][rand_chislo1] = 1; pole[rand_chislo + 1][rand_chislo1] = 1;
		pole[rand_chislo + 2][rand_chislo1] = 1; pole[rand_chislo + 3][rand_chislo1] = 1; break;
	case 3: pole[rand_chislo][rand_chislo1] = 1; pole[rand_chislo][rand_chislo1 - 1] = 1;
		pole[rand_chislo][rand_chislo1 - 2] = 1; pole[rand_chislo][rand_chislo1 - 3] = 1; break;
	case 4: pole[rand_chislo][rand_chislo1] = 1; pole[rand_chislo][rand_chislo1 + 1] = 1;
		pole[rand_chislo][rand_chislo1 + 2] = 1; pole[rand_chislo][rand_chislo1 + 3] = 1; break;
	}


	for (k = 0; k<3; k++)
	{
		do{
			f = 0;
			rand_chislo = 0 + rand() % 10;
			rand_chislo1 = 0 + rand() % 10;

			ts = 1 + rand() % 4;

			if (ts == 1)  {
				if (rand_chislo != 0){
					for (i = rand_chislo - 2; i<rand_chislo + 2; i++)
					for (j = rand_chislo1 - 1; j <= rand_chislo1 + 1; j++)
					{
						if (pole[i][j] != 0){ f = 1; }
					}
				}
				else f = 1;
			}
			if (ts == 2)  {
				if (rand_chislo != 9)  {
					for (i = rand_chislo - 1; i <= rand_chislo + 2; i++)
					for (j = rand_chislo1 - 1; j <= rand_chislo1 + 1; j++)
					{
						if (pole[i][j] != 0){ f = 1; }
					}
				}
				else f = 1;
			}
			if (ts == 3) {
				if (rand_chislo1 != 0) {
					for (i = rand_chislo - 1; i <= rand_chislo + 1; i++)
					for (j = rand_chislo1 - 2; j <= rand_chislo1 + 1; j++)
					{
						if (pole[i][j] != 0){ f = 1; }
					}
				}
				else f = 1;
			}
			if (ts == 4) {
				if (rand_chislo1 != 9) {
					for (i = rand_chislo - 1; i <= rand_chislo + 1; i++)
					for (j = rand_chislo1 - 1; j <= rand_chislo1 + 2; j++)
					{
						if (pole[i][j] != 0){ f = 1; }
					}
				}
				else f = 1;
			}
		} while (f == 1);
		switch (ts){
		case 1: pole[rand_chislo][rand_chislo1] = 1; pole[rand_chislo - 1][rand_chislo1] = 1; break;
		case 2: pole[rand_chislo][rand_chislo1] = 1; pole[rand_chislo + 1][rand_chislo1] = 1; break;
		case 3: pole[rand_chislo][rand_chislo1] = 1; pole[rand_chislo][rand_chislo1 - 1] = 1; break;
		case 4: pole[rand_chislo][rand_chislo1] = 1; pole[rand_chislo][rand_chislo1 + 1] = 1; break;
		}


	}

	for (k = 0; k<2; k++)
	{
		do{
			f = 0;
			rand_chislo = 0 + rand() % 10;
			rand_chislo1 = 0 + rand() % 10;

			ts = 1 + rand() % 4;

			if (ts == 1)  {
				if (rand_chislo != 0 && rand_chislo != 1){
					for (i = rand_chislo - 3; i<rand_chislo + 2; i++)
					for (j = rand_chislo1 - 1; j <= rand_chislo1 + 1; j++)
					{
						if (pole[i][j] != 0){ f = 1; }
					}
				}
				else f = 1;
			}
			if (ts == 2)  {
				if (rand_chislo != 9 && rand_chislo != 8)  {
					for (i = rand_chislo - 1; i <= rand_chislo + 3; i++)
					for (j = rand_chislo1 - 1; j <= rand_chislo1 + 1; j++)
					{
						if (pole[i][j] != 0){ f = 1; }
					}
				}
				else f = 1;
			}
			if (ts == 3) {
				if (rand_chislo1 != 0 && rand_chislo1 != 1) {
					for (i = rand_chislo - 1; i <= rand_chislo + 1; i++)
					for (j = rand_chislo1 - 3; j <= rand_chislo1 + 1; j++)
					{
						if (pole[i][j] != 0){ f = 1; }
					}
				}
				else f = 1;
			}
			if (ts == 4) {
				if (rand_chislo1 != 9 && rand_chislo1 != 8) {
					for (i = rand_chislo - 1; i <= rand_chislo + 1; i++)
					for (j = rand_chislo1 - 1; j <= rand_chislo1 + 3; j++)
					{
						if (pole[i][j] != 0){ f = 1; }
					}
				}
				else f = 1;
			}
		} while (f == 1);
		switch (ts){
		case 1: pole[rand_chislo][rand_chislo1] = 1; pole[rand_chislo - 1][rand_chislo1] = 1; pole[rand_chislo - 2][rand_chislo1] = 1; break;
		case 2: pole[rand_chislo][rand_chislo1] = 1; pole[rand_chislo + 1][rand_chislo1] = 1; pole[rand_chislo + 2][rand_chislo1] = 1; break;
		case 3: pole[rand_chislo][rand_chislo1] = 1; pole[rand_chislo][rand_chislo1 - 1] = 1; pole[rand_chislo][rand_chislo1 - 2] = 1; break;
		case 4: pole[rand_chislo][rand_chislo1] = 1; pole[rand_chislo][rand_chislo1 + 1] = 1; pole[rand_chislo][rand_chislo1 + 2] = 1; break;
		}
	}



	for (i = 0; i<4; i++)
	{
		do{
			rand_chislo = 0 + rand() % 10;
			rand_chislo1 = 0 + rand() % 10;
		} while (pole[rand_chislo][rand_chislo1] != 0 || pole[rand_chislo + 1][rand_chislo1] != 0 || pole[rand_chislo - 1][rand_chislo1] != 0 || pole[rand_chislo][rand_chislo1 + 1] != 0 || pole[rand_chislo][rand_chislo1 - 1] != 0 || pole[rand_chislo + 1][rand_chislo1 + 1] != 0 || pole[rand_chislo - 1][rand_chislo1 - 1] != 0 || pole[rand_chislo + 1][rand_chislo1 - 1] != 0 || pole[rand_chislo - 1][rand_chislo1 + 1] != 0);

		pole[rand_chislo][rand_chislo1] = 1;
	}

	return pole[10][10];
}
int ras(int mypole[10][10])
{
	system("cls");
	int i, j, x, y, u, f, e, w, nap, ui;
	SetColor(15, 0);
	printf("\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xBB\n");
	printf("\xba"); printf("\t\t     "); printf("\xba\n");
	printf("\xba"); printf("\t\t     "); printf("\xba\n");
	printf("\xba"); printf("\t\t     "); printf("\xba\n");
	printf("\xba"); printf("\t\t     "); printf("\xba\n");
	printf("\xba"); printf("\t\t     "); printf("\xba\n");
	printf("\xba"); printf("\t\t     "); printf("\xba\n");
	printf("\xba"); printf("\t\t     "); printf("\xba\n");
	printf("\xba"); printf("\t\t     "); printf("\xba\n");
	printf("\xba"); printf("\t\t     "); printf("\xba\n");
	printf("\xba"); printf("\t\t     "); printf("\xba\n");
	printf("\xba"); printf("\t\t     "); printf("\xba\n");
	printf("\xba"); printf("\t\t     "); printf("\xba\n");
	printf("\xba"); printf("\t\t     "); printf("\xba\n");
	printf("\xba"); printf("\t\t     "); printf("\xba\n");
	printf("\xba"); printf("\t\t     "); printf("\xba\n");
	printf("\xba"); printf("\t\t     "); printf("\xba\n");
	printf("\xba"); printf("\t\t     "); printf("\xba\n");
	printf("\xba"); printf("\t\t     "); printf("\xba\n");
	printf("\xba"); printf("\t\t     "); printf("\xba\n");
	printf("\xba"); printf("\t\t     "); printf("\xba\n");
	printf("\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xBC\n");


	GotoXY(40, 0); printf("\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xBB\n");
	GotoXY(40, 1); printf("\xba"); printf("\t\t     "); printf("\xba\n");
	GotoXY(40, 2); printf("\xba"); printf("\t\t     "); printf("\xba\n");
	GotoXY(40, 3); printf("\xba"); printf("\t\t     "); printf("\xba\n");
	GotoXY(40, 4); printf("\xba"); printf("\t\t     "); printf("\xba\n");
	GotoXY(40, 5); printf("\xba"); printf("\t\t     "); printf("\xba\n");
	GotoXY(40, 6); printf("\xba"); printf("\t\t     "); printf("\xba\n");
	GotoXY(40, 7); printf("\xba"); printf("\t\t     "); printf("\xba\n");
	GotoXY(40, 8); printf("\xba"); printf("\t\t     "); printf("\xba\n");
	GotoXY(40, 9); printf("\xba"); printf("\t\t     "); printf("\xba\n");
	GotoXY(40, 10); printf("\xba"); printf("\t\t     "); printf("\xba\n");
	GotoXY(40, 11); printf("\xba"); printf("\t\t     "); printf("\xba\n");
	GotoXY(40, 12); printf("\xba"); printf("\t\t     "); printf("\xba\n");
	GotoXY(40, 13); printf("\xba"); printf("\t\t     "); printf("\xba\n");
	GotoXY(40, 14); printf("\xba"); printf("\t\t     "); printf("\xba\n");
	GotoXY(40, 15); printf("\xba"); printf("\t\t     "); printf("\xba\n");
	GotoXY(40, 16); printf("\xba"); printf("\t\t     "); printf("\xba\n");
	GotoXY(40, 17); printf("\xba"); printf("\t\t     "); printf("\xba\n");
	GotoXY(40, 18); printf("\xba"); printf("\t\t     "); printf("\xba\n");
	GotoXY(40, 19); printf("\xba"); printf("\t\t     "); printf("\xba\n");
	GotoXY(40, 20); printf("\xba"); printf("\t\t     "); printf("\xba\n");
	GotoXY(40, 21); printf("\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xBC\n");

	for (i = 0, x = 1; i<10, x<21; i++, x = x + 2)
	for (j = 0, y = 1; j<10, y<21; j++, y = y + 2)

	{
		GotoXY(x, y);  if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); }
		else{ SetColor(0, 9); printf("  "); }
		GotoXY(x, y + 1); if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); }
		else{ SetColor(0, 9); printf("  "); }
	}

	for (i = 0; i<10; i++)
	for (j = 0; j<10; j++)
		mypole[i][j] = 0;


	GotoXY(24, 7); SetColor(15, 0); printf("поворот-space");
	GotoXY(24, 8); SetColor(15, 0); printf("принять-enter");
	GotoXY(22, 9); SetColor(15, 0); printf("управление-стрелки");
	GotoXY(23, 10); SetColor(15, 0); printf("выход в меню-Esc");
	ui = 0;
	for (u = 1; u<5; u++)
	{
		if (ui == 0)
		for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
		for (j = 0, y = 1; j<10, y<21; j++, y = y + 2)

		{
			GotoXY(x, y); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
			else { if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
			GotoXY(x, y + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
			else { if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
		}
		switch (u)
		{
		case 1:
		{   x = 41; y = nap = 1;
		i = j = 0;
		for (e = x; e<x + 8; e = e + 2)
		{

			GotoXY(e, y); SetColor(0, 14); printf("  ");
			GotoXY(e, y + 1); SetColor(0, 14); printf("  ");
		}
		do {
			f = 0;
			int code = getch();
			if (code == 224)
			{
				code = getch();
				switch (code)
				{
				case 72:
				{
						   if (y != 1)
						   {
							   if (nap == 1)
							   {
								   for (e = x; e<x + 8; e = e + 2)
								   {
									   i = (e - 40) / 2;
									   j = y / 2;
									   GotoXY(e, y); if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); }
									   else{ SetColor(0, 9); printf("  "); }
									   GotoXY(e, y + 1); if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); }
									   else{ SetColor(0, 9); printf("  "); }
								   }
								   y = y - 2;
								   for (e = x; e<x + 8; e = e + 2)
								   {
									   GotoXY(e, y); SetColor(0, 14); printf("  ");
									   GotoXY(e, y + 1); SetColor(0, 14); printf("  ");
								   }
							   }
							   else
							   {
								   if (y != 33){
									   for (e = y; e<y + 8; e = e + 2)
									   {
										   i = (x - 40) / 2;
										   j = e / 2;
										   GotoXY(x, e); if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); }
										   else{ SetColor(0, 9); printf("  "); }
										   GotoXY(x, e + 1); if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); }
										   else{ SetColor(0, 9); printf("  "); }
									   }
									   y = y - 2;
									   for (e = y; e<y + 8; e = e + 2)
									   {
										   GotoXY(x, e); SetColor(0, 14); printf("  ");
										   GotoXY(x, e + 1); SetColor(0, 14); printf("  ");
									   }
								   }
							   }

						   }
						   break;

				}
				case 77:
				{
						   if (nap == 1)
						   {
							   if (x != 53)
							   {
								   for (e = x; e<x + 8; e = e + 2){
									   i = (e - 40) / 2;
									   j = y / 2;
									   GotoXY(e, y); if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); }
									   else{ SetColor(0, 9); printf("  "); }
									   GotoXY(e, y + 1); if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); }
									   else{ SetColor(0, 9); printf("  "); }
								   }
								   x = x + 2;
								   for (e = x; e<x + 8; e = e + 2)
								   {
									   GotoXY(e, y); SetColor(0, 14); printf("  ");
									   GotoXY(e, y + 1); SetColor(0, 14); printf("  ");

								   }
							   }
						   }
						   else {
							   if (x != 59){
								   for (e = y; e<y + 8; e = e + 2)
								   {
									   i = (x - 40) / 2;
									   j = e / 2;
									   GotoXY(x, e); if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); }
									   else{ SetColor(0, 9); printf("  "); }
									   GotoXY(x, e + 1); if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); }
									   else{ SetColor(0, 9); printf("  "); }
								   }
								   x = x + 2;
								   for (e = y; e<y + 8; e = e + 2)
								   {
									   GotoXY(x, e); SetColor(0, 14); printf("  ");
									   GotoXY(x, e + 1); SetColor(0, 14); printf("  ");
								   }
							   }
						   }
						   break;
				}
				case 80:
				{
						   if (nap == 1)
						   {
							   if (y != 19)
							   {
								   for (e = x; e<x + 8; e = e + 2){
									   i = (e - 40) / 2;
									   j = y / 2;
									   GotoXY(e, y); if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); }
									   else{ SetColor(0, 9); printf("  "); }
									   GotoXY(e, y + 1); if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); }
									   else{ SetColor(0, 9); printf("  "); }
								   }
								   y = y + 2;
								   for (e = x; e<x + 8; e = e + 2)
								   {
									   GotoXY(e, y); SetColor(0, 14); printf("  ");
									   GotoXY(e, y + 1); SetColor(0, 14); printf("  ");
								   }
							   }
						   }
						   else {
							   if (y != 13){
								   for (e = y; e<y + 8; e = e + 2)
								   {
									   i = (x - 40) / 2;
									   j = e / 2;
									   GotoXY(x, e); if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); }
									   else{ SetColor(0, 9); printf("  "); }
									   GotoXY(x, e + 1); if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); }
									   else{ SetColor(0, 9); printf("  "); }
								   }
								   y = y + 2;
								   for (e = y; e<y + 8; e = e + 2)
								   {
									   GotoXY(x, e); SetColor(0, 14); printf("  ");
									   GotoXY(x, e + 1); SetColor(0, 14); printf("  ");
								   }
							   }
						   }
						   break;
				}
				case 75:
				{ if (nap == 1)
				{
					if (x != 41)
					{
						for (e = x; e<x + 8; e = e + 2){
							i = (e - 40) / 2;
							j = y / 2;
							GotoXY(e, y); if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); }
							else{ SetColor(0, 9); printf("  "); }
							GotoXY(e, y + 1); if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); }
							else{ SetColor(0, 9); printf("  "); }
						}
						x = x - 2;
						for (e = x; e<x + 8; e = e + 2)
						{
							GotoXY(e, y); SetColor(0, 14); printf("  ");
							GotoXY(e, y + 1); SetColor(0, 14); printf("  ");

						}
					}
				}
				else {
					if (x != 41){
						for (e = y; e<y + 8; e = e + 2)
						{
							i = (x - 40) / 2;
							j = e / 2;
							GotoXY(x, e); if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); }
							else{ SetColor(0, 9); printf("  "); }
							GotoXY(x, e + 1); if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); }
							else{ SetColor(0, 9); printf("  "); }
						}
						x = x - 2;
						for (e = y; e<y + 8; e = e + 2)
						{
							GotoXY(x, e); SetColor(0, 14); printf("  ");
							GotoXY(x, e + 1); SetColor(0, 14); printf("  ");
						}
					}
				}
				break;
				}
				}
			}

			else {
				switch (code){
				case 32:
				{
						   if (nap == 1 && y<15 || nap == -1 && x<55)
						   {
							   nap = nap*(-1);
							   if (nap == 1)
							   {
								   for (e = y; e<y + 8; e = e + 2)
								   {
									   i = (x - 40) / 2;
									   j = e / 2;
									   GotoXY(x, e); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
									   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
									   GotoXY(x, e + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
									   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
								   }



								   for (e = x; e<x + 8; e = e + 2)
								   {
									   GotoXY(e, y); SetColor(0, 14); printf("  ");
									   GotoXY(e, y + 1); SetColor(0, 14); printf("  ");

								   }

							   }
							   else {
								   for (e = x; e<x + 8; e = e + 2){
									   i = (e - 40) / 2;
									   j = y / 2;
									   GotoXY(e, y); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
									   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
									   GotoXY(e, y + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
									   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
								   }

								   for (e = y; e<y + 8; e = e + 2)
								   {
									   GotoXY(x, e); SetColor(0, 14); printf("  ");
									   GotoXY(x, e + 1); SetColor(0, 14); printf("  ");
								   }
							   }
						   }
						   break;
				}
				case 13:{


							if (nap == 1)
							{
								for (e = x; e<x + 8; e = e + 2)
								{
									i = (e - 40) / 2;
									j = y / 2;
									mypole[i][j] = 1;
								}

							}
							else {

								for (e = y; e<y + 8; e = e + 2)
								{
									i = (x - 40) / 2;
									j = e / 2;
									mypole[i][j] = 1;
								}
							}

							f = 1; break;
				}
				case 27: {f = 1; ui = 1; break; }


				}

			}
		} while (f != 1);
		break;

		}
		case 2:
		{ for (w = 0; w<2; w++)
		if (ui == 0)
		{
			for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
			for (j = 0, y = 1; j<10, y<21; j++, y = y + 2)

			{
				GotoXY(x, y); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
				else { if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
				GotoXY(x, y + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
				else { if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
			}
			x = 41; y = nap = 1;
			i = j = 0;
			for (e = x; e<x + 6; e = e + 2)
			{

				GotoXY(e, y); SetColor(0, 14); printf("  ");
				GotoXY(e, y + 1); SetColor(0, 14); printf("  ");
			}
			do {
				f = 0;
				int code = getch();
				if (code == 224)
				{
					code = getch();
					switch (code)
					{
						{
					case 72:
					{
							   if (y != 1)
							   {
								   if (nap == 1)
								   {
									   for (e = x; e<x + 6; e = e + 2)
									   {
										   i = (e - 40) / 2;
										   j = y / 2;
										   GotoXY(e, y); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
										   GotoXY(e, y + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
									   }
									   y = y - 2;
									   for (e = x; e<x + 6; e = e + 2)
									   {
										   GotoXY(e, y); SetColor(0, 14); printf("  ");
										   GotoXY(e, y + 1); SetColor(0, 14); printf("  ");
									   }
								   }
								   else
								   {
									   if (y != 33){
										   for (e = y; e<y + 6; e = e + 2)
										   {
											   i = (x - 40) / 2;
											   j = e / 2;
											   GotoXY(x, e); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
											   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
											   GotoXY(x, e + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
											   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
										   }
										   y = y - 2;
										   for (e = y; e<y + 6; e = e + 2)
										   {
											   GotoXY(x, e); SetColor(0, 14); printf("  ");
											   GotoXY(x, e + 1); SetColor(0, 14); printf("  ");
										   }
									   }
								   }

							   }

							   break;

					}
					case 77:
					{
							   if (nap == 1)
							   {
								   if (x != 55)
								   {
									   for (e = x; e<x + 6; e = e + 2){
										   i = (e - 40) / 2;
										   j = y / 2;
										   GotoXY(e, y); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
										   GotoXY(e, y + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
									   }
									   x = x + 2;
									   for (e = x; e<x + 6; e = e + 2)
									   {
										   GotoXY(e, y); SetColor(0, 14); printf("  ");
										   GotoXY(e, y + 1); SetColor(0, 14); printf("  ");

									   }
								   }
							   }
							   else {
								   if (x != 59){
									   for (e = y; e<y + 6; e = e + 2)
									   {
										   i = (x - 40) / 2;
										   j = e / 2;
										   GotoXY(x, e); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
										   GotoXY(x, e + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
									   }
									   x = x + 2;
									   for (e = y; e<y + 6; e = e + 2)
									   {
										   GotoXY(x, e); SetColor(0, 14); printf("  ");
										   GotoXY(x, e + 1); SetColor(0, 14); printf("  ");
									   }
								   }
							   }
							   break;
					}
					case 80:
					{
							   if (nap == 1)
							   {
								   if (y != 19)
								   {
									   for (e = x; e<x + 6; e = e + 2){
										   i = (e - 40) / 2;
										   j = y / 2;
										   GotoXY(e, y); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
										   GotoXY(e, y + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
									   }
									   y = y + 2;
									   for (e = x; e<x + 6; e = e + 2)
									   {
										   GotoXY(e, y); SetColor(0, 14); printf("  ");
										   GotoXY(e, y + 1); SetColor(0, 14); printf("  ");
									   }
								   }
							   }
							   else {
								   if (y != 15){
									   for (e = y; e<y + 6; e = e + 2)
									   {
										   i = (x - 40) / 2;
										   j = e / 2;
										   GotoXY(x, e); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
										   GotoXY(x, e + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
									   }
									   y = y + 2;
									   for (e = y; e<y + 6; e = e + 2)
									   {
										   GotoXY(x, e); SetColor(0, 14); printf("  ");
										   GotoXY(x, e + 1); SetColor(0, 14); printf("  ");
									   }
								   }
							   }
							   break;
					}
					case 75:
					{ if (nap == 1)
					{
						if (x != 41)
						{
							for (e = x; e<x + 6; e = e + 2){
								i = (e - 40) / 2;
								j = y / 2;
								GotoXY(e, y); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
								else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
								GotoXY(e, y + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
								else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
							}
							x = x - 2;
							for (e = x; e<x + 6; e = e + 2)
							{
								GotoXY(e, y); SetColor(0, 14); printf("  ");
								GotoXY(e, y + 1); SetColor(0, 14); printf("  ");

							}
						}
					}
					else {
						if (x != 41){
							for (e = y; e<y + 6; e = e + 2)
							{
								i = (x - 40) / 2;
								j = e / 2;
								GotoXY(x, e); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
								else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
								GotoXY(x, e + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
								else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
							}
							x = x - 2;
							for (e = y; e<y + 6; e = e + 2)
							{
								GotoXY(x, e); SetColor(0, 14); printf("  ");
								GotoXY(x, e + 1); SetColor(0, 14); printf("  ");
							}
						}
					}
					break;
					}
						}
					}
				}
				else {
					switch (code){
					case 32:
					{
							   if (nap == 1 && y<17 || nap == -1 && x<57)
							   {
								   nap = nap*(-1);
								   if (nap == 1)
								   {
									   for (e = y; e<y + 6; e = e + 2)
									   {
										   i = (x - 40) / 2;
										   j = e / 2;
										   GotoXY(x, e); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
										   GotoXY(x, e + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
									   }



									   for (e = x; e<x + 6; e = e + 2)
									   {
										   GotoXY(e, y); SetColor(0, 14); printf("  ");
										   GotoXY(e, y + 1); SetColor(0, 14); printf("  ");

									   }

								   }
								   else {
									   for (e = x; e<x + 6; e = e + 2){
										   i = (e - 40) / 2;
										   j = y / 2;
										   GotoXY(e, y); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
										   GotoXY(e, y + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
									   }

									   for (e = y; e<y + 6; e = e + 2)
									   {
										   GotoXY(x, e); SetColor(0, 14); printf("  ");
										   GotoXY(x, e + 1); SetColor(0, 14); printf("  ");
									   }
								   }
							   }
							   break;
					}
					case 13:{int pr = f = 0;


						if (nap == 1)
						{
							for (e = x - 2; e <= x + 6; e = e + 2)
							for (int a = y - 2; a <= y + 2; a = a + 2)
							{
								i = (e - 40) / 2;
								j = a / 2;
								if (i<10 && j<10)if (mypole[i][j] == 1)
									pr = 1;
							}
							if (pr == 0)
							for (e = x; e<x + 6; e = e + 2)

							{
								i = (e - 40) / 2;
								j = y / 2;
								mypole[i][j] = 1; f = 1;
							}

						}
						else {
							for (e = y - 2; e <= y + 6; e = e + 2)
							for (int a = x - 2; a <= x + 2; a = a + 2)
							{
								i = (a - 40) / 2;
								j = e / 2;
								if (i<10 && j<10)if (mypole[i][j] == 1)
									pr = 1;
							}
							if (pr == 0)
							for (e = y; e<y + 6; e = e + 2)
							{
								i = (x - 40) / 2;
								j = e / 2;
								mypole[i][j] = 1; f = 1;
							}
						}

						break;
					}
					case 27: {f = 1; ui = 1; break; }


					}
				}

			} while (f != 1);
		}
		break;

		}

		case 3:
		{ for (w = 0; w<3; w++)
		if (ui == 0)
		{
			for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
			for (j = 0, y = 1; j<10, y<21; j++, y = y + 2)

			{
				GotoXY(x, y); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
				else { if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
				GotoXY(x, y + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
				else { if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
			}
			x = 41; y = nap = 1;
			i = j = 0;
			for (e = x; e<x + 4; e = e + 2)
			{

				GotoXY(e, y); SetColor(0, 14); printf("  ");
				GotoXY(e, y + 1); SetColor(0, 14); printf("  ");
			}
			do {
				f = 0;
				int code = getch();
				if (code == 224)
				{
					code = getch();
					switch (code)
					{
					case 72:
					{
							   if (y != 1)
							   {
								   if (nap == 1)
								   {
									   for (e = x; e<x + 4; e = e + 2)
									   {
										   i = (e - 40) / 2;
										   j = y / 2;
										   GotoXY(e, y); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
										   GotoXY(e, y + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
									   }
									   y = y - 2;
									   for (e = x; e<x + 4; e = e + 2)
									   {
										   GotoXY(e, y); SetColor(0, 14); printf("  ");
										   GotoXY(e, y + 1); SetColor(0, 14); printf("  ");
									   }
								   }
								   else
								   {
									   if (y != 33){
										   for (e = y; e<y + 4; e = e + 2)
										   {
											   i = (x - 40) / 2;
											   j = e / 2;
											   GotoXY(x, e); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
											   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
											   GotoXY(x, e + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
											   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
										   }
										   y = y - 2;
										   for (e = y; e<y + 4; e = e + 2)
										   {
											   GotoXY(x, e); SetColor(0, 14); printf("  ");
											   GotoXY(x, e + 1); SetColor(0, 14); printf("  ");
										   }
									   }
								   }

							   }

							   break;

					}
					case 77:
					{
							   if (nap == 1)
							   {
								   if (x != 57)
								   {
									   for (e = x; e<x + 4; e = e + 2){
										   i = (e - 40) / 2;
										   j = y / 2;
										   GotoXY(e, y); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
										   GotoXY(e, y + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
									   }
									   x = x + 2;
									   for (e = x; e<x + 4; e = e + 2)
									   {
										   GotoXY(e, y); SetColor(0, 14); printf("  ");
										   GotoXY(e, y + 1); SetColor(0, 14); printf("  ");

									   }
								   }
							   }
							   else {
								   if (x != 59){
									   for (e = y; e<y + 4; e = e + 2)
									   {
										   i = (x - 40) / 2;
										   j = e / 2;
										   GotoXY(x, e); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
										   GotoXY(x, e + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
									   }
									   x = x + 2;
									   for (e = y; e<y + 4; e = e + 2)
									   {
										   GotoXY(x, e); SetColor(0, 14); printf("  ");
										   GotoXY(x, e + 1); SetColor(0, 14); printf("  ");
									   }
								   }
							   }
							   break;
					}
					case 80:
					{
							   if (nap == 1)
							   {
								   if (y != 19)
								   {
									   for (e = x; e<x + 4; e = e + 2){
										   i = (e - 40) / 2;
										   j = y / 2;
										   GotoXY(e, y); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
										   GotoXY(e, y + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
									   }
									   y = y + 2;
									   for (e = x; e<x + 4; e = e + 2)
									   {
										   GotoXY(e, y); SetColor(0, 14); printf("  ");
										   GotoXY(e, y + 1); SetColor(0, 14); printf("  ");
									   }
								   }
							   }
							   else {
								   if (y != 17){
									   for (e = y; e<y + 4; e = e + 2)
									   {
										   i = (x - 40) / 2;
										   j = e / 2;
										   GotoXY(x, e); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
										   GotoXY(x, e + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
									   }
									   y = y + 2;
									   for (e = y; e<y + 4; e = e + 2)
									   {
										   GotoXY(x, e); SetColor(0, 14); printf("  ");
										   GotoXY(x, e + 1); SetColor(0, 14); printf("  ");
									   }
								   }
							   }
							   break;
					}
					case 75:
					{ if (nap == 1)
					{
						if (x != 41)
						{
							for (e = x; e<x + 4; e = e + 2){
								i = (e - 40) / 2;
								j = y / 2;
								GotoXY(e, y); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
								else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
								GotoXY(e, y + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
								else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
							}
							x = x - 2;
							for (e = x; e<x + 4; e = e + 2)
							{
								GotoXY(e, y); SetColor(0, 14); printf("  ");
								GotoXY(e, y + 1); SetColor(0, 14); printf("  ");

							}
						}
					}
					else {
						if (x != 41){
							for (e = y; e<y + 4; e = e + 2)
							{
								i = (x - 40) / 2;
								j = e / 2;
								GotoXY(x, e); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
								else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
								GotoXY(x, e + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
								else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
							}
							x = x - 2;
							for (e = y; e<y + 4; e = e + 2)
							{
								GotoXY(x, e); SetColor(0, 14); printf("  ");
								GotoXY(x, e + 1); SetColor(0, 14); printf("  ");
							}
						}
					}
					break;
					}
					}
				}
				else {
					switch (code){
					case 32:
					{
							   if (nap == 1 && y<19 || nap == -1 && x<59)
							   {
								   nap = nap*(-1);
								   if (nap == 1)
								   {
									   for (e = y; e<y + 4; e = e + 2)
									   {
										   i = (x - 40) / 2;
										   j = e / 2;
										   GotoXY(x, e); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
										   GotoXY(x, e + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
									   }



									   for (e = x; e<x + 4; e = e + 2)
									   {
										   GotoXY(e, y); SetColor(0, 14); printf("  ");
										   GotoXY(e, y + 1); SetColor(0, 14); printf("  ");

									   }

								   }
								   else {
									   for (e = x; e<x + 4; e = e + 2){
										   i = (e - 40) / 2;
										   j = y / 2;
										   GotoXY(e, y); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
										   GotoXY(e, y + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
										   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
									   }

									   for (e = y; e<y + 4; e = e + 2)
									   {
										   GotoXY(x, e); SetColor(0, 14); printf("  ");
										   GotoXY(x, e + 1); SetColor(0, 14); printf("  ");
									   }
								   }
							   }
							   break;
					}
					case 13:{int pr = f = 0;


						if (nap == 1)
						{
							for (e = x - 2; e <= x + 4; e = e + 2)
							for (int a = y - 2; a <= y + 2; a = a + 2)
							{
								i = (e - 40) / 2;
								j = a / 2;
								if (i<10 && j<10)if (mypole[i][j] == 1)
									pr = 1;
							}
							if (pr == 0)
							for (e = x; e<x + 4; e = e + 2)

							{
								i = (e - 40) / 2;
								j = y / 2;
								mypole[i][j] = 1; f = 1;
							}

						}
						else {
							for (e = y - 2; e <= y + 4; e = e + 2)
							for (int a = x - 2; a <= x + 2; a = a + 2)
							{
								i = (a - 40) / 2;
								j = e / 2;
								if (i<10 && j<10)if (mypole[i][j] == 1)
									pr = 1;
							}
							if (pr == 0)
							for (e = y; e<y + 4; e = e + 2)
							{
								i = (x - 40) / 2;
								j = e / 2;
								mypole[i][j] = 1; f = 1;
							}
						}

						break;
					}
					case 27: {f = 1; ui = 1; break; }

					}
				}

			} while (f != 1);
		}
		break;

		}

		case 4:
		{ for (w = 0; w<4; w++)
		if (ui == 0)
		{
			for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
			for (j = 0, y = 1; j<10, y<21; j++, y = y + 2)

			{
				GotoXY(x, y); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
				else { if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
				GotoXY(x, y + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
				else { if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
			}
			x = 41; y = 1;
			i = j = 0;
			e = x;
			{

				GotoXY(e, y); SetColor(0, 14); printf("  ");
				GotoXY(e, y + 1); SetColor(0, 14); printf("  ");
			}
			do {
				f = 0;
				int code = getch();
				if (code == 224)
				{
					code = getch();
					switch (code)
					{
					case 72:
					{
							   if (y != 1)
							   {

								   e = x;
								   {
									   i = (e - 40) / 2;
									   j = y / 2;
									   GotoXY(e, y); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
									   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
									   GotoXY(e, y + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
									   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
								   }
								   y = y - 2;
								   e = x;
								   {
									   GotoXY(e, y); SetColor(0, 14); printf("  ");
									   GotoXY(e, y + 1); SetColor(0, 14); printf("  ");
								   }
							   }




							   break;

					}
					case 77:
					{

							   if (x != 59)
							   {
								   e = x; {
									   i = (e - 40) / 2;
									   j = y / 2;
									   GotoXY(e, y); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
									   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
									   GotoXY(e, y + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
									   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
								   }
								   x = x + 2;
								   e = x;
								   {
									   GotoXY(e, y); SetColor(0, 14); printf("  ");
									   GotoXY(e, y + 1); SetColor(0, 14); printf("  ");

								   }
							   }


							   break;
					}
					case 80:
					{


							   if (y != 19)
							   {
								   e = x; {
									   i = (e - 40) / 2;
									   j = y / 2;
									   GotoXY(e, y); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
									   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
									   GotoXY(e, y + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
									   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
								   }
								   y = y + 2;
								   e = x;
								   {
									   GotoXY(e, y); SetColor(0, 14); printf("  ");
									   GotoXY(e, y + 1); SetColor(0, 14); printf("  ");
								   }
							   }


							   break;
					}
					case 75:
					{
							   if (x != 41)
							   {
								   e = x; {
									   i = (e - 40) / 2;
									   j = y / 2;
									   GotoXY(e, y); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
									   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
									   GotoXY(e, y + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
									   else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
								   }
								   x = x - 2;
								   e = x;
								   {
									   GotoXY(e, y); SetColor(0, 14); printf("  ");
									   GotoXY(e, y + 1); SetColor(0, 14); printf("  ");

								   }
							   }


							   break;
					}
					}
				}
				else {
					switch (code) {
					case 13:{
								int pr = f = 0;


								for (e = x - 2; e <= x + 2; e = e + 2)
								for (int a = y - 2; a <= y + 2; a = a + 2)
								{
									i = (e - 40) / 2;
									j = a / 2;
									if (i<10 && j<10)if (mypole[i][j] == 1)
										pr = 1;
								}
								if (pr == 0)
								for (e = x; e<x + 2; e = e + 2)

								{
									i = (e - 40) / 2;
									j = y / 2;
									mypole[i][j] = 1; f = 1;
								}
								break;
					}
					case 27: {f = 1; ui = 1; break; }

						break;
					}
				}

			} while (f != 1);

		}


		break;
		}

			break;
		}
	}

	return ui;
}

int menum()
{
	int f = 1, k;
	SetColor(0, 0);
	system("cls");
	GotoXY(30, 10); SetColor(15, 0); printf("Главное меню");
	GotoXY(30, 12); SetColor(15, 0); printf("["); SetColor(0, 2); printf("Новая игра"); SetColor(15, 0); printf("]");
	GotoXY(32, 13); SetColor(15, 0); printf("["); printf("выход"); SetColor(15, 0); printf("]");
	do {
		k = 0;
		int code = getch();
		if (code == 224)
		{
			code = getch();
			switch (code)
			{
			case 80: {f = f*(-1);
				if (f == 1){
					GotoXY(30, 12); SetColor(15, 0); printf("["); SetColor(0, 2); printf("Новая игра"); SetColor(15, 0); printf("]");
					GotoXY(32, 13); SetColor(15, 0); printf("выход");
				}
				else{
					GotoXY(30, 12); SetColor(15, 0); printf("["); printf("Новая игра"); printf("]");
					GotoXY(32, 13); SetColor(15, 0); printf("["); SetColor(0, 2); printf("выход"); SetColor(15, 0); printf("]");
				}
				break; }

			case 72: {f = f*(-1);
				if (f == 1){
					GotoXY(30, 12); SetColor(15, 0); printf("["); SetColor(0, 2); printf("Новая игра"); SetColor(15, 0); printf("]");
					GotoXY(32, 13); SetColor(15, 0); printf("выход");
				}
				else{
					GotoXY(30, 12); SetColor(15, 0); printf("["); printf("Новая игра"); printf("]");
					GotoXY(32, 13); SetColor(15, 0); printf("["); SetColor(0, 2); printf("выход"); SetColor(15, 0); printf("]");
				}
				break; }

			}
		}

		else {
			switch (code)
			{
			case 13: k = 1; break;
			}

		}

	} while (k == 0);
	return f;
}

int comp(int mypole[10][10], int udar, int ud[2], int hod[1])
{

	int i, j, f, per, n, m, x, y, k, str, sto, h, g;
	int pri, prj;


	srand(time(NULL)); GotoXY(24, 14); SetColor(15, 0); printf("  Ходит комп ");
	do {
		f = 1; per = 0; k = 0; GotoXY(28, 16); SetColor(15, 0); printf("      "); Sleep(1000);




		h = 0; if (hod[0] == 5){
			for (n = ud[0] - 1; n <= ud[0] + 1 && n<10; n++)
			for (m = ud[1] - 1; m <= ud[1] + 1 && m<10; m++)
			if (mypole[n][m] == 1)
			{
				h = 1;
			}
			if (h == 0)
			{
				mypole[ud[0]][ud[1]] = 5;
				for (n = ud[0] - 1; n <= ud[0] + 1 && n<10; n++)
				for (m = ud[1] - 1; m <= ud[1] + 1 && m<10; m++)
				if (mypole[n][m] == 0)
				{
					mypole[n][m] = 3;
				}
			}
			if (h == 1) {
				per = 1; srand(time(NULL));
				do{
					pri = 1 + rand() % 4; prj = 0;
					switch (pri){
					case 1:
					{if (mypole[ud[0] - 1][ud[1]] == 0 && ud[0] != 0){ mypole[ud[0] - 1][ud[1]] = 3; GotoXY(28, 16); SetColor(15, 0); Sleep(1000); printf("Мимо!"); prj = 1; per = 1; f = 1; }
					if (mypole[ud[0] - 1][ud[1]] == 1 && ud[0] != 0) { mypole[ud[0] - 1][ud[1]] = 4; GotoXY(28, 16); SetColor(15, 0); printf("Попал!"); udar++; Sleep(1000); printf("\x07"); f = 0; prj = 1; per = 1; hod[0] = 1; }
					break; }
					case 2:
					{if (mypole[ud[0] + 1][ud[1]] == 0 && ud[0] != 9){ mypole[ud[0] + 1][ud[1]] = 3; GotoXY(28, 16); SetColor(15, 0); Sleep(1000); printf("Мимо!"); prj = 1; per = 1; f = 1; }
					if (mypole[ud[0] + 1][ud[1]] == 1 && ud[0] != 9) { mypole[ud[0] + 1][ud[1]] = 4; GotoXY(28, 16); SetColor(15, 0); printf("Попал!"); udar++; Sleep(1000); printf("\x07"); f = 0; prj = 1; per = 1; hod[0] = 1; }
					break; }
					case 3: {if (mypole[ud[0]][ud[1] - 1] == 0 && ud[1] != 0){ mypole[ud[0]][ud[1] - 1] = 3; GotoXY(28, 16); SetColor(15, 0); Sleep(1000); printf("Мимо!"); prj = 1; per = 1; f = 1; }
							if (mypole[ud[0]][ud[1] - 1] == 1 && ud[1] != 0) { mypole[ud[0]][ud[1] - 1] = 4; GotoXY(28, 16); SetColor(15, 0); printf("Попал!"); udar++; Sleep(1000); printf("\x07"); f = 0; prj = 1; per = 1; hod[0] = 1; }
							break; }
					case 4:  {if (mypole[ud[0]][ud[1] + 1] == 0 && ud[1] != 9){ mypole[ud[0]][ud[1] + 1] = 3; GotoXY(28, 16); SetColor(15, 0); Sleep(1000); printf("Мимо!"); prj = 1; per = 1; f = 1; }
							 if (mypole[ud[0]][ud[1] + 1] == 1 && ud[1] != 9) { mypole[ud[0]][ud[1] + 1] = 4; GotoXY(28, 16); SetColor(15, 0); printf("Попал!"); udar++; Sleep(1000); printf("\x07"); f = 0; prj = 1; per = 1; hod[0] = 1; }
							 break; }
					}
				} while (prj == 0);
			}
		}

		if (hod[0] == 1)
		{
			for (i = 0; i<10; i++)
			for (j = 0; j<10; j++)
			{
				h = 0;
				if (mypole[i][j] == 4 || mypole[i][j] == 5)
				{
					mypole[i][j] = 5;
					if (i>0){
						if (mypole[i - 1][j] == 1){
							h = 1; mypole[i - 1][j] = 5; GotoXY(28, 16); SetColor(15, 0); printf("Попал!"); Sleep(1000); printf("\x07");
							for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
							for (j = 0, y = 1; j<10, y<21; j++, y = y + 2)

							{
								GotoXY(x, y); switch (mypole[i][j]){
								case 0:if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); }
									   else{ SetColor(0, 9); printf("  "); }break;
								case 1:SetColor(0, 12); printf("  "); break;
								case 2:SetColor(0, 7); printf("  "); break;
								case 3: SetColor(0, 11); printf("  "); break;
								case 4:SetColor(0, 7); printf("  "); break;
								case 5:SetColor(0, 7); printf("  "); break;
								}
								GotoXY(x, y + 1); switch (mypole[i][j]){
								case 0:if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); }
									   else{ SetColor(0, 9); printf("  "); }break;
								case 1:SetColor(0, 12); printf("  "); break;
								case 2:SetColor(0, 7); printf("  "); break;
								case 3:SetColor(0, 11); printf("  "); break;
								case 4:SetColor(0, 7); printf("  "); break;
								case 5:SetColor(0, 7); printf("  "); break;
								}
							}
						}
					}
					if (i<9){
						if (mypole[i + 1][j] == 1){
							h = 1; mypole[i + 1][j] = 5; GotoXY(28, 16); SetColor(15, 0); printf("Попал!"); Sleep(1000); printf("\x07");
							for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
							for (j = 0, y = 1; j<10, y<21; j++, y = y + 2)

							{
								GotoXY(x, y); switch (mypole[i][j]){
								case 0:if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); }
									   else{ SetColor(0, 9); printf("  "); }break;
								case 1:SetColor(0, 12); printf("  "); break;
								case 2:SetColor(0, 7); printf("  "); break;
								case 3: SetColor(0, 11); printf("  "); break;
								case 4:SetColor(0, 7); printf("  "); break;
								case 5:SetColor(0, 7); printf("  "); break;
								}
								GotoXY(x, y + 1); switch (mypole[i][j]){
								case 0:if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); }
									   else{ SetColor(0, 9); printf("  "); }break;
								case 1:SetColor(0, 12); printf("  "); break;
								case 2:SetColor(0, 7); printf("  "); break;
								case 3:SetColor(0, 11); printf("  "); break;
								case 4:SetColor(0, 7); printf("  "); break;
								case 5:SetColor(0, 7); printf("  "); break;
								}
							}
						}
					}
					if (j>0){
						if (mypole[i][j - 1] == 1){
							h = 1; mypole[i][j - 1] = 5; GotoXY(28, 16); SetColor(15, 0); printf("Попал!"); Sleep(1000); printf("\x07");
							for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
							for (j = 0, y = 1; j<10, y<21; j++, y = y + 2)

							{
								GotoXY(x, y); switch (mypole[i][j]){
								case 0:if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); }
									   else{ SetColor(0, 9); printf("  "); }break;
								case 1:SetColor(0, 12); printf("  "); break;
								case 2:SetColor(0, 7); printf("  "); break;
								case 3: SetColor(0, 11); printf("  "); break;
								case 4:SetColor(0, 7); printf("  "); break;
								case 5:SetColor(0, 7); printf("  "); break;
								}
								GotoXY(x, y + 1); switch (mypole[i][j]){
								case 0:if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); }
									   else{ SetColor(0, 9); printf("  "); }break;
								case 1:SetColor(0, 12); printf("  "); break;
								case 2:SetColor(0, 7); printf("  "); break;
								case 3:SetColor(0, 11); printf("  "); break;
								case 4:SetColor(0, 7); printf("  "); break;
								case 5:SetColor(0, 7); printf("  "); break;
								}
							}
						}
					}
					if (j<9){
						if (mypole[i][j + 1] == 1){
							h = 1; mypole[i][j + 1] = 5; GotoXY(28, 16); SetColor(15, 0); printf("Попал!"); Sleep(1000); printf("\x07");
							for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
							for (j = 0, y = 1; j<10, y<21; j++, y = y + 2)

							{
								GotoXY(x, y); switch (mypole[i][j]){
								case 0:if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); }
									   else{ SetColor(0, 9); printf("  "); }break;
								case 1:SetColor(0, 12); printf("  "); break;
								case 2:SetColor(0, 7); printf("  "); break;
								case 3: SetColor(0, 11); printf("  "); break;
								case 4:SetColor(0, 7); printf("  "); break;
								case 5:SetColor(0, 7); printf("  "); break;
								}
								GotoXY(x, y + 1); switch (mypole[i][j]){
								case 0:if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); }
									   else{ SetColor(0, 9); printf("  "); }break;
								case 1:SetColor(0, 12); printf("  "); break;
								case 2:SetColor(0, 7); printf("  "); break;
								case 3:SetColor(0, 11); printf("  "); break;
								case 4:SetColor(0, 7); printf("  "); break;
								case 5:SetColor(0, 7); printf("  "); break;
								}
							}
						}
					}
				}
			}

			for (i = 0; i<10; i++)
			for (j = 0; j<10; j++)
			{
				h = 0;
				if (mypole[i][j] == 5)
				{
					if (i>0){ if (mypole[i - 1][j] == 0){ h = 1; mypole[i - 1][j] = 3; } }
					if (i<9){ if (mypole[i + 1][j] == 0){ h = 1; mypole[i + 1][j] = 3; } }
					if (j>0){ if (mypole[i][j - 1] == 0){ h = 1; mypole[i][j - 1] = 3; } }
					if (j<9){ if (mypole[i][j + 1] == 0){ h = 1; mypole[i][j + 1] = 3; } }
					if (i>0 && j>0){ if (mypole[i - 1][j - 1] == 0){ h = 1; mypole[i - 1][j - 1] = 3; } }
					if (i>0 && j<9){ if (mypole[i - 1][j + 1] == 0){ h = 1; mypole[i - 1][j + 1] = 3; } }
					if (i<9 && j<9){ if (mypole[i + 1][j + 1] == 0){ h = 1; mypole[i + 1][j + 1] = 3; } }
					if (i<9 && j>0){ if (mypole[i + 1][j - 1] == 0){ h = 1; mypole[i + 1][j - 1] = 3; } }
				}
			}

		}
		udar = 0;
		for (i = 0; i<10; i++)
		for (j = 0; j<10; j++)
		if (mypole[i][j] == 4 || mypole[i][j] == 5)
			udar++;

		if (udar == 20)
		{
			f = 1; per = 1;
		}
		for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
		for (j = 0, y = 1; j<10, y<21; j++, y = y + 2)

		{
			GotoXY(x, y); switch (mypole[i][j]){
			case 0:if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); }
				   else{ SetColor(0, 9); printf("  "); }break;
			case 1:SetColor(0, 12); printf("  "); break;
			case 2:SetColor(0, 7); printf("  "); break;
			case 3: SetColor(0, 11); printf("  "); break;
			case 4:SetColor(0, 7); printf("  "); break;
			case 5:SetColor(0, 7); printf("  "); break;
			}
			GotoXY(x, y + 1); switch (mypole[i][j]){
			case 0:if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); }
				   else{ SetColor(0, 9); printf("  "); }break;
			case 1:SetColor(0, 12); printf("  "); break;
			case 2:SetColor(0, 7); printf("  "); break;
			case 3:SetColor(0, 11); printf("  "); break;
			case 4:SetColor(0, 7); printf("  "); break;
			case 5:SetColor(0, 7); printf("  "); break;
			}
		}

		if (per == 0)
		{
			do{
				i = 0 + rand() % 10;
				j = 0 + rand() % 10;
			} while (mypole[i][j]>1);
			if (mypole[i][j] == 1){ mypole[i][j] = 4; ud[0] = i; ud[1] = j; GotoXY(28, 16); SetColor(15, 0); printf("Попал!"); hod[0] = 5; Sleep(1000); printf("\x07"); f = 0; }

			if (mypole[i][j] == 0) { mypole[i][j] = 3; f = 1; GotoXY(28, 16); SetColor(15, 0); printf("Мимо!"); Sleep(1000); }

		}

		Sleep(1000);
		for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
		for (j = 0, y = 1; j<10, y<21; j++, y = y + 2)

		{
			GotoXY(x, y); switch (mypole[i][j]){
			case 0:if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); }
				   else{ SetColor(0, 9); printf("  "); }break;
			case 1:SetColor(0, 12); printf("  "); break;
			case 2:SetColor(0, 7); printf("  "); break;
			case 3: SetColor(0, 11); printf("  "); break;
			case 4:SetColor(0, 7); printf("  "); break;
			case 5:SetColor(0, 7); printf("  "); break;
			}
			GotoXY(x, y + 1); switch (mypole[i][j]){
			case 0:if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); }
				   else{ SetColor(0, 9); printf("  "); }break;
			case 1:SetColor(0, 12); printf("  "); break;
			case 2:SetColor(0, 7); printf("  "); break;
			case 3:SetColor(0, 11); printf("  "); break;
			case 4:SetColor(0, 7); printf("  "); break;
			case 5:SetColor(0, 7); printf("  "); break;
			}
		}
	} while (f == 0);

	return udar;
}
int player(int pole[10][10], int udar)
{
	GotoXY(27, 16); SetColor(0, 0); printf("        ");
	int i, j, x, y, f, e, k = 0, pop, iper, jper; int vih, end;
	for (i = 0, x = 1; i<10, x<21; i++, x = x + 2)
	for (j = 0, y = 1; j<10, y<21; j++, y = y + 2)

	{
		GotoXY(x, y); if (pole[i][j] == 3){ SetColor(0, 11); printf("  "); }
		else { if (pole[i][j] == 2){ SetColor(0, 12); printf("  "); } else { if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } } }
		GotoXY(x, y + 1); if (pole[i][j] == 3){ SetColor(0, 11); printf("  "); }
		else { if (pole[i][j] == 2){ SetColor(0, 12); printf("  "); } else { if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } } }
	}
	x = 1; y = 1;
	i = j = 0;
	e = x;
	{

		GotoXY(e, y); SetColor(0, 14); printf("  ");
		GotoXY(e, y + 1); SetColor(0, 14); printf("  ");
	}
	do {
		f = 0; pop = 0; GotoXY(24, 14); SetColor(15, 0); printf("  Ходит игрок ");
		int code = getch();
		if (code == 224)
		{
			GotoXY(27, 16); SetColor(0, 0); printf("        ");
			code = getch();
			switch (code)
			{
			case 72:
			{
					   if (y != 1)
					   {

						   e = x;
						   {
							   i = e / 2;
							   j = y / 2;
							   GotoXY(e, y); if (pole[i][j] == 3){ SetColor(0, 11); printf("  "); }
							   else { if (pole[i][j] == 2){ SetColor(0, 12); printf("  "); } else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } } }
							   GotoXY(e, y + 1); if (pole[i][j] == 3){ SetColor(0, 11); printf("  "); }
							   else { if (pole[i][j] == 2){ SetColor(0, 12); printf("  "); } else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } } }
						   }
						   y = y - 2;
						   e = x;
						   {
							   GotoXY(e, y); SetColor(0, 14); printf("  ");
							   GotoXY(e, y + 1); SetColor(0, 14); printf("  ");
						   }
					   }




					   break;

			}
			case 77:
			{

					   if (x != 19)
					   {
						   e = x; {
							   i = e / 2;
							   j = y / 2;
							   GotoXY(e, y); if (pole[i][j] == 3){ SetColor(0, 11); printf("  "); }
							   else { if (pole[i][j] == 2){ SetColor(0, 12); printf("  "); } else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } } }
							   GotoXY(e, y + 1); if (pole[i][j] == 3){ SetColor(0, 11); printf("  "); }
							   else { if (pole[i][j] == 2){ SetColor(0, 12); printf("  "); } else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } } }
						   }
						   x = x + 2;
						   e = x;
						   {
							   GotoXY(e, y); SetColor(0, 14); printf("  ");
							   GotoXY(e, y + 1); SetColor(0, 14); printf("  ");

						   }
					   }


					   break;
			}
			case 80:
			{


					   if (y != 19)
					   {
						   e = x; {
							   i = e / 2;
							   j = y / 2;
							   GotoXY(e, y); if (pole[i][j] == 3){ SetColor(0, 11); printf("  "); }
							   else { if (pole[i][j] == 2){ SetColor(0, 12); printf("  "); } else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } } }
							   GotoXY(e, y + 1); if (pole[i][j] == 3){ SetColor(0, 11); printf("  "); }
							   else { if (pole[i][j] == 2){ SetColor(0, 12); printf("  "); } else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } } }
						   }
						   y = y + 2;
						   e = x;
						   {
							   GotoXY(e, y); SetColor(0, 14); printf("  ");
							   GotoXY(e, y + 1); SetColor(0, 14); printf("  ");
						   }
					   }


					   break;
			}
			case 75:
			{
					   if (x != 1)
					   {
						   e = x; {
							   i = e / 2;
							   j = y / 2;
							   GotoXY(e, y); if (pole[i][j] == 3){ SetColor(0, 11); printf("  "); }
							   else { if (pole[i][j] == 2){ SetColor(0, 12); printf("  "); } else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } } }
							   GotoXY(e, y + 1); if (pole[i][j] == 3){ SetColor(0, 11); printf("  "); }
							   else { if (pole[i][j] == 2){ SetColor(0, 12); printf("  "); } else { if ((i + j) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } } }
						   }
						   x = x - 2;
						   e = x;
						   {
							   GotoXY(e, y); SetColor(0, 14); printf("  ");
							   GotoXY(e, y + 1); SetColor(0, 14); printf("  ");

						   }
					   }


					   break;
			}
			}
		}
		else {
			switch (code) {
			case 13:{
						int pr = f = 0;

						pop = 0;
						e = x;
						int a = y;
						{i = e / 2;
						j = a / 2;
						if (i<10 && j<10)if (pole[i][j] == 2 || pole[i][j] == 3)
							pr = 1; }
						if (pr == 0)
						{
							e = x;

							i = e / 2;
							j = y / 2;
							if (pole[i][j] == 0)
							{
								pole[i][j] = 3; f = 1; GotoXY(28, 16); SetColor(15, 0); printf("Мимо!");
							}
							else { pole[i][j] = 2; printf("\x07"); GotoXY(27, 16); SetColor(15, 0); printf("Попал!"); pop = 1; udar++; }
						}
						break;
			}
			case 27: { f = 1;
				GotoXY(24, 14); SetColor(15, 0); printf("    Выйти?    ");
				GotoXY(24, 16); SetColor(15, 0); printf("["); SetColor(0, 2); printf("да"); SetColor(15, 0); printf("]  ");
				GotoXY(31, 16); SetColor(15, 0); printf("  ["); printf("нет"); SetColor(15, 0); printf("]");
				do {
					k = 0; vih = 0;
					int code = getch();
					if (code == 224)
					{
						code = getch();
						switch (code)
						{
						case 75: {f = f*(-1);
							if (f == 1){
								GotoXY(24, 16); SetColor(15, 0); printf("["); SetColor(0, 2); printf("да"); SetColor(15, 0); printf("]  ");
								GotoXY(31, 16); SetColor(15, 0); printf("  ["); printf("нет"); SetColor(15, 0); printf("]");
							}
							else{
								GotoXY(24, 16); SetColor(15, 0); printf("["); printf("да"); printf("]  ");
								GotoXY(31, 16); SetColor(15, 0); printf("  ["); SetColor(0, 2); printf("нет"); SetColor(15, 0); printf("]");
							}
							break; }

						case 77: {f = f*(-1);
							if (f == 1){
								GotoXY(24, 16); SetColor(15, 0); printf("["); SetColor(0, 2); printf("да"); SetColor(15, 0); printf("]  ");
								GotoXY(31, 16); SetColor(15, 0); printf("  ["); printf("нет"); SetColor(15, 0); printf("]");
							}
							else{
								GotoXY(24, 16); SetColor(15, 0); printf("["); printf("да"); printf("]  ");
								GotoXY(31, 16); SetColor(15, 0); printf("  ["); SetColor(0, 2); printf("нет"); SetColor(15, 0); printf("]");
							}
							break; }

						}
					}

					else {
						switch (code)
						{
						case 13:{GotoXY(24, 14); SetColor(0, 0); printf("              ");
							GotoXY(24, 16); printf("              ");
							if (f == 1) k = 1;  vih = 1; break; }
						}

					}

				} while (vih == 0);
				break; }

			}

			int mas[20][2], flag, sh = 0, a, b;
			for (i = 0; i<10; i++)
			for (j = 0; j<10; j++)
			{
				if (pole[i][j] == 1)
				{
					if (i>0)if (pole[i - 1][j] == 2){
						mas[sh][0] = i - 1; mas[sh][1] = j; sh++;
						if (i>1)if (pole[i - 2][j] == 2){
							mas[sh][0] = i - 2; mas[sh][1] = j; sh++;
							if (i>2)if (pole[i - 3][j] == 2){ mas[sh][0] = i - 3; mas[sh][1] = j; sh++; }
						}
					}

					if (i<9)if (pole[i + 1][j] == 2){
						mas[sh][0] = i + 1; mas[sh][1] = j; sh++;
						if (i<8)if (pole[i + 2][j] == 2){
							mas[sh][0] = i + 2; mas[sh][1] = j; sh++;
							if (i<7)if (pole[i + 3][j] == 2){ mas[sh][0] = i + 3; mas[sh][1] = j; sh++; }
						}
					}

					if (j>0)if (pole[i][j - 1] == 2){
						mas[sh][0] = i; mas[sh][1] = j - 1; sh++;
						if (j>1)if (pole[i][j - 2] == 2){
							mas[sh][0] = i; mas[sh][1] = j - 2; sh++;
							if (j>2)if (pole[i][j - 3] == 2){ mas[sh][0] = i; mas[sh][1] = j - 3; sh++; }
						}
					}

					if (j<9)if (pole[i][j + 1] == 2){
						mas[sh][0] = i; mas[sh][1] = j + 1; sh++;
						if (i<8)if (pole[i][j + 2] == 2){
							mas[sh][0] = i; mas[sh][1] = j + 2; sh++;
							if (i<7)if (pole[i][j + 3] == 2){ mas[sh][0] = i; mas[sh][1] = j + 3; sh++; }
						}
					}
				}
			}
			for (i = 0; i<10; i++)
			for (j = 0; j<10; j++)
			{
				b = 0;
				if (pole[i][j] == 2)
				{
					for (a = 0; a<sh; a++)
					if (i == mas[a][0] && j == mas[a][1])
						b = 1;
					if (b == 0)
					{
						if (i>0){ if (pole[i - 1][j] == 0){ pole[i - 1][j] = 3; } }
						if (i<9){ if (pole[i + 1][j] == 0){ pole[i + 1][j] = 3; } }
						if (j>0){ if (pole[i][j - 1] == 0){ pole[i][j - 1] = 3; } }
						if (j<9){ if (pole[i][j + 1] == 0){ pole[i][j + 1] = 3; } }
						if (i>0 && j>0){ if (pole[i - 1][j - 1] == 0){ pole[i - 1][j - 1] = 3; } }
						if (i>0 && j<9){ if (pole[i - 1][j + 1] == 0){ pole[i - 1][j + 1] = 3; } }
						if (i<9 && j<9){ if (pole[i + 1][j + 1] == 0){ pole[i + 1][j + 1] = 3; } }
						if (i<9 && j>0){ if (pole[i + 1][j - 1] == 0){ pole[i + 1][j - 1] = 3; } }
					}
				}

			}
			iper = x; jper = y;
			GotoXY(e, y); SetColor(0, 14); printf("  ");
			GotoXY(e, y + 1); SetColor(0, 14); printf("  ");

			for (i = 0, x = 1; i<10, x<21; i++, x = x + 2)
			for (j = 0, y = 1; j<10, y<21; j++, y = y + 2)

			{
				GotoXY(x, y); switch (pole[i][j]){
				case 0:if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); }
					   else{ SetColor(0, 9); printf("  "); }break;
				case 1:if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); }
					   else{ SetColor(0, 9); printf("  "); }break;
				case 2:SetColor(0, 12); printf("  "); break;
				case 3: SetColor(0, 11); printf("  "); break;
				}
				GotoXY(x, y + 1); switch (pole[i][j]){
				case 0:if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); }
					   else{ SetColor(0, 9); printf("  "); }break;
				case 1:if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); }
					   else{ SetColor(0, 9); printf("  "); }break;
				case 2:SetColor(0, 12); printf("  "); break;
				case 3: SetColor(0, 11); printf("  "); break;
				}
			}
			x = iper; y = jper;

			udar = 0;
			for (i = 0; i<10; i++)
			for (j = 0; j<10; j++)
			if (pole[i][j] == 2 || pole[i][j] == 2)
				udar++;
			end = 0;	if (udar == 20)
			{
				f = 1; pop = 0;
			}

			if (k == 1)
			{
				udar = -1; f = 1;
			}
		}
		GotoXY(20, 20);
		printf("%d", udar);
	} while ((f != 1 || pop != 0));


	return udar;
}

void morskoy()
{
	
	int pole[10][10], mypole[10][10], x, y, ui, ud[2], hod[1];
	int i, j, m, k;
	keybd_event(VK_MENU, 0x38, 0, 0);
	keybd_event(VK_RETURN, 0x1c, 0, 0);
	keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
	do{
		m = menum(); ui = 0; if (m == 1)
		{
			SetColor(0, 0);
			system("cls");
			int f = 1;
			GotoXY(30, 10); SetColor(15, 0); printf("Расставить корабли");
			GotoXY(23, 13); SetColor(15, 0); printf("["); SetColor(0, 2); printf("автоматически"); SetColor(15, 0); printf("]");
			GotoXY(43, 13); SetColor(15, 0); printf("["); printf("вручную"); SetColor(15, 0); printf("]");
			do {
				k = 0;
				int code = getch();
				if (code == 224)
				{
					code = getch();
					switch (code)
					{
					case 75: {f = f*(-1);
						if (f == 1){
							GotoXY(23, 13); SetColor(15, 0); printf("["); SetColor(0, 2); printf("автоматически"); SetColor(15, 0); printf("]");
							GotoXY(43, 13); SetColor(15, 0); printf("["); printf("вручную"); SetColor(15, 0); printf("]");
						}
						else{
							GotoXY(23, 13); SetColor(15, 0); printf("["); printf("автоматически"); printf("]");
							GotoXY(43, 13); SetColor(15, 0); printf("["); SetColor(0, 2); printf("вручную"); SetColor(15, 0); printf("]");
						}
						break; }

					case 77: {f = f*(-1);
						if (f == 1){
							GotoXY(23, 13); SetColor(15, 0); printf("["); SetColor(0, 2); printf("автоматически"); SetColor(15, 0); printf("]");
							GotoXY(43, 13); SetColor(15, 0); printf("["); printf("вручную"); SetColor(15, 0); printf("]");
						}
						else{
							GotoXY(23, 13); SetColor(15, 0); printf("["); printf("автоматически"); printf("]");
							GotoXY(43, 13); SetColor(15, 0); printf("["); SetColor(0, 2); printf("вручную"); SetColor(15, 0); printf("]");
						}
						break; }

					}
				}

				else {
					switch (code)
					{
					case 13: k = 1; break;
					}

				}

			} while (k == 0);

			if (f == 1){ sheeps(mypole); }
			else {
				SetColor(0, 0);
				ui = ras(mypole);
			}
			if (ui == 0){
				SetColor(0, 0);
				system("cls");
				GotoXY(30, 10);
				SetColor(15, 0);
				printf("Расстановка кораблей");

				for (i = 1; i <= 100; i++)
				{
					GotoXY(62, 15);
					SetColor(15, 0); printf("%d%%", i);
					if (i % 2 == 0)
					{
						GotoXY(10 + (i / 2), 15);
						SetColor(0, 15); printf(" ");
						sheeps(pole);
					}Sleep(50);
				}
				SetColor(0, 0);
				system("cls");
				f = 1;
				GotoXY(30, 10); SetColor(15, 0); printf("Кто ходит первым?");
				GotoXY(23, 13); SetColor(15, 0); printf("["); SetColor(0, 2); printf("компьютер"); SetColor(15, 0); printf("]");
				GotoXY(43, 13); SetColor(15, 0); printf("["); printf("игрок"); SetColor(15, 0); printf("]");
				do {
					k = 0;
					int code = getch();
					if (code == 224)
					{
						code = getch();
						switch (code)
						{
						case 75: {f = f*(-1);
							if (f == 1){
								GotoXY(23, 13); SetColor(15, 0); printf("["); SetColor(0, 2); printf("компьютер"); SetColor(15, 0); printf("]");
								GotoXY(43, 13); SetColor(15, 0); printf("["); printf("игрок"); SetColor(15, 0); printf("]");
							}
							else{
								GotoXY(23, 13); SetColor(15, 0); printf("["); printf("компьютер"); printf("]");
								GotoXY(43, 13); SetColor(15, 0); printf("["); SetColor(0, 2); printf("игрок"); SetColor(15, 0); printf("]");
							}
							break; }

						case 77: {f = f*(-1);
							if (f == 1){
								GotoXY(23, 13); SetColor(15, 0); printf("["); SetColor(0, 2); printf("компьютер"); SetColor(15, 0); printf("]");
								GotoXY(43, 13); SetColor(15, 0); printf("["); printf("игрок"); SetColor(15, 0); printf("]");
							}
							else{
								GotoXY(23, 13); SetColor(15, 0); printf("["); printf("компьютер"); printf("]");
								GotoXY(43, 13); SetColor(15, 0); printf("["); SetColor(0, 2); printf("игрок"); SetColor(15, 0); printf("]");
							}
							break; }

						}
					}

					else {
						switch (code)
						{
						case 13: k = 1; break;
						}

					}

				} while (k == 0);

				int chislocomp = 0, chislomy = 0;
				SetColor(15, 0);
				system("cls");
				printf("\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xBB\n");
				printf("\xba"); printf("\t\t     "); printf("\xba\n");
				printf("\xba"); printf("\t\t     "); printf("\xba\n");
				printf("\xba"); printf("\t\t     "); printf("\xba\n");
				printf("\xba"); printf("\t\t     "); printf("\xba\n");
				printf("\xba"); printf("\t\t     "); printf("\xba\n");
				printf("\xba"); printf("\t\t     "); printf("\xba\n");
				printf("\xba"); printf("\t\t     "); printf("\xba\n");
				printf("\xba"); printf("\t\t     "); printf("\xba\n");
				printf("\xba"); printf("\t\t     "); printf("\xba\n");
				printf("\xba"); printf("\t\t     "); printf("\xba\n");
				printf("\xba"); printf("\t\t     "); printf("\xba\n");
				printf("\xba"); printf("\t\t     "); printf("\xba\n");
				printf("\xba"); printf("\t\t     "); printf("\xba\n");
				printf("\xba"); printf("\t\t     "); printf("\xba\n");
				printf("\xba"); printf("\t\t     "); printf("\xba\n");
				printf("\xba"); printf("\t\t     "); printf("\xba\n");
				printf("\xba"); printf("\t\t     "); printf("\xba\n");
				printf("\xba"); printf("\t\t     "); printf("\xba\n");
				printf("\xba"); printf("\t\t     "); printf("\xba\n");
				printf("\xba"); printf("\t\t     "); printf("\xba\n");
				printf("\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xBC\n");


				GotoXY(40, 0); printf("\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xBB\n");
				GotoXY(40, 1); printf("\xba"); printf("\t\t     "); printf("\xba\n");
				GotoXY(40, 2); printf("\xba"); printf("\t\t     "); printf("\xba\n");
				GotoXY(40, 3); printf("\xba"); printf("\t\t     "); printf("\xba\n");
				GotoXY(40, 4); printf("\xba"); printf("\t\t     "); printf("\xba\n");
				GotoXY(40, 5); printf("\xba"); printf("\t\t     "); printf("\xba\n");
				GotoXY(40, 6); printf("\xba"); printf("\t\t     "); printf("\xba\n");
				GotoXY(40, 7); printf("\xba"); printf("\t\t     "); printf("\xba\n");
				GotoXY(40, 8); printf("\xba"); printf("\t\t     "); printf("\xba\n");
				GotoXY(40, 9); printf("\xba"); printf("\t\t     "); printf("\xba\n");
				GotoXY(40, 10); printf("\xba"); printf("\t\t     "); printf("\xba\n");
				GotoXY(40, 11); printf("\xba"); printf("\t\t     "); printf("\xba\n");
				GotoXY(40, 12); printf("\xba"); printf("\t\t     "); printf("\xba\n");
				GotoXY(40, 13); printf("\xba"); printf("\t\t     "); printf("\xba\n");
				GotoXY(40, 14); printf("\xba"); printf("\t\t     "); printf("\xba\n");
				GotoXY(40, 15); printf("\xba"); printf("\t\t     "); printf("\xba\n");
				GotoXY(40, 16); printf("\xba"); printf("\t\t     "); printf("\xba\n");
				GotoXY(40, 17); printf("\xba"); printf("\t\t     "); printf("\xba\n");
				GotoXY(40, 18); printf("\xba"); printf("\t\t     "); printf("\xba\n");
				GotoXY(40, 19); printf("\xba"); printf("\t\t     "); printf("\xba\n");
				GotoXY(40, 20); printf("\xba"); printf("\t\t     "); printf("\xba\n");
				GotoXY(40, 21); printf("\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xBC\n");

				for (i = 0, x = 1; i<10, x<21; i++, x = x + 2)
				for (j = 0, y = 1; j<10, y<21; j++, y = y + 2)

				{
					GotoXY(x, y);  if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); }
					else{ SetColor(0, 9); printf("  "); }
					GotoXY(x, y + 1); if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); }
					else{ SetColor(0, 9); printf("  "); }
				}

				for (i = 0, x = 41; i<10, x<61; i++, x = x + 2)
				for (j = 0, y = 1; j<10, y<21; j++, y = y + 2)

				{
					GotoXY(x, y); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
					else { if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
					GotoXY(x, y + 1); if (mypole[i][j] == 1){ SetColor(0, 12); printf("  "); }
					else { if ((j + i) % 2 != 0) { SetColor(0, 1); printf("  "); } else{ SetColor(0, 9); printf("  "); } }
				}

				GotoXY(25, 8); SetColor(15, 0); printf("принять-enter");
				GotoXY(22, 9); SetColor(15, 0); printf("управление-стрелки");
				GotoXY(26, 10); SetColor(15, 0); printf("Выход-Esc");
				GotoXY(24, 12); SetColor(15, 0); printf("окно сообщений");
				GotoXY(23, 13); printf("\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xBB\n");
				GotoXY(23, 14); printf("\xba"); printf("\t      "); printf("\xba\n");
				GotoXY(23, 15); printf("\xba"); printf("\t      "); printf("\xba\n");
				GotoXY(23, 16); printf("\xba"); printf("\t      "); printf("\xba\n");
				GotoXY(23, 17); printf("\xba"); printf("\t      "); printf("\xba\n");
				GotoXY(23, 18); printf("\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xBC\n");
				ud[0] = -3; ud[1] = -3;



				while (chislocomp<20 && chislomy<20)
				{
					if (chislomy == -1){ break; }
					if (chislocomp != 20 && chislomy != 20)
					{
						if (f == 1)
						{
							chislocomp = comp(mypole, chislocomp, ud, hod);
							f = f*(-1);
						}
						else
						{
							chislomy = player(pole, chislomy);
							f = f*(-1);
						}
					}
				}
				SetColor(0, 0); system("cls");

				if (chislocomp == 20)
				{
					GotoXY(33, 14); SetColor(0, 12);
					printf("Вы проиграли"); fflush(stdin); getch(); fflush(stdin);
				}
				if (chislomy == 20)
				{
					GotoXY(33, 14); SetColor(0, 12);
					printf("Вы выиграли!"); fflush(stdin); getch(); fflush(stdin);
				}

			}
		}
	} while (m == 1);
}
void go(int x)
{
	if (x == 1) baza();
	if (x == 2) { zastavka(); Obavtore(); }
	if (x == 0) zastavka2();
	if (x == 3) { getch();  printf("Спасибо за внимание!"); getch(); exit(0); }
	system("cls");
}
void choice();
void menu()
{
	for (;;)
	{
		system("cls");
		if (m_pos == 0)
		{
			SetColor(1, 0); printf(" Заставка\n"); SetColor(15, 0);
			printf("   Записная книжка\n");
			printf("   Об авторе\n");
			printf("   Выход\n");
			choice();
		}
		if (m_pos == 1)
		{
			printf(" Заставка\n");
			SetColor(2, 0); printf("   Записная книжка\n"); SetColor(15, 0);
			printf("   Об авторе\n");
			printf("   Выход\n");
			choice();
		}
		if (m_pos == 2)
		{
			printf(" Заставка\n");
			printf("   Записная книжка\n");
			SetColor(3, 0);  printf("   Об авторе\n"); SetColor(15, 0);
			printf("   Выход\n");
			choice();
		}
		if (m_pos == 3)
		{
			printf(" Заставка\n");
			printf("   Записная книжка\n");
			printf("   Об авторе\n");
			SetColor(4, 0);	printf("   Выход\n"); SetColor(15, 0);
			choice();
		}


	}
}
void choice()
{
l:
	int ch = _getch();
	if (ch == 224)
	{
		switch (ch)
		{
		case 80:
			if (m_pos + 1<max_pos) ++m_pos;
			menu();
			break;
		case 72:
			if (m_pos - 1 >= 0) --m_pos;
			menu();
			break;
		case 13:
			go(m_pos);
			break;
		default:
			goto l;
		}
	}
	switch (ch)
	{
	case 80:
		if (m_pos + 1<max_pos) ++m_pos;
		menu();
		break;
	case 72:
		if (m_pos - 1 >= 0) --m_pos;
		menu();
		break;
	case 13:
		go(m_pos);
		break;
	default:
		goto l;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 10, m = 0; int z = 0, y = 9; int version1 = 0;
	do
	{
		system("cls"); GotoXY(n + 5, m); version1 = (version1 + 3) % 3; SetColor(z, 10); cout << "Выбирите вариант открытия!"; GotoXY(n, m + 1);
		if (version1 == 0)
		{
			SetColor(z, y); GotoXY(n, m + 3);
			cout << "Остальные программы";
		}
		else
		{
			SetColor(y, z); GotoXY(n, m + 3); cout << "Остальные программы";

		}
		if (version1 == 1)
		{
			SetColor(z, y); GotoXY(n, m + 4);
			cout << "Морской бой";
		}
		else
		{
			SetColor(y, z); GotoXY(n, m + 4);
			cout << "Морской бой";
		}
		if (version1 == 2)
		{
			SetColor(y, z); GotoXY(n, m + 23);

			printf("Нажмите Enter");
		}
		else
		{
			SetColor(y, z); GotoXY(n, m + 23);
			printf("Для выхода нажмите Enter...");
		}
		number1 = _getch();
		if (number1 == 224)
		{
			number1 = _getch();
			if (number1 == 80)
			{
				version1++;
			}
			if (number1 == 72)
			{
				version1--;
			}
		}
	} while (number1 != 13);

	system("cls");
	switch (version1)
	{
	case 0:
	{
			  system("cls"); menu();
	}
	case 1:
	{
			  system("cls"); morskoy();
			  
			  menu();
	}
	case 2:
	{
			  exit(0);
	}

	}

}
