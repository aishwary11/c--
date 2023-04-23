#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (arr[row][col] == target)
                return 1;
        }
    }
    return 0;
}

void printSum(int arr[][3], int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " " << endl;
    }
    cout << endl;
}
void printColSum(int arr[][3], int row, int col)
{
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " " << endl;
    }
    cout << endl;
}

int largestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN, rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "the maximum sum is " << maxi << endl;
    cout << "the index of maximum sum is " << rowIndex << endl;
    return rowIndex;
}

int main()
{
    int arr[3][3];
    // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element to search " << endl;
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 3))
        cout << "Element found" << endl;
    else
        cout << "Element not found" << endl;

    printSum(arr, 3, 3);
    printColSum(arr, 3, 3);
    cout << "Index of maximum sum is " << largestRowSum(arr, 3, 3) << endl;
    return 0;
}