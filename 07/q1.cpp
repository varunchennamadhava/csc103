/* TODO: write a function that takes a vector and searches
 * for a particular value x, returning true <==> x is found.
 * NOTE: you should think carefully about how to pass the parameters,
 * especially for the vector.  (By value, reference, const reference?) */

#include <iostream>
#include <vector>
using namespace std;

bool findelement(vector<int> V, int x)
{
  for(int i = 0; i< V.size(); i++)
  {
    if(V[i] == x) return true;
  }

   return false;
}

int main()
{
  int a = 190;
  vector <int> hello = { 3, 8, 12, 34, 98, 78, 45, 32};
  cout << findelement(hello, a)<< endl;
  return 0;
}












