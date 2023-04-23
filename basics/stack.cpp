#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> s;
    s.push("Aishwary");
    s.push("Yogeshwar");
    s.push("Shah");
    cout << "Top element -> " << s.top() << endl;
    cout << "Empty or not " << s.empty() << endl;
    cout << "Size of stack " << s.size() << endl;
}