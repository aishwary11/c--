#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> myVector{1, 2, 3, 4, 5};
  myVector.insert(myVector.begin(), -1);
  myVector.push_back(6);
  for (auto it = myVector.begin(); it != myVector.end(); it++)
  {
    cout << " " << *it;
  }
  cout << endl;
  cout << myVector.size() << endl;
}