#include "thoigian.h"

// Constructor mặc định
ThoiGian::ThoiGian() : iGio(0), iPhut(0), iGiay(0) {}

// Constructor có tham số
ThoiGian::ThoiGian(int gio, int phut, int giay) : iGio(gio), iPhut(phut), iGiay(giay) {}

// Phương thức tính tổng số giây
int ThoiGian::TinhGiay() const {
    return iGio * 3600 + iPhut * 60 + iGiay;
}

// Phương thức tính lại giờ, phút, giây từ tổng số giây
void ThoiGian::TinhLaiGio(int giay) {
    iGio = giay / 3600;
    giay %= 3600;
    iPhut = giay / 60;
    iGiay = giay % 60;
}

// Toán tử cộng với số giây
ThoiGian ThoiGian::operator+(int giay) {
    int tongGiay = TinhGiay() + giay;
    ThoiGian tg;
    tg.TinhLaiGio(tongGiay);
    return tg;
}

// Toán tử trừ với số giây
ThoiGian ThoiGian::operator-(int giay) {
    int tongGiay = TinhGiay() - giay;
    ThoiGian tg;
    tg.TinhLaiGio(tongGiay);
    return tg;
}

// Toán tử cộng với ThoiGian
ThoiGian ThoiGian::operator+(const ThoiGian &tg) {
    int tongGiay = TinhGiay() + tg.TinhGiay();
    ThoiGian result;
    result.TinhLaiGio(tongGiay);
    return result;
}

// Toán tử trừ với ThoiGian
ThoiGian ThoiGian::operator-(const ThoiGian &tg) {
    int tongGiay = TinhGiay() - tg.TinhGiay();
    ThoiGian result;
    result.TinhLaiGio(tongGiay);
    return result;
}

// Toán tử tăng tiền tố ++
ThoiGian& ThoiGian::operator++() {
    *this = *this + 1;
    return *this;
}

// Toán tử tăng hậu tố ++
ThoiGian ThoiGian::operator++(int) {
    ThoiGian temp = *this;
    *this = *this + 1;
    return temp;
}

// Toán tử giảm tiền tố --
ThoiGian& ThoiGian::operator--() {
    *this = *this - 1;
    return *this;
}

// Toán tử giảm hậu tố --
ThoiGian ThoiGian::operator--(int) {
    ThoiGian temp = *this;
    *this = *this - 1;
    return temp;
}

// Toán tử so sánh ==
bool ThoiGian::operator==(const ThoiGian &tg) {
    return TinhGiay() == tg.TinhGiay();
}

// Toán tử so sánh !=
bool ThoiGian::operator!=(const ThoiGian &tg) {
    return !(*this == tg);
}

// Toán tử so sánh >=
bool ThoiGian::operator>=(const ThoiGian &tg) {
    return TinhGiay() >= tg.TinhGiay();
}

// Toán tử so sánh <=
bool ThoiGian::operator<=(const ThoiGian &tg) {
    return TinhGiay() <= tg.TinhGiay();
}

// Toán tử so sánh >
bool ThoiGian::operator>(const ThoiGian &tg) {
    return TinhGiay() > tg.TinhGiay();
}

// Toán tử so sánh <
bool ThoiGian::operator<(const ThoiGian &tg) {
    return TinhGiay() < tg.TinhGiay();
}

// Toán tử nhập >>
istream& operator>>(istream &is, ThoiGian &tg) {
    cout << "Nhap gio: ";
    is >> tg.iGio;
    cout << "Nhap phut: ";
    is >> tg.iPhut;
    cout << "Nhap giay: ";
    is >> tg.iGiay;
    return is;
}

// Toán tử xuất <<
ostream& operator<<(ostream &os, const ThoiGian &tg) {
    os << tg.iGio << "h:" << tg.iPhut << "m:" << tg.iGiay << "s";
    return os;
}
