#include <bits/stdc++.h>
#define ASSERT(expected, res) cout << (expected == res ? "\033[1;32mpass\033[0m" : "\033[1;31mfail\033[0m") << endl;
using namespace std;

typedef struct comp
{
  vector<long long> employees;
  long long maxWage;
} company;

bool myfunction(company i, company j) { return (i.maxWage > j.maxWage); }

int main()
{
  long long n, cn;
  cin >> n;

  vector<company> companies;

  long long largestWage = 0;

  while (n--)
  {
    cin >> cn;
    long long maxim = -1;
    vector<long long> cnvec(cn);
    company comp;

    for (int j = 0; j < cn; j++)
    {
      cin >> cnvec[j];
      maxim = maxim == -1 ? cnvec[j] : max(cnvec[j], maxim);
    }
    comp.employees = cnvec;
    comp.maxWage = maxim;

    largestWage = max(maxim, largestWage);
    companies.push_back(comp);
  }

  long long totalCost = 0;

  for (int i = 0; i < companies.size(); i++)
  {
    totalCost += ((largestWage - companies[i].maxWage) * companies[i].employees.size());
  }

  cout << totalCost << endl;
  return 0;
}
