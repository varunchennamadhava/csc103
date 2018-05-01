
/* TODO: write the following function which converts all lower
 * case letters to upper case.
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
  vector <int> x;
  char y;
  int hello;
  string userinput;
  char fake;
  vector<char> uppercase;

  getline(cin, userinput);

  for(int j = 0; j<userinput.length(); j++)
  {
      hello =  userinput[j] - 32;
    x.push_back(hello);
  }

  for(int u = 0; u < x.size(); u++)
  {
    fake = x[u];
    uppercase.push_back(fake);
  }

  for(int s = 0; s< uppercase.size(); s++)
  {
    cout << uppercase[s];
  }

  cout << endl;
  return 0;
}





