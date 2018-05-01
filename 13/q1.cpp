
/* TODO: you can use sets to sort a vector or an array.  Try it maybe. */

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
  set<int> sort;
  vector <int> coolvector = {1,78,23,45,67, 111119, 12, 45,56, 4, 1};

  for(int i = 0; i < coolvector.size(); i++)
  {
    sort.insert(coolvector[i]);
  }

  for (set<int>::iterator j = sort.begin(); j != sort.end(); j++) {
		cout << *j << "\n";
	}

  cout << " ------------- " << endl;

cout << *(j) << endl;

    return 0;
}

