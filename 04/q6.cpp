/* TODO: write a loop that prints the sum of the first n odd cubes. */

#include <iostream>
using namespace std;
int main()
{
  int n, cube,sum;
  cout << "Enter a number: ";
  cin >> n;
  for( int i = 1; i <= (n*2); i+=2)
    {
      cube = (i * i * i);
      sum = sum + cube;

    }

    cout << "The sum of the first " << n << " odd cubes is: " << sum << endl;

    return 0;

  }
