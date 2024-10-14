#include "bai2.h"

int main() {
    TamGiac tamGiac;

    // Nhập tọa độ các đỉnh tam giác
    tamGiac.Nhap();

    // Xuất tọa độ các đỉnh tam giác
    std::cout << "Toa do cac dinh tam giac:\n";
    tamGiac.Xuat();

    // Tinh tien
    tamGiac.TinhTien(2, 3);
    std::cout << "Toa do sau khi tinh tien:\n";
    tamGiac.Xuat();

    // Phong to
    tamGiac.PhongTo(2.0);
    std::cout << "Toa do sau khi phong to:\n";
    tamGiac.Xuat();

    // Thu nho
    tamGiac.ThuNho(2.0);
    std::cout << "Toa do sau khi thu nho:\n";
    tamGiac.Xuat();

    // Quay
    tamGiac.Quay(90); // Quay 90 độ
    std::cout << "Toa do sau khi quay 90 do:\n";
    tamGiac.Xuat();

    return 0;
}
