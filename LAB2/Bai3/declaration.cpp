#include "declaration.h"

// Constructor mặc định
ThiSinh::ThiSinh() : Ten(""), MSSV(""), iNgay(0), iThang(0), iNam(0), fToan(0), fVan(0), fAnh(0) {}

// Phương thức nhập thông tin
void ThiSinh::Nhap() {
    cout << "Nhap ten thi sinh: ";
    getline(cin, Ten);
    cout << "Nhap MSSV: ";
    getline(cin, MSSV);
    cout << "Nhap ngay sinh: ";
    cin >> iNgay;
    cout << "Nhap thang sinh: ";
    cin >> iThang;
    cout << "Nhap nam sinh: ";
    cin >> iNam;
    cout << "Nhap diem Toan: ";
    cin >> fToan;
    cout << "Nhap diem Van: ";
    cin >> fVan;
    cout << "Nhap diem Anh: ";
    cin >> fAnh;
    cin.ignore(); // Để xóa buffer newline sau khi nhập điểm
}

// Phương thức xuất thông tin
void ThiSinh::Xuat() {
    cout << "Ten: " << Ten << ", MSSV: " << MSSV 
         << ", Ngay sinh: " << iNgay << "/" << iThang << "/" << iNam 
         << ", Diem Toan: " << fToan << ", Diem Van: " << fVan 
         << ", Diem Anh: " << fAnh << endl;
}

// Phương thức tính tổng điểm
float ThiSinh::Tong() {
    return fToan + fVan + fAnh;
}

// Getter cho MSSV
string ThiSinh::GetMSSV() {
    return MSSV;
}
