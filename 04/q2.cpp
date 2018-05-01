	/* exercise: brute force gcd.  Compute the greatest common
	 * divisor of n and k by an exhaustive search.  */
	/* IDEA: start with the largest possible value that the gcd
	 * could have, then walk *backwards* until you find the first
	 * value that divides both inputs. */
	/* Range of possibilities for a valid answer: {min{a,b}...1} */

#include <iostream>
using namespace std;

int main()
{
  int x,y,z;
  cout << "Enter two numbers" <<endl;
  cin >> x;
  cin >> y;
  if(x < y) z = x;
	else z = y;

	while(x%z != 0 || y%z != 0)
	{
		z = z -1;
	}

	cout << "The GCD is: " << z << endl;

	return 0;
}













