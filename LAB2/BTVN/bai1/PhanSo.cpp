#include <iostream>
#include "PhanSo.h"
using namespace std;

// Constructor mặc định
PhanSo::PhanSo() {
    tuSo = 0;
    mauSo = 1; // Mẫu số mặc định là 1
}

// Constructor với tham số
PhanSo::PhanSo(int tu, int mau) {
    tuSo = tu;
    // Kiểm tra mẫu số phải khác 0
    while (mau == 0) {
        cout << "Mau so khong the bang 0. Nhap lai mau so: ";
        cin >> mau;
    }
    mauSo = mau;
}

// Hàm nhập phân số
void PhanSo::Nhap() {
    cout << "Nhap tu so: ";
    cin >> tuSo;
    cout << "Nhap mau so: ";
    cin >> mauSo;
    // Kiểm tra mẫu số phải khác 0
    while (mauSo == 0) {
        cout << "Mau so khong the bang 0. Nhap lai mau so: ";
        cin >> mauSo;
    }
}

// Hàm so sánh lớn hơn
bool PhanSo::LonHon(const PhanSo &ps) const {
    return (tuSo * ps.mauSo > ps.tuSo * mauSo);
}

// Hàm so sánh nhỏ hơn
bool PhanSo::NhoHon(const PhanSo &ps) const {
    return (tuSo * ps.mauSo < ps.tuSo * mauSo);
}

// Hàm xuất phân số
void PhanSo::Xuat() const {
    cout << tuSo << "/" << mauSo;
}
