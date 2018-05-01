#include <iostream>
using namespace std;

int maxvalue(int x, int y, int z)
{
  if(x > y && x > z)
  {
    return x;
  }

  if(y > x && y > z)
  {
    return y;
  }

  if(z > y && z > x)
  {
    return z;
  }

}

int main ()
{
  int a,b,c;
  cout << "enter three numbers:  " << endl;

  cin >> a;
  cin >> b;
  cin >> c;

 cout << "Max of three numbers was " << maxvalue(a,b,c) << endl;

  return 0;

}




