/* TODO: write a function that takes a string by reference and reverses it.
 * */

#include <iostream>
#include <string>
using namespace std;

string reverse(string &fake)
{
  string yellow;
  for(int j = fake.length() - 1; j>=0; j--)
  {
    yellow = yellow + fake[j];
  }

  return yellow;
}

int main()
{
  string userinput;
  cout << "Enter a string:  ";
  cin >> userinput;
  cout << reverse(userinput) << endl;
  cout << "UI == " << userinput << endl;

  return 0;
}


