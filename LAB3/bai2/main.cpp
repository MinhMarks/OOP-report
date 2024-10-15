#include "sophuc.h"

int main() {
    SoPhuc sp1, sp2, sp3;
    
    // Nhập hai số phức
    cout << "Nhap so phuc thu nhat: " << endl;
    cin >> sp1;
    cout << "Nhap so phuc thu hai: " << endl;
    cin >> sp2;

    // Cộng hai số phức
    sp3 = sp1 + sp2;
    cout << "Tong hai so phuc: " << sp3 << endl;

    // Trừ hai số phức
    sp3 = sp1 - sp2;
    cout << "Hieu hai so phuc: " << sp3 << endl;

    // Nhân hai số phức
    sp3 = sp1 * sp2;
    cout << "Tich hai so phuc: " << sp3 << endl;

    // Chia hai số phức
    sp3 = sp1 / sp2;
    cout << "Thuong hai so phuc: " << sp3 << endl;

    // So sánh hai số phức
    if (sp1 == sp2) {
        cout << "Hai so phuc bang nhau" << endl;
    } else {
        cout << "Hai so phuc khong bang nhau" << endl;
    }

    return 0;
}


/*
\begin{class}[text width=6cm]{SoPhuc}{0,0}
    \attribute{- double dThuc}
    \attribute{- double dAo}
    \operation{+ SoPhuc()}
    \operation{+ SoPhuc(double thuc, double ao)}
    \operation{+ SoPhuc operator+(const SoPhuc \&)}
    \operation{+ SoPhuc operator-(const SoPhuc \&)}
    \operation{+ SoPhuc operator*(const SoPhuc \&)}
    \operation{+ SoPhuc operator/(const SoPhuc \&)}
    \operation{+ bool operator==(const SoPhuc \&)}
    \operation{+ bool operator!=(const SoPhuc \&)}
    \operation{+ friend istream\& operator>>(istream\&, SoPhuc\&)}
    \operation{+ friend ostream\& operator<<(ostream\&, const SoPhuc\&)}
\end{class}
*/