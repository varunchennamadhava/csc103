/* TODO: compute the intersection of two sets.
 * Recall that the intersection of two sets is the set
 * consisting of the elements they have in common.  E.g.,
 * intersection of {2,3,4,5,6,7} and {1,2,4,7,11,44} is
 * {2,4,7}.  Here's a start: */

#include <iostream>
#include <set>
using namespace std;



int main()
{
  set <int> combined;
  set<int> s1 = {1,34,56,79,12,12};
	set<int> s2 = {2,79,56};

  for (set<int>::iterator i = s1.begin(); i != s1.end(); i++) {
		 for (set<int>::iterator j = s2.begin(); j != s2.end(); j++) {
     if(*i == *j)
     {
       combined.insert(*i);
     }
	}
}

  	for (set<int>::iterator owo = combined.begin(); owo != combined.end(); owo++) {
		cout << *owo << "\n";
                              }

return 0;
}





