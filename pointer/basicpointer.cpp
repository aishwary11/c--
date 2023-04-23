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
    cout << "Address of p " << p << endl;
    return 0;
}