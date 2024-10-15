#include "NgayThangNam.h"
// #include <iostream>

using namespace std;

int main() {
    NgayThangNam nt1(1, 1, 2023), nt2;

    // Nhập giá trị cho nt2
    cin >> nt2;

    // In ra giá trị của nt2
    cout << "Ngay thang nam vua nhap: " << nt2 << endl;

    // Sử dụng toán tử + để thêm ngày
    nt2 = nt2 + 10;
    cout << "Sau khi cong 10 ngay: " << nt2 << endl;

    // Sử dụng toán tử --
    --nt2;
    cout << "Sau khi tru 1 ngay (prefix --): " << nt2 << endl;

    // So sánh hai ngày
    if (nt1 == nt2) {
        cout << "Hai ngay bang nhau" << endl;
    } else if (nt1 > nt2) {
        cout << "nt1 lon hon nt2" << endl;
    } else {
        cout << "nt1 nho hon nt2" << endl;
    }

    return 0;
}
