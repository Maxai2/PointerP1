#include <iostream>
#include "Functions.h"

using namespace std;

int main()
{
	//int num1, num2;

	//cout << "Input num1: ";
	//cin >> num1;
	//cout << "Input num2: ";
	//cin >> num2;

	/*1. Используя указатели и оператор разыменования, определить
	наибольшее из двух чисел.*/

	//cout << "The maximal number between two numbers: ";
	//max(&num1, &num2);
	//cout << endl;

	/*2. Используя указатели и оператор разыменования, обменять местами
	значения двух переменных.
	void swap(a, b);*/

	//cout << "The numbers before swap: " << num1 << ", " << num2;
	//swap(&num1, &num2);
	//cout << "\nThe numbers after swap: " << num1 << ", " << num2;
	//cout << endl;

	/*3. Пользуясь указателем на массив целых чисел, посчитать сумму эле-
	ментов массива. Использовать в программе арифметику указателей
	для продвижения по массиву, а также оператор разыменования.

	4. Написать функцию, которая получает указатель на массив и его
	размер, и возвращает сумму и произведение его элементов в двух
	параметрах-указателях.
	void func(int *arr, int length, int *sum, int *mult);*/

	//const int size = 10;
	//int arr[size] = {};

	//int sum = 0;
	//long long mult = 1;

	//cout << "Array: ";
	//initialShow(arr, size);

	//func(arr, size, &sum, &mult);
	//cout << "The sum of array: " << sum;
	//cout << "\nThe mult of array: " << mult;
	//cout << endl;

	/*5. Написать функцию, которая получает указатель на массив и его
	размер, и возвращает количество отрицательных, положительных и
	нулевых элементов массива.*/

	const int size = 20;
	int arr[size] = {};

	int neg = 0, zero = 0, pos = 0;

	cout << "Array: ";
	initialNeg(arr, size);

	sort(arr, size, &neg, &zero, &pos);

	cout << "\nCount of negative number: " << neg;
	cout << "\nCount of zero number: " << zero;
	cout << "\nCount of positive number: " << pos << endl;
}