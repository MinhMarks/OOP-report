#include "NgayThangNam.h"
#include <iostream>

using namespace std;

// Constructors
NgayThangNam::NgayThangNam() : iNgay(1), iThang(1), iNam(1970) {}

NgayThangNam::NgayThangNam(int ngay, int thang, int nam)
    : iNgay(ngay), iThang(thang), iNam(nam) {}

// Tính tổng số ngày từ 24/11/4714 TCN đến ngày hiện tại
int NgayThangNam::TinhNgay() const {

    int year = iNam, month = iThang, day = iNgay;  

    if (month <= 2) {
        year--;
        month += 12;
    }
    
    int A = year / 100;
    int B = 2 - A + (A / 4);

    int JDN = int(365.25 * (year + 4716)) + int(30.6001 * (month + 1)) + day + B - 1524;
    return JDN;
}

NgayThangNam NgayThangNam::TinhNgayThangNam(int ngay){

    // cout << "\n debug:" << ngay << "\n" ; 
    int a = ngay + 32044;
    int b = (4 * a + 3) / 146097;
    int c = a - (146097 * b) / 4;

    int d = (4 * c + 3) / 1461;
    int e = c - (1461 * d) / 4;
    int m = (5 * e + 2) / 153;


    NgayThangNam ret(e - (153 * m + 2) / 5 + 1, m + 3 - 12 * (m / 10), 100 * b + d - 4800 + (m / 10)); 

    return ret; 
} 

// Toán tử + và -
NgayThangNam NgayThangNam::operator+(int ngay) {
    int tongNgay = TinhNgay() + ngay;
    return TinhNgayThangNam(tongNgay);  // Trả về tạm thời
}

NgayThangNam NgayThangNam::operator-(int ngay) {
    int tongNgay = TinhNgay() - ngay;
    return TinhNgayThangNam(tongNgay);  // Trả về tạm thời
}

NgayThangNam NgayThangNam::operator+(const NgayThangNam& other) {
    int tongNgay = TinhNgay() + other.TinhNgay();
    return TinhNgayThangNam(tongNgay);  // Trả về tạm thời
}

NgayThangNam NgayThangNam::operator-(const NgayThangNam& other) {
    int tongNgay = TinhNgay() - other.TinhNgay();
    return TinhNgayThangNam(tongNgay);  // Trả về tạm thời
}


// Toán tử ++, --
NgayThangNam& NgayThangNam::operator++() {
    // Logic cho toán tử tiền tố ++
    *this = *this + 1;
    return *this;
}

NgayThangNam NgayThangNam::operator++(int) {
    // Logic cho toán tử hậu tố ++
    NgayThangNam temp = *this;
    *this = *this + 1;
    return temp;
}

NgayThangNam& NgayThangNam::operator--() {
    // Logic cho toán tử tiền tố --
    *this = *this - 1;
    return *this;
}

NgayThangNam NgayThangNam::operator--(int) {
    // Logic cho toán tử hậu tố --
    NgayThangNam temp = *this;
    *this = *this - 1;
    return temp;
}

// Toán tử so sánh
bool NgayThangNam::operator==(const NgayThangNam& other) const {
    return (iNgay == other.iNgay && iThang == other.iThang && iNam == other.iNam);
}

bool NgayThangNam::operator!=(const NgayThangNam& other) const {
    return !(*this == other);
}

bool NgayThangNam::operator>=(const NgayThangNam& other) const {
    return TinhNgay() >= other.TinhNgay();
}

bool NgayThangNam::operator<=(const NgayThangNam& other) const {
    return TinhNgay() <= other.TinhNgay();
}

bool NgayThangNam::operator>(const NgayThangNam& other) const {
    return TinhNgay() > other.TinhNgay();
}

bool NgayThangNam::operator<(const NgayThangNam& other) const {
    return TinhNgay() < other.TinhNgay();
}

// Nhập và xuất dữ liệu
istream& operator>>(istream& is, NgayThangNam& nt) {
    cout << "Nhap ngay: "; is >> nt.iNgay;
    cout << "Nhap thang: "; is >> nt.iThang;
    cout << "Nhap nam: "; is >> nt.iNam;
    return is;
}

ostream& operator<<(ostream& os, const NgayThangNam& nt) {
    os << nt.iNgay << "/" << nt.iThang << "/" << nt.iNam;
    return os;
}
