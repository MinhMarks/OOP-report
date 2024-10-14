#include "bai1.h"

int main() {
    freopen("o.out","w", stdout ); 
    // Tạo đối tượng điểm sử dụng constructor mặc định
    Diem d1;
    cout << "Diem d1: ";
    d1.Xuat();

    // Tạo đối tượng điểm sử dụng constructor có tham số
    Diem d2(3, 4);
    cout << "Diem d2: ";
    d2.Xuat();

    // Tạo đối tượng điểm sử dụng constructor sao chép
    Diem d3(d2);
    cout << "Diem d3 (copy of d2): ";
    d3.Xuat();

    // TinhTien (di chuyển điểm)
    d2.TinhTien(2, 3);
    cout << "Diem d2 sau khi tinh tien (di chuyen): ";
    d2.Xuat();

    // Sử dụng Get và Set
    d1.SetHoanhDo(5);
    d1.SetTungDo(7);
    cout << "Diem d1 sau khi thay doi hoanh do va tung do: ";
    d1.Xuat();

    return 0;
}
