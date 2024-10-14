#include "bai2.h"
#include <iostream>
using namespace std;

int main() {
    List list;
    int n;

    while (true) {
        cout << "Nhap chi thi n (-1 de thoat): ";
        cin >> n;

        if (n == -1) {
            break;
        } else if (n == 0) {
            double x;
            cout << "Nhap gia tri x can them: ";
            cin >> x;
            list.Add(x);
        } else if (n == 1) {
            double x;
            cout << "Nhap gia tri x can xoa (dau tien): ";
            cin >> x;
            list.RemoveFirst(x);
        } else if (n == 2) {
            double x;
            cout << "Nhap gia tri x can xoa tat ca: ";
            cin >> x;
            list.RemoveAll(x);
        } else if (n == 3) {
            unsigned int pos;
            double y;
            cout << "Nhap vi tri x va gia tri y: ";
            cin >> pos >> y;
            list.Replace(pos, y);
        }
    }

    // In ra list hien tai
    cout << "List hien tai: ";
    list.Print();

    return 0;
}
