// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	SetConsoleOutputCP(1251); 
	getchar();  

	int x, y; 
	printf("Введіть бажаний x, y (у такій послідовності включаючи кому):  ");
	scanf("%d, %d", &x, &y);
	printf("\n");  
	printf("x = %d, y = %d\n", x, y);
	printf("Додавання - %d\n", x + y);
	printf("Віднімання - %d\n", x - y);
	printf("Множення - %d\n", x * y);
	printf("Ділення - %d\n", x / y);

	printf("Остача - %d\n", x % y);
	system("pause"); 
	return 0;
}

