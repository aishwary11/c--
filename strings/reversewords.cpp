#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    int st = 0;
    for (int i = 0; i <= s.size(); i++)
    {
        if (s[i] == ' ' || i == s.size())
        {
            int e = i - 1;
            while (st < e)
            {
                swap(s[st++], s[e--]);
            }
            st = i + 1;
        }
    }
    return s;
}

string reverseOrderWords(string str)
{
    str = reverseWords(str);
    cout << "Reverse word: " << str << endl;
    int s = 0, e = str.size() - 1;
    while (s < e)
    {
        swap(str[s++], str[e--]);
    }
    return str;
}

int main()
{
    string str = "Aish is Software Developer";
    cout << "Word reverse: " << reverseOrderWords(str) << endl;
    return 0;
}