
	/* TODO: write a program that reads (arbitrarily many) integers from
	 * stdin and outputs the *second* smallest one.  NOTE: you don't need
	 * to store many numbers (all at once, that is) to do this!  You'll
	 * only need a few integer variables.  Think about invariants! */

#include <iostream>
using namespace std;


int main()
{
	int userinput, userinput2, minimum, minimum2;
	cout << "Please enter numbers: ";
	cin >> userinput;
	minimum2 = userinput;
	while(cin >> userinput2)
	{
		if(userinput2 < minimum)
		minimum2 = minimum;
		minimum = userinput2;
	}

	cout << "The min is:  " << minimum2 << endl;

return 0;
}










