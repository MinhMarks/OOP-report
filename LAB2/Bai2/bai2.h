#ifndef bai2_H
#define bai2_H

#include "D:\\UIT\\Subjects\\OOP\\LAB2\\Bai1\\bai1.h"
#include <iostream>
#include <cmath>

class TamGiac {
private:
    Diem A, B, C; // Ba dinh cua tam giac

public:
    // Phương thức nhập tọa do cac dinh tam giac
    void Nhap();

    // Phương thức xuất tọa độ các đỉnh tam giác
    void Xuat();

    // Phương thức tính tiền (di chuyển tam giác)
    void TinhTien(int dX, int dY);

    // Phương thức phóng to tam giác
    void PhongTo(float tiLe);

    // Phương thức thu nhỏ tam giác
    void ThuNho(float tiLe);

    // Phương thức quay tam giác quanh gốc tọa độ
    void Quay(float goc);
};

#endif
