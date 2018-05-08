#include <iostream>
using namespace std;

void printvertically(int y)
{

  if(y< 10)
  {
    cout << y << endl;
    return;
  }

  printvertically(y/10);
    cout << y%10<< endl;
}





int main()
{
  int w;
  cout << "enter number: " << endl;
  cin >> w;
  printvertically(w);
  return 0;
}


