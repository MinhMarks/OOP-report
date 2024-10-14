#ifndef PHANSO_H
#define PHANSO_H

class PhanSo {
private:
    int tuSo;    // Tử số
    int mauSo;   // Mẫu số
public:
    // Constructor mặc định
    PhanSo();
    
    // Constructor với tham số
    PhanSo(int tu, int mau);

    // Hàm nhập phân số
    void Nhap();

    // Hàm so sánh 2 phân số
    bool LonHon(const PhanSo &ps) const;
    bool NhoHon(const PhanSo &ps) const;

    // Hàm xuất phân số
    void Xuat() const;
};

#endif
