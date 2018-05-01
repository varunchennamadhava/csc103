/* TODO: write a function that returns the union of two sets */


#include <iostream>
#include <set>
using namespace std;

set <int> (set <int> x, set<int> y)
{
  int i = 0;
  int j = 0;
  set<int> both;
  for (set<int>::iterator i = x.begin(); i != x.end(); i++) {
    both.insert(*i);
	}
  for (set<int>::iterator j = x.begin(); j != x.end(); j++) {
    both.insert(*j);
	}
  return both;
}


