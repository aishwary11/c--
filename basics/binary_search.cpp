#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;
  while (start <= end)
  {
    if (arr[mid] == key)
    {
      return mid;
    }
    if (key > arr[mid])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}

int main()
{
  int even[6] = {2, 4, 6, 8, 10, 12};
  int odd[5] = {1, 3, 5, 7, 9};
  int key = 12;
  int key1 = 9;
  int evenIndex = binarySearch(even, 6, key);
  cout << "Index of even " << key << " is " << evenIndex << endl;
  int oddIndex = binarySearch(odd, 6, key1);
  cout << "Index of odd " << key1 << " is " << oddIndex << endl;
  return 0;
}