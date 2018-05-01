/* TODO: write an isPrime function that takes an integer and returns a boolean
 * value indicating whether or not it is prime.  */

 #include <iostream>
 using namespace std;

 bool isprime (int x)
 {
   if(x == 0) return false;
   int i;
   for(i = (x-1); i>=2; i--)
   {
     if(x%i == 0) return false;

     if(i == 2)
     return true;
   }


 }

 int main()
 {
   int a;
   while(cin >> a)
   {
   cout << isprime(a) << endl;
   }

   return 0;

 }
