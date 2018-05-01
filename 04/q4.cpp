
	/* TODO: a slight generalization of an earlier exercise: for integers
	 * n and k, determine the largest power of k that divides n.
	 * NOTE: see if you can formalize the invariant you used to solve this.
	 * */

#include <iostream>
using namespace std;

int main()
{
  int x,y;
  int counter = 0;
  int product;
  cout << "Please enter a number: "  << endl;
  cin >> x;
  cout << "Please enter another number: " << endl;
  cin >> y;
  product = y;
  while(x%y == 0)
  {
    counter++;
    y = y * product;
  }

  cout << "The largest power of " << product << " that divides " << x << " is: " << counter << endl;

  return 0;
}
