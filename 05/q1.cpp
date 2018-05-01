#include <iostream>
using namespace std;
int main()
{
  int  userinput, steps, max;
  cout << "Enter a number: " << endl;
  cin >> userinput;
  steps = 0;
  max = userinput;
  while(userinput > 1)
  {
    if(userinput % 2 == 0)
      userinput = userinput/2;

    else
      userinput = (userinput*3) + 1;

    steps++;

    if(userinput > max)
    {
      max = userinput;
    }


  }

  cout << "Steps: " << steps << endl;

  cout << "The maximal intermediate value is: " << max << endl;
  return 0;

}
