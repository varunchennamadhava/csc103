#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int temp;
  int userinput;
  vector<int> sorting;
  cout << "Enter numbers: " << endl;
  while(cin >> userinput)
  {
    sorting.push_back(userinput);
  }
  for(int j = 0; j<sorting.size(); j++)
  {
    for(int w = j + 1; w < sorting.size(); w++)

    if(sorting[w] < sorting[j])
    {
      temp = sorting[j];// temp = 5
      sorting[j] = sorting[w];
      sorting[w] = temp;
    }
  }



for(int print = 0; print< sorting.size(); print++)
  {
    cout << sorting[print] << endl;
  }

cout << "Second min value is: " << sorting[1] << endl;

return 0;



}




