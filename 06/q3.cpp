/*TODO: write a function that takes two integer parameters and
 * swaps the contents, i.e., if x=2 and y=5, then after calling
 * swap(x,y), y=2 and x=5 */

#include <iostream>
using namespace std;

void swapvalue (int x, int y)
{
  // x = 2 & y = 5
  int z;
  z = x;  // z = 2
  x = y;  // x = 5
  y = z;  // y = 2

  cout << "Swapping x & y gives: " << endl;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;


}

int main()
{
  int a,b;
  cout << "x = ";
  cin >> a;
  cout << "y = ";
  cin >> b;
  swapvalue(a,b);
  return 0;
}










