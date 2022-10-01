#include <stdio.h>
// добавил библиотеку локализации
#include<locale.h>

int main() {

	//настроил локализацию
	setlocale(LC_ALL, "rus");

	int age;

	// дописал & перед age и исправил scanf на scanf_s
	scanf_s("%d", &age);

	// добавил {} для каждого if else
	if (age <= 13) {
		// ;
		printf("%d - детство", age);
	}
	else if (14 <= age < 25) {
		// %f -> %d
		printf("%d - молодость", age);
	} 
	// убрал ; 
	else if (25 <= age && age < 60) {
		// %f -> %d
		printf("%d - зрелость", age);
	}
	else {
		printf("%d - старость", age);
	}
	// добавил system("pause");
	system("pause");
	return 0;
}
