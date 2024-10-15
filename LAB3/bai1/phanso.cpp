#include <iostream> 
#include "phanso.h"
using namespace std ; 

int CPhanSo::getTu(){
    return Tu; 
}

int CPhanSo::getMau(){
    return Mau; 
}

CPhanSo::CPhanSo(){
    Tu = 0;
    Mau = 1;
}
CPhanSo::CPhanSo(int TuTu){
    Tu = TuTu;
    Mau = 1;
}
CPhanSo::CPhanSo(int TuTu, int MauMau){
    Tu = TuTu;
    Mau = MauMau;
}
CPhanSo::CPhanSo(const CPhanSo& x){
    Mau = x.Mau;
    Tu = x.Tu;
}

CPhanSo CPhanSo::operator +(const CPhanSo& x){
    CPhanSo temp;
    temp.Tu = Tu * x.Mau + Mau * x.Tu;
    temp.Mau = x.Mau * Mau;
    return temp;
}
CPhanSo CPhanSo::operator -(const CPhanSo& x){
    CPhanSo temp;
    temp.Tu = Tu * x.Mau - Mau * x.Tu;
    temp.Mau = x.Mau * Mau;
    return temp;
}
CPhanSo CPhanSo::operator *(const CPhanSo& x){
    CPhanSo temp;
    temp.Tu = Tu * x.Tu;
    temp.Mau = x.Mau * Mau;
    return temp;
}
CPhanSo CPhanSo::operator /(const CPhanSo& x){
    CPhanSo temp;
    temp.Tu = Tu * x.Mau;
    temp.Mau = x.Tu * Mau;
    return temp;
}



bool CPhanSo::operator >= (const CPhanSo& x){
    if ((float)Tu / Mau >= (float)x.Tu / x.Mau)
        return 1;
    return 0;
}
bool CPhanSo::operator == (const CPhanSo& x){
    if ((float)Tu / Mau == (float)x.Tu / x.Mau)
        return 1;
    return 0;
}
bool CPhanSo::operator <= (const CPhanSo& x){
    if ((float)Tu / Mau <= (float)x.Tu / x.Mau)
        return 1;
    return 0;
}
bool CPhanSo::operator > (const CPhanSo& x){
    if ((float)Tu / Mau > (float)x.Tu / x.Mau)
        return 1;
    return 0;
}
bool CPhanSo::operator < (const CPhanSo& x){
    if ((float)Tu / Mau < (float)x.Tu / x.Mau)
        return 1;
    return 0;
}
bool CPhanSo::operator != (const CPhanSo& x){
    if ((float)Tu / Mau != (float)x.Tu / x.Mau)
        return 1;
    return 0;
}

// istream& operator>>(istream& is, CPhanSo& ps){
//     is >> ps.Tu >> ps.Mau;
//     // ps.Rutgon();
//     return is;
// }

ostream& operator<<(ostream& os, const CPhanSo& ps) {
    os << ps.Tu << "/" << ps.Mau;
    return os;
}

istream& operator>>(istream &is, CPhanSo& ps) {
    cout << "Nhap tu so: ";
    is >> ps.Tu;
    cout << "Nhap mau so: ";
    is >> ps.Mau;
    if (ps.Mau == 0) {
        cerr << "Mau so khong duoc bang 0. Thiet lap mau = 1." << endl;
        ps.Mau = 1;
    }
    return is;
}
