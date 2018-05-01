#include <iostream>
using namespace std;

int fibon(int x)
{
  int first,second,result;
  first = 1;
  second = 1;
  result = 0;
if(x<=2) return 1;
else{
  while(x > 2)
  {
    result = first + second;
    first = second;
    second = result;
    x--;
  }

  return result;
}
}
  int main()
  {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "The " << a << " term of the fibonanci sequence is: " << fibon(a) << endl;
    return 0;
  }


