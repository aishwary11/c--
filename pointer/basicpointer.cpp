#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 5;
    // address
    cout << "Address of num is " << &num << endl;
    int *p = &num;
    cout << "Address of p is " << p << endl;
    cout << "Value of num is " << *p << endl;
    p = p + 1;
    cout << "Address of p after is " << p << endl;
    int a[20] = {1, 2, 3, 4};
    // show address
    cout << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;
    // end address
    cout << *a + 10 << endl;   // 11 value
    cout << *(a + 1) << endl;  // 2
    cout << *(a + 10) << endl; // 0
    return 0;
}