#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int size, int k)
{
  if (size == 0)
    return false;
  if (arr[0] == k)
    return true;
  else
  {
    return linearSearch(arr + 1, size - 1, k);
  }
}

int main()
{
  int n;
  cin >> n;
  int arr[6] = {2, 5, 7, 8, 9, 12};
  bool ans = linearSearch(arr, sizeof(arr) / sizeof(arr[0]), n);
  if (ans)
  {
    cout << "Present" << endl;
  }
  else
  {
    cout << "Absent" << endl;
  }
  return 0;
}