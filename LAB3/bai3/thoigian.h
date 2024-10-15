#ifndef THOIGIAN_H
#define THOIGIAN_H

#include <iostream>
using namespace std;

class ThoiGian {
private:
    int iGio, iPhut, iGiay;  // Thuộc tính giờ, phút, giây

public:
    // Constructor
    ThoiGian();
    ThoiGian(int gio, int phut, int giay);

    // Phương thức tính tổng số giây
    int TinhGiay() const;

    // Phương thức tính lại giờ, phút, giây từ số giây
    void TinhLaiGio(int giay);

    // Toán tử cộng và trừ với số giây
    ThoiGian operator+(int giay);
    ThoiGian operator-(int giay);

    // Toán tử cộng và trừ với đối tượng ThoiGian
    ThoiGian operator+(const ThoiGian &tg);
    ThoiGian operator-(const ThoiGian &tg);

    // Toán tử tăng, giảm ++, --
    ThoiGian& operator++(); // Tiền tố
    ThoiGian operator++(int); // Hậu tố
    ThoiGian& operator--(); // Tiền tố
    ThoiGian operator--(int); // Hậu tố

    // Toán tử so sánh ==, !=, >=, <=, >, <
    bool operator==(const ThoiGian &tg);
    bool operator!=(const ThoiGian &tg);
    bool operator>=(const ThoiGian &tg);
    bool operator<=(const ThoiGian &tg);
    bool operator>(const ThoiGian &tg);
    bool operator<(const ThoiGian &tg);

    // Toán tử nhập >> và xuất <<
    friend istream& operator>>(istream &is, ThoiGian &tg);
    friend ostream& operator<<(ostream &os, const ThoiGian &tg);
};

#endif
