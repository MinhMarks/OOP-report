#include <iostream>
#include "declaration.h"

using namespace std;

int main() {
    int n;
    cout << "Nhap so thi sinh: ";
    cin >> n;
    cin.ignore(); // Để xóa buffer newline sau khi nhập số thí sinh

    ThiSinh* dsThiSinh = new ThiSinh[n]; // Mảng thí sinh

    // Nhập thông tin cho từng thí sinh
    for (int i = 0; i < n; ++i) {
        cout << "Nhap thong tin thi sinh " << (i + 1) << ":" << endl;
        dsThiSinh[i].Nhap();
    }

    cout << "\nThi sinh co tong diem lon hon 15:" << endl;
    for (int i = 0; i < n; ++i) {
        if (dsThiSinh[i].Tong() > 15) {
            dsThiSinh[i].Xuat();
        }
    }

    // Tìm thí sinh có điểm cao nhất
    int maxIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (dsThiSinh[i].Tong() > dsThiSinh[maxIndex].Tong()) {
            maxIndex = i;
        }
    }

    cout << "\nThi sinh co diem cao nhat:" << endl;
    dsThiSinh[maxIndex].Xuat();

    // Giải phóng bộ nhớ
    delete[] dsThiSinh;

    return 0;
}
