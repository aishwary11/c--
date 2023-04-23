#include <bits/stdc++.h>
using namespace std;

bool is_alphanumeric(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        return ch - 'A' + 'a';
    }
}

bool checkPalindrome(char a[], int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        if (toLowerCase(a[s]) != toLowerCase(a[e]))
        {
            return 0;
        }
        else
        {
            s++, e--;
        }
    }
    return 1;
}

void reverseChar(char name[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[])
{
    int count = 0;
    while (name[count] != '\0')
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Your name is: " << name << endl;
    int len = getLength(name);
    cout << "Length of char is: " << len << endl;
    reverseChar(name, len);
    cout << "Reverse will be: " << endl;
    cout << name << endl;
    cout << "Palindrome or not: " << checkPalindrome(name, len) << endl;
    return 0;
}
