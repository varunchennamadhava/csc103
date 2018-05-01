
	/* TODO: brute force test for perfect cubes.  Check if
	 * n = k^3 for some integer k.  */

#include <iostream>
using namespace std;

int main()
{
  int x,y;
  cout << "Please enter a number: " << endl;

  cin >> x;
  y = x;

  while( x != (y*y*y) && y> 0)
  {
    y = y -1;

  }

  if(y == 0)
  {
    cout << "Number doesnt have cube root" << endl;
  }
else
  cout << "The cube of the integer is: "<< y << endl;

  return 0;

}

