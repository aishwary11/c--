#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int s, int e, int k) {
    if (s > e) return false;
    int mid = s + (e - s) / 2;
    if (arr[mid] == k) return true;
    if (arr[mid] < k)
        return binarySearch(arr, mid + 1, e, k);
    else
        return binarySearch(arr, s, mid - 1, k);
}

int main() {
    int arr[6] = {2, 4, 6, 10, 14, 16};
    int n;
    cin >> n;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << binarySearch(arr, 0, size, n) << endl;
    return 0;
}