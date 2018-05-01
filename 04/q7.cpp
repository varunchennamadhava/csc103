#include <iostream>
using namespace std;
int main()
{
  int a1, a2, a3, ui, i;
  cout << "Enter a number:  ";
  cin >> ui;
  a1 = 1;
  a2 = 1;
  i = 2;
  if(ui == 1 || ui == 2)
  {
   a3 = 1;
  }

if( ui > 2)
{
  while(i < ui && ui > 2)
  {
    a3 = a1 + a2;
    a1 = a2;
    a2 = a3;
    i++;
  }
}
  cout << a3 << endl;
  return 0;

}

