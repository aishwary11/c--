#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "Aishwary";
    m[2] = "Shah";
    m.insert({5, "iiii"});
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    auto it = m.find(5);
    // for (auto i = it; i != m.end(); i++)
    // {
    //     cout << (*i).first << endl;
    // }
    return 0;
}