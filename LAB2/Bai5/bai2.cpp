#include "bai2.h"

// Phương thức nhập tọa độ các đỉnh tam giác
void TamGiac::Nhap() {
    float x, y;
    
    std::cout << "Nhap toa do dinh A: ";
    std::cin >> x >> y;
    A.SetHoanhDo(x);
    A.SetTungDo(y);
    
    std::cout << "Nhap toa do dinh B: ";
    std::cin >> x >> y;
    B.SetHoanhDo(x);
    B.SetTungDo(y);
    
    std::cout << "Nhap toa do dinh C: ";
    std::cin >> x >> y;
    C.SetHoanhDo(x);
    C.SetTungDo(y);
}

// Phương thức xuất tọa độ các đỉnh tam giác
void TamGiac::Xuat() {
    std::cout << "Toa do dinh A: ";
    A.Xuat();
    std::cout << "Toa do dinh B: ";
    B.Xuat();
    std::cout << "Toa do dinh C: ";
    C.Xuat();
}

// Phương thức tính tiền (di chuyển tam giác)
void TamGiac::TinhTien(float huong, float doDai) {
    // Chuyển đổi góc từ độ sang radian
    float radian = huong * (3.14 / 180.0);
    // Tính toán các thành phần tịnh tiến
    float dX = doDai * cos(radian);
    float dY = doDai * sin(radian);
    std::cout << dX << " " << dY << "\n" ; 
    // Tịnh tiến từng điểm
    A.TinhTien(dX, dY);
    B.TinhTien(dX, dY);
    C.TinhTien(dX, dY);
}

// Phương thức phóng to tam giác
void TamGiac::PhongTo(float tiLe) {
    // Lấy trung điểm của tam giác
    float midX = (A.GetHoanhDo() + B.GetHoanhDo() + C.GetHoanhDo()) / 3;
    float midY = (A.GetTungDo() + B.GetTungDo() + C.GetTungDo()) / 3;

    A.SetHoanhDo(midX + tiLe * (A.GetHoanhDo() - midX));
    A.SetTungDo(midY + tiLe * (A.GetTungDo() - midY));

    B.SetHoanhDo(midX + tiLe * (B.GetHoanhDo() - midX));
    B.SetTungDo(midY + tiLe * (B.GetTungDo() - midY));

    C.SetHoanhDo(midX + tiLe * (C.GetHoanhDo() - midX));
    C.SetTungDo(midY + tiLe * (C.GetTungDo() - midY));
}

// Phương thức thu nhỏ tam giác
void TamGiac::ThuNho(float tiLe) {
    PhongTo(1 / tiLe); // Phóng to ngược lại
}

// Phương thức quay tam giác quanh gốc tọa độ
void TamGiac::Quay(float goc) {
    // Chuyển đổi góc từ độ sang radian
    float radian = goc * M_PI / 180.0;

    // Hàm quay quanh gốc tọa độ
    auto quayDinh = [&](Diem &d) {
        float x = d.GetHoanhDo();
        float y = d.GetTungDo();
        d.SetHoanhDo(round(x * cos(radian) - y * sin(radian)));
        d.SetTungDo(round(x * sin(radian) + y * cos(radian)));
    };

    quayDinh(A);
    quayDinh(B);
    quayDinh(C);
}
