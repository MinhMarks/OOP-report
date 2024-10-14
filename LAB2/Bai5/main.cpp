#include <iostream>
#include "bai2.h"

using namespace std;

int main() {
    TamGiac tamGiac;

    // Nhập tọa độ 3 điểm
    tamGiac.Nhap();

    // Nhập hướng và độ dài tịnh tiến
    float huong, doDai;
    cout << "Nhap huong tinh tien (don vi la do): ";
    cin >> huong;
    cout << "Nhap do dai tinh tien: ";
    cin >> doDai;

    // Tịnh tiến tam giác
    tamGiac.TinhTien(huong, doDai);

    // Xuất tọa độ 3 điểm sau khi tịnh tiến
    cout << "Toa do 3 diem sau khi tinh tien:" << endl;
    tamGiac.Xuat();

    return 0;
}
