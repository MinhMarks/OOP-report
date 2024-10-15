#ifndef SOPHUC_H
#define SOPHUC_H

#include <iostream>
using namespace std;

class SoPhuc {
private:
    double dThuc, dAo;  // Thuộc tính phần thực và phần ảo

public:
    // Constructor
    SoPhuc();
    SoPhuc(double thuc, double ao);

    // Định nghĩa toán tử +, -, *, /
    SoPhuc operator+(const SoPhuc &sp);
    SoPhuc operator-(const SoPhuc &sp);
    SoPhuc operator*(const SoPhuc &sp);
    SoPhuc operator/(const SoPhuc &sp);

    // Định nghĩa toán tử so sánh == và !=
    bool operator==(const SoPhuc &sp);
    bool operator!=(const SoPhuc &sp);

    // Định nghĩa toán tử nhập >> và xuất <<
    friend istream& operator>>(istream &is, SoPhuc &sp);
    friend ostream& operator<<(ostream &os, const SoPhuc &sp);
};

#endif
