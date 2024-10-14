#ifndef bai2_H
#define bai2_H

class List {
private:
    double* arr;    // Con tro quan ly mang cac gia tri double
    unsigned int size;  // Kich thuoc cua list

public:
    List();  // Khoi tao list rong
    ~List(); // Huy bo list

    void Add(double x);  // Them phan tu vao list
    void RemoveFirst(double x);  // Xoa phan tu dau tien co gia tri x
    void RemoveAll(double x);  // Xoa tat ca cac phan tu co gia tri x
    void Replace(unsigned int pos, double value);  // Thay doi phan tu o vi tri pos bang gia tri value
    void Print();  // In ra list hien tai
};

#endif
