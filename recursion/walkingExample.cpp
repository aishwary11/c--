#include <bits/stdc++.h>
using namespace std;

void reachHome(int src, int dest)
{
    cout << "Src " << src << " Dest " << dest << endl;
    if (src == dest)
    {
        cout << "Poch gaya ghar" << endl;
        return;
    }
    src++;
    reachHome(src, dest);
}
int main()
{
    int src = 1;
    int dest = 10;
    reachHome(src, dest);
    return 0;
}