#include <iostream>
#include <string>
#include <vector>
using namespace std;

void reverseword( string userinput)
{
  string NW;
  for( int i = userinput.length(); i>=0; i--)
  {
    NW.push_back(userinput[i]);
  }
  cout << NW << endl;
}
int main()
{
  string fake;
  cout << "Enter word: ";
  cin >> fake;
  reverseword(fake);
  return 0;
}
