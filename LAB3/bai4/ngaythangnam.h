#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H

#include <iostream>

class NgayThangNam {
private:
    int iNgay, iThang, iNam;

public:
    // Constructors
    NgayThangNam();
    NgayThangNam(int ngay, int thang, int nam);

    // Tính số ngày từ ngày 1/1/0001 đến ngày hiện tại
    int TinhNgay() const;
    NgayThangNam TinhNgayThangNam(int ngay); 

    // Operator overloads
    NgayThangNam operator+(int ngay);
    NgayThangNam operator-(int ngay);

    NgayThangNam operator-(const NgayThangNam &other);
    NgayThangNam operator+(const NgayThangNam &other);

    // Toán tử ++, --
    NgayThangNam& operator++();    // Tiền tố
    NgayThangNam operator++(int);  // Hậu tố
    NgayThangNam& operator--();    // Tiền tố
    NgayThangNam operator--(int);  // Hậu tố

    // Toán tử so sánh
    bool operator==(const NgayThangNam& other) const;
    bool operator!=(const NgayThangNam& other) const;
    bool operator>=(const NgayThangNam& other) const;
    bool operator<=(const NgayThangNam& other) const;
    bool operator>(const NgayThangNam& other) const;
    bool operator<(const NgayThangNam& other) const;

    // Nhập và xuất dữ liệu
    friend std::istream& operator>>(std::istream& is, NgayThangNam& nt);
    friend std::ostream& operator<<(std::ostream& os, const NgayThangNam& nt);
};

#endif
