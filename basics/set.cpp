#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << "is -5 present " << s.count(-5) << endl;

    set<int>::iterator itr = s.find(5);
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}