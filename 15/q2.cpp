#include <iostream>
using namespace std;

int power(int x, int n)
{
  if(n==0)
    return 1;
  if (n==1)
  {
    return x;
  }
  return power(x, n-1) * x;
}

int main()
{
  int y,w;
  cout << "Enter x: ";
  cin >> y;
  cout << endl;
  cout << "Enter n: ";
  cin >> w;
  cout << power(y,w) << endl;
}
