/* TODO: write a function that returns void, and takes two
 * POINTERS to integers, and swaps the contents of those two
 * memory locations.  Note: part of this exercise is understanding
 * what I'm asking for...
 * */


#include <iostream>
using namespace std;

void swap (int*&x, int*&y)
{
  int* temp;
  cout << "Intial Address: " << endl;
  cout << "X ---> " << x <<endl;
  cout << "Y ---> " << y <<endl;

  cout << " ---------------- " << endl;
  cout << "After switched" <<endl;


  temp = y;
  y = x;
  x = temp;

  cout << "X ---> " << x <<endl;
  cout << "Y ---> " << y <<endl;

}

int main()
{

  int hello = 7;
  int *p = &hello;
  int hello1 = 90;
  int *t = &hello1;
  swap(p , t);
  cout << "-----------" << endl;
  cout << "In int main: " << endl;
  cout << "x is:  " << p << endl;
  cout << "y is:  " << t << endl;
  return 0;
}



