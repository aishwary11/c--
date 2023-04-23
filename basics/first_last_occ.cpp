#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

/**
 * pivot element using binary search
 */

int getPivot(int arr[], int n)
{
    int s = 0, e = n - 1, mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 4, 4, 4, 4, 9, 0};
    int pivotArr[6] = {8, 9, 10, 2, 3, 4};
    cout << "Index of 4 first occurence: " << firstOcc(arr, 10, 4) << endl;
    cout << "Index of 4 last occurence: " << lastOcc(arr, 10, 4) << endl;
    cout << "pivot element::" << endl;
    cout << "Pivot element is " << getPivot(pivotArr, 6) << endl;
    return 0;
}