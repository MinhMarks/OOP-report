#include "thoigian.h"

int main() {
    ThoiGian tg1, tg2, tg3;
    
    // Nhập thời gian
    cout << "Nhap thoi gian thu nhat: " << endl;
    cin >> tg1;
    cout << "Nhap thoi gian thu hai: " << endl;
    cin >> tg2;

    // Cộng và trừ thời gian
    tg3 = tg1 + tg2;
    cout << "Tong thoi gian: " << tg3 << endl;

    tg3 = tg1 - tg2;
    cout << "Hieu thoi gian: " << tg3 << endl;

    // Cộng với giây
    tg3 = tg1 + 500;
    cout << "Thoi gian sau khi cong 500 giay: " << tg3 << endl;

    // So sánh
    if (tg1 == tg2) {
        cout << "Hai thoi gian bang nhau" << endl;
    } else if (tg1 > tg2) {
        cout << "Thoi gian thu nhat lon hon thoi gian thu hai" << endl;
    } else {
        cout << "Thoi gian thu nhat nho hon thoi gian thu hai" << endl;
    }

    // Tăng và giảm thời gian
    ++tg1;
    cout << "Thoi gian sau khi tang: " << tg1 << endl;

    --tg2;
    cout << "Thoi gian sau khi giam: " << tg2 << endl;

    return 0;
}
