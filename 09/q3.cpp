/* TODO: write a function that takes a string and returns a boolean
 * indicating whether or not it was a palindrome.
 * */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool palindrome(string x)
{
  string fake;
  for(int i = x.size() - 1; i>=0; i--)
  {
    fake = fake + x[i];
  }


  if(x == fake)
  {
    return true;
  }

  if( x!= fake)
    return false;
}

int main()
{
  string userinput;
  cout << "Enter word: ";
  cin >> userinput;
  cout << palindrome(userinput) << endl;
  return 0;
}


