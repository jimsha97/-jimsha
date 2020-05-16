#include<iostream>
using namespace std;
float series_result(int n)
{
   float denominator = 1;
   float result = 0;
   for(int i = 1; i<= n; i++) {
      denominator =denominator* i;
      result = result+float(i/denominator);
   }
   return result;
}
main() {
   int n;
   cout << "Enter number of terms: ";
   cin >> n;
   cout << "Result: " << series_result(n);
}
