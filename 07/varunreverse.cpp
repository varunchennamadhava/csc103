#include <iostream>
#include <vector>
using namespace std;

void printreversevector(vector <int> userinput)
{
  vector <int> newvector;
  for(int i = userinput.size() -1; i>=0; i--)
  {
    newvector.push_back(userinput[i]);
  }

  for(int j = 0; j< newvector.size(); j++)
  {
    cout << newvector[j] << endl;
  }
}

int main()
{
  vector <int> V;
  int n;
  cout << "Enter numbers: ";
  while(cin >> n)
  {
    V.push_back(n);
  }
  printreversevector(V);
  return 0;
}









