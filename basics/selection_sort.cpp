#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    int minIndex = i;
    for (int j = i + 1; j < size; j++)
    {
      if (arr[j] < arr[minIndex])
      {
        minIndex = j;
      }
    }
    swap(arr[minIndex], arr[i]);
  }
};

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int arr[] = {64, 25, 12, 22, 11};
  int n = sizeof(arr) / sizeof(arr[0]);
  selectionSort(arr, n);
  cout << "Sorted array: " << endl;
  printArray(arr, n);
  return 0;
}