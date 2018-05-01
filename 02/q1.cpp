#include <iostream>
using namespace std;

int main()
{
  int x,y,z, average;
  cout << "Enter three numbers:  " << endl;

  cin >> x;
  cin >> y;
  cin >> z;

  average = (x+y+z)/3;

  cout << "The average of the three numbers is: " << average << endl;

  return 0;

}
