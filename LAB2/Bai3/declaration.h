#ifndef declaration_H
#define declaration_H

#include <iostream>
#include <string>
using namespace std;

class ThiSinh {
private:
    string Ten;              // Tên thí sinh
    string MSSV;         // Mã số sinh viên
    int iNgay, iThang, iNam; // Ngày tháng năm sinh
    float fToan;        // Điểm toán
    float fVan;         // Điểm văn
    float fAnh;         // Điểm anh

public:
    // Constructor mặc định
    ThiSinh();

    // Phương thức nhập thông tin
    void Nhap();

    // Phương thức xuất thông tin
    void Xuat();

    // Phương thức tính tổng điểm
    float Tong();

    // Getter cho MSSV
    string GetMSSV();
};

#endif
