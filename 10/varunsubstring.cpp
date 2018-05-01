
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int function(string x, string y)
{

  int k =0;

  for (int i = 0; i < x.length(); i++)
  {
    if(y[0] == x[i])
    {
      while(x[i+k] == y[k])
      {
        k++;
        if(k >= y.length())
        break;
      }
        if(k == y.length())
        {
          return i;

        }

        else
          k = 0;
      }
    }

    return -1;
  }




int main()
    {
      string hello1, hello;
    cout << "Enter word: ";
      cin >> hello;
      cout << "enter another word: ";
      cin >> hello1;
    cout << function(hello, hello1) << endl;
      return 0;
    }




