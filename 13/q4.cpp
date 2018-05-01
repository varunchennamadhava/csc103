/* TODO: write a function that takes an index i and a vector
 * V and removes the i-th element.  If you don't have to
 * preserve the order, how could you do this with only a
 * constant number of steps?  (Say, using one call to pop_back()?)
 * */

 #include <iostream>
 #include <vector>
 using namespace std;

 vector<int> removei( vector<int> &fake, int& x)
 {
   int tmp;
tmp = fake[x -1];
fake[x - 1] = fake[fake.size() - 1];
fake[fake.size() -1] = tmp;
   fake.pop_back();
   return fake;
 }


 int main()
 {
   vector<int> real = {22,45,67,45,67,88,89,12,34};
   int w = 4;
   removei(real, w);
   for(int i = 0; i < real.size(); i++)
   {
     cout << real[i] << " ";
   }

   cout << endl;
   return 0;
 }
