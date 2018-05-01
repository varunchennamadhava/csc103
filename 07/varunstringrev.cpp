#include <iostream>
#include <string>
#include <vector>
using namespace std;

void reverseword( string userinput)
{
  vector <char> NW;
  for( int i = userinput.length(); i>=0; i--)
  {
    NW.push_back(userinput[i]);
  }

  for(int j = 0; j < NW.size(); j++)
  {
    cout << NW[j];
  }

  cout << endl;
}
int main()
{
  string fake;
  cout << "Enter word: ";
  cin >> fake;
  reverseword(fake);
  return 0;
}





