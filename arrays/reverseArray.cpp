#include <bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int s = 0, e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "After reverese" << endl;
    vector<int> ans = reverse(v);
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}