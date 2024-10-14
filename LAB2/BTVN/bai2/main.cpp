#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Dinh nghia class PhanSo
class PhanSo {
private:
    int tuSo; // Tu so
    int mauSo; // Mau so

public:
    // Constructor mac dinh
    PhanSo() : tuSo(0), mauSo(1) {}

    // Constructor voi tham so
    PhanSo(int tu, int mau) {
        tuSo = tu;
        // Kiem tra mau so hop le
        if (mau == 0) {
            mauSo = 1; // Neu mau so bang 0, gan mac dinh
        } else {
            mauSo = mau;
        }
    }

    // Nhap phan so
    void Nhap() {
        cout << "Nhap tu so: ";
        cin >> tuSo;
        cout << "Nhap mau so: ";
        cin >> mauSo;
        while (mauSo == 0) { // Kiem tra mau so khong duoc bang 0
            cout << "Mau so khong hop le. Nhap lai mau so: ";
            cin >> mauSo;
        }
    }

    // Ham de xuat phan so
    void Xuat() const {
        cout << tuSo << "/" << mauSo;
    }

    // Ham tra ve gia tri phan so (de so sanh)
    double GiaTri() const {
        return static_cast<double>(tuSo) / mauSo;
    }
};

// Dinh nghia class MangPhanSo
class MangPhanSo {
private:
    vector<PhanSo> phanSoArray; // Mang phan so

public:
    // Nhap mang phan so
    void Nhap(int n) {
        for (int i = 0; i < n; ++i) {
            cout << "Nhap phan so thu " << i + 1 << ":\n";
            PhanSo ps;
            ps.Nhap();
            phanSoArray.push_back(ps);
        }
    }

    // Tim phan so lon thu k
    PhanSo LonThuK(int k) {
        if (k <= 0 || k > phanSoArray.size()) {
            return PhanSo(); // Tra ve phan so mac dinh neu k khong hop le
        }
        vector<PhanSo> temp = phanSoArray;
        sort(temp.begin(), temp.end(), [](const PhanSo &a, const PhanSo &b) {
            return a.GiaTri() < b.GiaTri(); // Sap xep theo gia tri tang dan
        });
        return temp[temp.size() - k]; // Tra ve phan so lon thu k
    }

    // Tim phan so be thu k
    PhanSo BeThuK(int k) {
        if (k <= 0 || k > phanSoArray.size()) {
            return PhanSo(); // Tra ve phan so mac dinh neu k khong hop le
        }
        vector<PhanSo> temp = phanSoArray;
        sort(temp.begin(), temp.end(), [](const PhanSo &a, const PhanSo &b) {
            return a.GiaTri() < b.GiaTri(); // Sap xep theo gia tri tang dan
        });
        return temp[k - 1]; // Tra ve phan so be thu k
    }
};

int main() {
    int n, k;
    cout << "Nhap so luong phan so n: ";
    cin >> n;
    cout << "Nhap k: ";
    cin >> k;

    MangPhanSo mang;
    mang.Nhap(n); // Nhap mang phan so

    PhanSo lonThuK = mang.LonThuK(k); // Tim phan so lon thu k
    PhanSo beThuK = mang.BeThuK(k);   // Tim phan so be thu k

    // Xuat ket qua
    if (k > 0 && k <= n) {
        cout << "Phan so lon thu " << k << ": ";
        lonThuK.Xuat();
        cout << endl;
        
        cout << "Phan so be thu " << k << ": ";
        beThuK.Xuat();
        cout << endl;
    }

    return 0;
}
