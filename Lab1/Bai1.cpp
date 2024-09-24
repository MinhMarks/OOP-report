#include <bits/stdc++.h>
using namespace std;

struct fraction{
    int numerator, denominator;
    void symplify(){
        if ( mau == 0 ) {
          cout << "invalid fraction\n"; 
          return; 
        }
        int temp = __gcd(numrator, denominator);
        numrator /= temp;
        denominator /= temp;
    }
};

int main() {
    fraction a;
    cin>>a.numerator>>a.denominator;
    a.symplify();
    cout<<a.numerator<<" "<<a.denominator;
    return 0;
}
