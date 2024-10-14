#ifndef bai2_H
#define bai2_H

#include "D:\\UIT\\Subjects\\OOP\\LAB2\\Bai1\\bai1.h"
#include <iostream>
#include <vector>

class Polygon {
private:
    std::vector<Diem> points; // Mảng lưu các điểm của đa giác
public:
    // Phương thức nhập thông tin đa giác
    void Nhap();

    // Phương thức tính diện tích đa giác
    float TinhDienTich();

    // Phương thức xuất diện tích
    void XuatDienTich();
};

#endif // POLYGON_H
