#include <bits/stdc++.h>
#define ASSERT(expected, res) cout << (expected == res ? "\033[1;32mpass\033[0m" : "\033[1;31mfail\033[0m") << endl;
using namespace std;

int main()
{
  //cout << "hello" << endl;

  int n, k;

  cin >> n >> k;

  while (k--)
  {
    if (n % 10 != 0)
    {
      n--;
    }
    else
    {
      n /= 10;
    }
  }

  cout << n << endl;

  return 0;
}
