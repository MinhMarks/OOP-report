#include <bits/stdc++.h>
using namespace std;
struct fraction{
    int numerator, denominator;
    fraction(int numer = 0, int denom = 1){
        numerator = numer;
        denominator = denom;
        simplify();
    }
    void simplify(){
        int gcd = __gcd(numerator, denominator);
        numerator = numerator/gcd;
        denominator = denominator/gcd;
    }
    fraction operator + (const fraction& a) const {
        int denom = denominator*a.denominator;
        int numer = numerator*a.denominator + a.numerator*denominator;
        return fraction(numer, denom);
    }
    fraction operator - (const fraction& a) const {
        int denom = denominator*a.denominator;
        int numer = numerator*a.denominator - a.numerator*denominator;
        return fraction(numer, denom);
    }
    fraction operator * (const fraction& a) const {
        int numer = numerator*a.numerator;
        int denom = denominator*a.denominator;
        return fraction(numer, denom);
    }
    fraction operator / (const fraction& a) const {
        int numer = numerator*a.denominator;
        int denom = denominator*a.numerator;
        return fraction(numer, denom);
    }
};
int main()
{
    fraction a, b;
    return 0;
}
