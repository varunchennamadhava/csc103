/* TODO:  write a function that takes a string and a character
 * and returns the number of occurences of the character in the string.
 * */




#include <iostream>
#include <string>
using namespace std;


int occurences(string fake, char x)
{
  int time= 0;
  for(int i = 0; i < fake.size(); i++)
  {
    if( x == fake[i])
    {
      time++;
    }
  }
  return time;
}


int main()
{
  string userinput;
  char c;
  cout << "enter string" << endl;
  cin >> userinput;
  cout << "enter character: ";
  cin >> c;
  cout << "There are " << occurences(userinput, c)<< " occurences of " << c <<
  " in " << userinput;
  cout << endl;

  return 0;
}






