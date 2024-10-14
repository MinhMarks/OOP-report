#include "bai2.h"
#include <iostream>
using namespace std;

// Khoi tao list rong
List::List() {
    arr = nullptr;
    size = 0;
}

// Huy bo list va giai phong bo nho
List::~List() {
    delete[] arr;
}

// Them phan tu vao list
void List::Add(double x) {
    double* temp = new double[size + 1];
    for (unsigned int i = 0; i < size; ++i) {
        temp[i] = arr[i];
    }
    temp[size] = x;
    delete[] arr;
    arr = temp;
    size++;
}

// Xoa phan tu dau tien co gia tri x
void List::RemoveFirst(double x) {
    for (unsigned int i = 0; i < size; ++i) {
        if (arr[i] == x) {
            for (unsigned int j = i; j < size - 1; ++j) {
                arr[j] = arr[j + 1];
            }
            size--;
            return;
        }
    }
}

// Xoa tat ca cac phan tu co gia tri x
void List::RemoveAll(double x) {
    unsigned int i = 0;
    while (i < size) {
        if (arr[i] == x) {
            for (unsigned int j = i; j < size - 1; ++j) {
                arr[j] = arr[j + 1];
            }
            size--;
        } else {
            i++;
        }
    }
}

// Thay doi phan tu o vi tri pos bang gia tri moi
void List::Replace(unsigned int pos, double value) {
    if (pos < size) {
        arr[pos] = value;
    }
}

// In ra list hien tai
void List::Print() {
    cout << "[";
    for (unsigned int i = 0; i < size; ++i) {
        cout << arr[i];
        if (i < size - 1) cout << ",";
    }
    cout << "]" << endl;
}

/*
0 1
0 2
0 6
2 2
3 1 4
-1
*/