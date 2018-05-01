#include <iostream>
using namespace std;

int addnumbers(userinput&, userinput2&)
{
  int sum = userinput2 + userinput;
  return sum;
}


int main()
{
  int userinput2, userinput;
    cout << "Enter first number: ";
    cin >> userinput;
    cout << "Enter a second number:";
    cin >> userinput2;
    cout << addnumbers << endl;
  return 0;
}

