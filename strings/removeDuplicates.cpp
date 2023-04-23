#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s)
{
    string v;
    for (auto ch : s)
    {
        if (!v.empty() && v.back() == ch)
            v.pop_back();
        else
            v.push_back(ch);
    }
    return v;
}

int main()
{
    cout << "Remove string" << endl;
    cout << removeDuplicates("abbaca") << endl;
    return 0;
}