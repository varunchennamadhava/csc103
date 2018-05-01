#include <iostream>
using namespace std;

int main()
{
  int x,y;
  y = 0;

  cout << "Please enter 5 numbers and enter stop:  ";
  while(cin >> x)
  {
    y = y + x;
  }

  cout << "The average of the numbers is  :" << y/5 << endl;

  return 0;

}


