#include "bai1.h"

// Constructor mặc định
Diem::Diem() {
    iHoanh = 0;
    iTung = 0;
}

// Constructor có tham số
Diem::Diem(float Hoanh, float Tung) {
    iHoanh = Hoanh;
    iTung = Tung;
}

// Constructor sao chép
Diem::Diem(const Diem &x) {
    iHoanh = x.iHoanh;
    iTung = x.iTung;
}

// Phương thức xuất tọa độ
void Diem::Xuat() {
    cout << "(" << iHoanh << ", " << iTung << ")" << endl;
}

// Lấy tọa độ tung (y-axis)
float Diem::GetTungDo() {
    return iTung;
}

// Lấy tọa độ hoành (x-axis)
float Diem::GetHoanhDo() {
    return iHoanh;
}

// Thiết lập tọa độ tung (y-axis)
void Diem::SetTungDo(float Tung) {
    iTung = Tung;
}

// Thiết lập tọa độ hoành (x-axis)
void Diem::SetHoanhDo(float Hoanh) {
    iHoanh = Hoanh;
}

// Phương thức tính tiền (di chuyển điểm)
void Diem::TinhTien(float dX, float dY) {
    iHoanh += dX;
    iTung += dY;
}
