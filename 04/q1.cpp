/* TODO: if you haven't already, be sure you can do this on your own,
	 * as well as similar things like the min, the sum, the product, the
	 * average...  Try to take the following very high level steps:
	 * 1. First, think about how many variables you will need, and for what
	 *    purposes.
	 * 2. Declare the variables, and in comments, state the meaning of each
	 *    variable.
	 * 3. Loop through the input and make sure the meaning of each of your
	 *    variables is preserved at the end of each iteration of the loop.
	 * 4. Finally, print the results.
	 * */

#include <iostream>
using namespace std;

int main ()
{
  int sum, average, userinput, minimum, product,counter,userinput1;
  cin >> userinput;
  sum = userinput;
  minimum = userinput;
  product = userinput;
  counter = 1;

  while(cin >> userinput1)
  {
    if( userinput1 < minimum)
    {
      minimum = userinput1;
    }

    sum = sum + userinput1;
    counter++;
    product = product * userinput1;

  }

  average = sum / counter;
  cout << "The minimum value is: " << minimum << endl;
  cout << "The sum is:  " << sum <<endl;
  cout << "The average is: " << average << endl;
  cout << "The product is: "<< product<< endl;

  return 0;
}











