#include <bits/stdc++.h>
using namespace std;

/**
 * using for loop
 */
void insertionSort(int n, vector<int> &arr)
{
	for (int i = 1; i < n; i++)
	{
		int temp = arr[i];
		int j = i - 1;
		for (; j >= 0; j--)
		{
			if (arr[j] > temp)
			{
				arr[j + 1] = arr[j];
			}
			else
			{
				break;
			}
		}
		arr[j + 1] = temp;
	}
}

/**
 * using while loop
 */

void insertionSortWhile(int n, vector<int> &arr)
{
	for (int i = 1; i < n; i++)
	{
		int temp = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}
}

int main()
{
	vector<int> arr = {5, 2, 4, 6, 1, 3};
	insertionSort(6, arr);
	cout << "Insertion For loop : " << endl;
	for (int x : arr)
	{
		cout << x << " ";
	}
	cout << endl;
	insertionSortWhile(6, arr);
	cout << "Insertion For while : " << endl;
	for (int x : arr)
	{
		cout << x << " ";
	}
	return 0;
}
