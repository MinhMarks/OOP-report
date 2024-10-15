#include "sophuc.h"

// Constructor mặc định
SoPhuc::SoPhuc() : dThuc(0), dAo(0) {}

// Constructor có tham số
SoPhuc::SoPhuc(double thuc, double ao) : dThuc(thuc), dAo(ao) {}

// Toán tử cộng
SoPhuc SoPhuc::operator+(const SoPhuc &sp) {
    return SoPhuc(dThuc + sp.dThuc, dAo + sp.dAo);
}

// Toán tử trừ
SoPhuc SoPhuc::operator-(const SoPhuc &sp) {
    return SoPhuc(dThuc - sp.dThuc, dAo - sp.dAo);
}

// Toán tử nhân
SoPhuc SoPhuc::operator*(const SoPhuc &sp) {
    double thuc = dThuc * sp.dThuc - dAo * sp.dAo;
    double ao = dThuc * sp.dAo + dAo * sp.dThuc;
    return SoPhuc(thuc, ao);
}

// Toán tử chia
SoPhuc SoPhuc::operator/(const SoPhuc &sp) {
    double mau = sp.dThuc * sp.dThuc + sp.dAo * sp.dAo;
    double thuc = (dThuc * sp.dThuc + dAo * sp.dAo) / mau;
    double ao = (dAo * sp.dThuc - dThuc * sp.dAo) / mau;
    return SoPhuc(thuc, ao);
}

// Toán tử so sánh ==
bool SoPhuc::operator==(const SoPhuc &sp) {
    return dThuc == sp.dThuc && dAo == sp.dAo;
}

// Toán tử so sánh !=
bool SoPhuc::operator!=(const SoPhuc &sp) {
    return !(*this == sp);
}

// Toán tử nhập >>
istream& operator>>(istream &is, SoPhuc &sp) {
    cout << "Nhap phan thuc: ";
    is >> sp.dThuc;
    cout << "Nhap phan ao: ";
    is >> sp.dAo;
    return is;
}

// Toán tử xuất <<
ostream& operator<<(ostream &os, const SoPhuc &sp) {
    os << sp.dThuc;
    if (sp.dAo >= 0)
        os << " + " << sp.dAo << "i";
    else
        os << " - " << -sp.dAo << "i";
    return os;
}
