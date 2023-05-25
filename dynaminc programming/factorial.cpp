#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
  int factorial[n + 1];
  factorial[0] = 1;

  for (int i = 1; i <= n; i++)
  {
    factorial[i] = i * factorial[i - 1];
  }
  return factorial[n];
}

int main()
{
  int n;
  cin >> n;
  int ans = factorial(n);
  cout << "Factorial is: " << ans << endl;
  return 0;
}