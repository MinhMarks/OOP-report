#ifndef phanso_H
#define phanso_H

class CPhanSo
{
private:
    int Tu;
    int Mau;

public: 
    int getTu(); 
    int getMau(); 

    CPhanSo();
    CPhanSo(int);
    CPhanSo(int, int);
    CPhanSo(const CPhanSo&); 

    CPhanSo operator +(const CPhanSo&);
    CPhanSo operator -(const CPhanSo&);
    CPhanSo operator *(const CPhanSo&);
    CPhanSo operator /(const CPhanSo&);

    bool operator >= (const CPhanSo&);
    bool operator == (const CPhanSo&);
    bool operator <= (const CPhanSo&);
    bool operator > (const CPhanSo&);
    bool operator < (const CPhanSo&);
    bool operator != (const CPhanSo&);

    friend std::ostream& operator<<(std::ostream& os, const CPhanSo& ps);
    friend std::istream& operator>>(std::istream& is, CPhanSo& ps);

    // friend ostream& operator <<(ostream& os, CPhanSo&); 
    // friend istream& operator >>(istream &is, PhanSo &ps);
    
    // friend istream& operator>>(istream &is, CPhanSo &ps);
    // friend ostream& operator<<(ostream &os, const CPhanSo &ps);
    // CPhanSo& operator ++();
    // CPhanSo& operator ++(int);
    // CPhanSo& operator +=(const CPhanSo&);

};

#endif