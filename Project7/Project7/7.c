#include <stdio.h>
#include <Windows.h>
#define NUM_ELEMENTS 10

int arr[NUM_ELEMENTS];
int n = 0;

void printElements() {
	printf("< ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf(">\n");
}
void printElements() {
	printf("< ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf(">\n");
}

void addLastElement(int value) {
	arr[n++] = value;
}
void addLastElement(int value) {
	arr[n++] = value;
}
void addLastElement(int value) {
	arr[n++] = value;
}

void addLastElement(int value) {
	arr[n++] = value;
}
void addLastElement(int value) {
	arr[n++] = value;
}

void deleteLastElement() {
	n--;
}

void keyboardInput() {
	printf("n = ");
	scanf_s("%d", &n);

	printf("input %d values: ", n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
}
void keyboardInput() {
	printf("n = ");
	scanf_s("%d", &n);

	printf("input %d values: ", n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
}

void keyboardInput() {
	printf("n = ");
	scanf_s("%d", &n);

	printf("input %d values: ", n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
}

void oddsX10() {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 1) {
			arr[i] = arr[i] * 10;
		}
	}
}

int findMin() {
	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

int bolten() {
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 10) {
			k++;
		}
	}
	return k;
}

int findLastEven() {
	int last = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			last = i;
		}
	}
	return last;
}

int findIndexMin() {
	int min = arr[0];
	int IndexMin = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
			IndexMin = i;
		}
	}
	return IndexMin;
}

void minus1() {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			arr[i] = arr[i] * (-1);
		}
	}
}

void chetire() {
	for (int i = 0; i < n; i++) {
		if (arr[i] < 4) {
			arr[i] = 4;
		}
	}
}

void zamena() {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			arr[i-1] = 9;
		}
	}
}

void deleteElement(int delIndex) {
	for (int i = delIndex; i < n-1; i++) {
			arr[i] = arr[i+1];
	}
	n--;
}

void insertElement(int insIndex, int value) {
	for (int i = n; i > insIndex; i--) {
		arr[i] = arr[i - 1];
	}
	n++;
	arr[insIndex] = value;
}

int findFirstEven() {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 != 0) {
			return i;
		}
	}
	return -1;
}



void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printElements();
	keyboardInput();
	printElements();
	int item;
	
	do {
		printf("\n");
		printf("------------------------------\n");
		printf("Содержимое массива:");
		printElements();
		printf("Выберите нужную вам операцию:\n");
		printf("1: Ввести с клавиатуры массив\n");
		printf("2: x10 для всех нечетных элементов\n");
		printf("3: Найти минимальный элемент\n");
		printf("4: Сколько элементов больше 10\n");
		printf("5: x2 для последнего четного\n");
		printf("6: Сколько четных левее минимального\n");
		printf("7: Все четные элементы массива умножить на -1\n");
		printf("8: Все элементы массива имеющие значения меньше 4 заменить на 4\n");
		printf("9: В массиве все элементы, стоящие перед четными, заменить на 9\n");
		printf("10: Удаления заданного элемента массива\n");
		printf("11: Вставки нового элемента в заданное место\n");
		printf("12: Удалить минимальный элемент\n");
		printf("13: Перед минимальным элементом вставить 0\n");
		printf("14: Из массива удалить первый из нечетных элементов\n");
		printf("\n");
		printf("0: Выйти из программы\n");
		printf("Выбранная операция >>>>>> ");

		scanf_s("%d", &item);

		switch (item) {
		case 1:
			keyboardInput();
			break;

		case 2:
			oddsX10();
			break;

		case 3:
		{
			int min = findMin();
			printf("min = %d\n", min);
		}
		break;

		case 4: {
			int res = bolten();
			printf("%d элементов\n", res);
		}
		break;

		case 5: {
			int index = findLastEven();
			if (index >= 0) {
				arr[index] *= 2;
			}
		}
		break;
		case 6:
		{
			int index = findIndexMin();
			printf("Индекс минимального элемента = %d\n", index);

			int k = 0;
			for (int i = 0; i < index; i++) {
				if (arr[i] % 2 == 0) {
					k++;
				}
			}
			printf("Левее минимального %d четных элементов\n ", k);
		}
		break;
		case 7: {
			minus1();
			break;
		}
		case 8: {
			chetire();
			break;
		}
		case 9: {
			zamena();
			break;
		}
		case 10: {
			printf("Индекс удаляемого элемента = ");
			int index;
			scanf_s("%d", &index);
			deleteElement(index);
		}
		break;
		case 11: {
			printf("Перед каким элементом нужно вставить новый? Индекс = ");
			int index;
			scanf_s("%d", &index);

			printf("Значение,которое нужно вставить = ");
			int value;
			scanf_s("%d", &value);
			insertElement(index,value);
		}
		break;
		case 12:
		{
			int min = findIndexMin();
			deleteElement(min);
		}
		break;
		case 13:
		{
			int indexMin = findIndexMin();
			insertElement(indexMin,0);
		}
		break;
		case 14: {
			int indexMinNec = findFirstEven();
			
			if (indexMinNec >= 0){
				deleteElement(indexMinNec);
			}

		break;
		}
		

		}

	} while (item != 0);
}
