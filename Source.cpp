#include <iostream>
#include <ctime>
using namespace std;

int SizeCheck()
{
	int size;
	while (!(cin >> size) || (cin.peek() != '\n') || size < 1)
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Введите корректное число:";
	}
	return size;
}


template <typename t1>
void FillArray(t1 *arr, int n) 
{
	for (int i = 0; i < n; i++) 
	{
		arr[i] = rand();
		cout << arr[i] << "\t";
	}
	cout << endl << endl;
}

template <typename t2>
int Solve(t2 *arr, int n) 
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			k++;
		}
	}
	return k;
}
int main() 
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int n;
	cout << "Введите длину массивов\t";
	cout << endl;
	n = SizeCheck();
	int* arr = new int[n];
	short int* arr1 = new short int[n];
	long int* arr2 = new long int[n];

	FillArray(arr, n);
	FillArray(arr1, n);
	FillArray(arr2, n);
	cout << endl << endl;
	

	cout << "Первый: " << Solve(arr, n) << endl;
	cout << "Второй: " << Solve(arr1, n) << endl;
	cout << "Третий: " << Solve(arr2, n) << endl;
	
	delete[] arr;
	delete[] arr1;
	delete[] arr2;
	
	return 0;
}