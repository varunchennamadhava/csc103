/* TODO: given an integer n, find exponent of the largest power of two that
	 * divides n.  Example: if n = r*8 with r odd, then you should output 3
	 * since 8 = 2^3.  (You are just recovering the exponent of the 2 in the
	 * number's factorization into primes.) */
	/* IDEA: keep on dividing n by two until we can't,
	 * and keep track of how many times it worked. */

#include <iostream>
using namespace std;

int main()
{
  int UI, counter;
  counter = 0;
  cout << "Please enter a number: ";
  cin >> UI;
  int power = 2;


  while( UI % power == 0)
  {
    power = power * 2;
    counter++;
  }

  cout << "Value is:  " << counter<<endl;

  return 0;
}







