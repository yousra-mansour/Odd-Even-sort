#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void oddEven(int arr[], int Size);
void print(int arr[], int n);
void swap(int* i, int* place);

int main()
{
	srand((unsigned)time(0));
	int arr[30];
	for (int i = 0; i < 30; i++)
	{
		arr[i] = rand() % 30;
	}
	cout << "the array befor sorting  ";
	print(arr, 30);
	oddEven(arr, 30);
	cout << "the array befor sorting  ";
	print(arr, 30);







	return 0;
}
void oddEven(int arr[], int Size)
{
	bool isSorted = false;

	while (!isSorted)
	{
		isSorted = true;
		for (int i = 1; i <= Size - 2; i += 2)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				isSorted = false;
			}
		}

		for (int i = 0; i <= Size - 2; i += 2)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				isSorted = false;
			}
		}
	}


}

void print(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void swap(int* i, int* place)
{
	int tmp = *i;
	*i = *place;
	*place = tmp;
}