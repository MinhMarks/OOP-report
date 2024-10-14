#include <iostream>
#include "D:\\UIT\\Subjects\\OOP\\LAB2\\Bai1\\bai1.h"

using namespace std;

int main() {
    // Nhap toa do diem
    int hoanh, tung;
    cout << "Nhap hoanh do (x): ";
    cin >> hoanh;
    cout << "Nhap tung do (y): ";
    cin >> tung;

    Diem diem(hoanh, tung); // Tao diem

    

    int n;
    cout << "Nhap so luong chi thi: ";
    cin >> n;
     
    while ( n-- ) {

        int x;
        cout << "Nhap chi thi (1: nhan doi, 2: ve goc toa do, 3: tinh tien): ";
        cin >> x; 
        switch (x) {
            case 1: // Nhân đôi tung độ và hoành độ
                diem.SetHoanhDo(diem.GetHoanhDo() * 2);
                diem.SetTungDo(diem.GetTungDo() * 2);
                break;

            case 2: // Gán điểm về gốc tọa độ
                diem.SetHoanhDo(0);
                diem.SetTungDo(0);
                break;

            case 3: // Tịnh tiến theo trục
                int k, d;
                cout << "Nhap huong tinh tien (k = 0 cho truc x, k != 0 cho truc y): ";
                cin >> k;
                cout << "Nhap do tinh tien: ";
                cin >> d;

                if (k == 0) {
                    diem.TinhTien(d, 0); // Tinh tien theo truc x
                } else {
                    diem.TinhTien(0, d); // Tinh tien theo truc y
                }
                break;

            default: // Chi thi khac
                cout << "Khong lam gi." << endl;
                break;
        }

    }

    // Xuat thong tin diem
    cout << "Toa do diem sau khi thuc hien cac chi thi: ";
    diem.Xuat();

    return 0;
}
