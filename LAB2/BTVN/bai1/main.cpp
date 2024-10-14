#include <iostream>
#include "PhanSo.h"
using namespace std;

int main() {
    int n; // Số lượng phân số
    cout << "Nhap so luong phan so: ";
    cin >> n;

    // Khởi tạo mảng các phân số
    PhanSo *arr = new PhanSo[n];

    // Nhập vào các phân số
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan so thu " << i + 1 << ":" << endl;
        arr[i].Nhap();
    }

    // Tìm phân số lớn nhất và nhỏ nhất
    PhanSo max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i].LonHon(max)) {
            max = arr[i];
        }
        if (arr[i].NhoHon(min)) {
            min = arr[i];
        }
    }

    // Xuất kết quả
    cout << "Phan so lon nhat: ";
    max.Xuat();
    cout << endl;

    cout << "Phan so nho nhat: ";
    min.Xuat();
    cout << endl;

    // Giải phóng bộ nhớ
    delete[] arr;

    return 0;
}
