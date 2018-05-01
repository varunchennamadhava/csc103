/** TODO: read a list of integers from stdin and print the *product* of
	 * them all.  NOTE: to read integers from stdin, you can use a loop
*/

#include <iostream>
using namespace std;
int main()
{

  int x,y;
  cin >> y;
  while (cin >> x)
  {
    y = y * x;
  }

  cout << "The product is: " << y;

  return 0;
}
