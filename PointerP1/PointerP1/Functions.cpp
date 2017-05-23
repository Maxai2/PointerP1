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

void func(int *arr, int length, int *sum, long long *mult)
{
	for (int i = 0; i < length; i++)
	{
		*sum += *(arr + i);
		*mult *= *(arr + i);
	}

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

void sort(int *arr, int length, int *neg, int *zero, int *pos)
{
//	int fneg = 0, fpos = 0, fzero = 0;

	for (int i = 0; i < length; i++)
	{
		if (*(arr + i) < 0)
			(*neg)++;
		else if (*(arr + i) == 0)
			(*zero)++;
		else if (*(arr + i) > 0)
			(*pos)++;
	}

//	*neg = fneg; *pos = fpos; *zero = fzero;
}