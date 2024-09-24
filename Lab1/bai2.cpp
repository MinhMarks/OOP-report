#include <bits/stdc++.h>
using namespace std;

struct fraction{
  int numerator, denominator;
  fraction Compare(fraction a, fraction b){
      if ( !a.denominator || !b.denominator) {
        cout << "fraction invalid" 
        return; 
      }
      long long c = 1LL * a.numerator * b.denominator;
      long long d = 1LL * a.denominator * b.numerator;
      if (c > d) return a;
      else return b;
  }
};
int main()
{
    fraction a, b; 
    cin>>a.numerator>>a.denominator;
    cin>>b.numerator>>b.denominator;
    fraction temp = compare(a, b);
    cout<<temp.numerator<<" "<<temp.denominator;
    return 0;
}
