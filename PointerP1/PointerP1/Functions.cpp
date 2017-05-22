#include <iostream>
#include <time.h>

using namespace std;

void max(int *pnum1, int *pnum2)
{
	if (*pnum1 > *pnum2)
		cout << *pnum1;
	else
		cout << *pnum2;
}

void swap(int *pnum1, int *pnum2)
{
	int temp;
	temp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = temp;
	cout << "\nThe numbers after swap: " << *pnum1 << ", " << *pnum2;
}

void initialShow(int *arr, int length)
{
	srand(time(0));

	for (int i = 0; i < length; i++)
	{
		*(arr + i) = rand() % 20;
		cout << *(arr + i) << " ";
	}
	cout << endl;
}

void func(int *arr, int length, int *sum, long *mult)
{
	for (int i = 0; i < length; i++)
	{
		*sum += *(arr + i);
		*mult *= *(arr + i);
	}

	cout << "The sum of array: " << *sum << endl;
	cout << "The mult of array: " << *mult;

}

void initialNeg(int *arr, int length)
{
	srand(time(0));

	for (int i = 0; i < length; i++)
	{
		*(arr + i) = rand() % 20 - 10;
		cout << *(arr + i) << " ";
	}
	cout << endl;
}

void sort(int *arr, int length)
{
	int neg = 0, zero = 0, pos = 0;

	for (int i = 0; i < length; i++)
	{
		if (*(arr + i) < 0)
			neg++;
		else if (*(arr + i) == 0)
			zero++;
		else if (*(arr + i) > 0)
			pos++;
	}

	cout << "\nCount of negative number: " << neg;
	cout << "\nCount of zero number: " << zero;
	cout << "\nCount of positive number: " << pos << endl;
}