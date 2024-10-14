#include "bai2.h"

// Phương thức nhập thông tin đa giác
void Polygon::Nhap() {
    int n;
    std::cout << "Nhap so diem n (phai lon hon 2): ";
    std::cin >> n;

    // Kiểm tra số điểm
    if (n <= 2) {
        std::cout << "So diem phai lon hon 2!" << std::endl;
        return;
    }

    points.resize(n); // Đặt kích thước cho vector

    for (int i = 0; i < n; i++) {
        float x, y;
        std::cout << "Nhap toa do diem " << i + 1 << ": ";
        std::cin >> x >> y;
        points[i].SetHoanhDo(x);
        points[i].SetTungDo(y);
    }
}

// Phương thức tính diện tích đa giác
float Polygon::TinhDienTich() {
    float area = 0.0;
    int n = points.size();

    // Sử dụng công thức Shoelace
    for (int i = 0; i < n; i++) {
        int next = (i + 1) % n; // Điểm tiếp theo
        area += points[i].GetHoanhDo() * points[next].GetTungDo();
        area -= points[next].GetHoanhDo() * points[i].GetTungDo();
    }

    return std::abs(area) / 2.0; // Trả về diện tích tuyệt đối
}

// Phương thức xuất diện tích
void Polygon::XuatDienTich() {
    std::cout << "Dien tich cua da giac: " << TinhDienTich() << std::endl;
}
