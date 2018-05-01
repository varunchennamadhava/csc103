#include <iostream>
using namespace std;

double averagevalue( double x, double y, double z)
{
  double average;
  average = (x + y + z)/3;
  return average;

}

int main()
{
  double a,b,c;
  cout << "enter three numbers" << endl;

  cin >> a;
 cin >> b;
  cin>> c;
  cout << averagevalue(a,b,c) << endl;

  return 0;
}
