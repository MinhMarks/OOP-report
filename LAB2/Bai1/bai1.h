#ifndef bai1_H
#define bai1_H

#include <iostream>
using namespace std;

class Diem {
private:
    float iHoanh; // Tọa độ hoành (x-axis)
    float iTung;  // Tọa độ tung (y-axis)

public:
    // Constructor mặc định
    Diem();

    // Constructor có tham số
    Diem(float Hoanh, float Tung);

    // Constructor sao chép
    Diem(const Diem &x);

    // Phương thức xuất tọa độ
    void Xuat();

    // Lấy tọa độ tung (y-axis)
    float GetTungDo();

    // Lấy tọa độ hoành (x-axis)
    float GetHoanhDo();

    // Thiết lập tọa độ tung (y-axis)
    void SetTungDo(float Tung);

    // Thiết lập tọa độ hoành (x-axis)
    void SetHoanhDo(float Hoanh);

    // Phương thức tính tiền (di chuyển điểm)
    void TinhTien(float dX, float dY);
};

#endif
