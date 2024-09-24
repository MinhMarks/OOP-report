#include <bits/stdc++.h>
using namespace std;

const bool thirty_days_month[13] = {0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0};

struct date{
    int day, month, year;
    date(int d = 1, int m = 1, int y = 1){
        day = d;
        month = m;
        year = y;
        if(!valid_date())
            cout<<"Invalid date\n";
    }
    bool leap_year(){
        return year%4 == 0;
    }
    bool valid_date(){
        if(month>12 || month<1 || day<1 || year<1) return false;
        if(month == 2){
            if(leap_year()){
                return day<=29;
            }
            return day<=28;
        }
        if(thirty_days_month[month]) return day<=30;
        return day<=31;
    }
    bool operator== (const date& a)const {
        return day==a.day&&month==a.month&&year==a.year;
    }
    bool operator< (const date& a) const{
        if(year == a.year){
            if(month == a.month)
                return day < a.day;
            return month < a.month;
        }
        return year < a.year;
    }
};


struct passbook{
    string idbook; 
    string savingType;
    string customerName;
    string customerId; 
    date OpeningDate; 
    long long deposit;
    double interestRate; 

    void setInterestRate( double rate ) {
        interestRate = rate; 
    }
    bool check_space( string str ) {
        for ( int i =0; i< str.size();i++ ) 
            if ( str[i] == ' ' ) return true; 
        return false; 
    }

    bool check_number( string str ) {
        for ( int i =0; i< str.size(); i++ ) 
            if ( str[i] >= '0' && str[i] <= '9' ) return true; 
        return false; 
    }

    bool check_specialcharacter( string str ){
        for ( int i=0; i< str.size(); i++ )
            if ( !((str[i] >= '0' && str[i] <= '9') 
                    || (str[i] >= 'a' && str[i] <= 'z') 
                    || (str[i] >= 'A' && str[i] <= 'Z') ) )  
                            return true; 
        return false; 
    }

    bool valid_idbook(){
        if ( idbook.size() <= 5 && !check_space(idbook) && !check_specialcharacter(idbook) ) return true; 
    }
    bool valid_customerId(){
        for ( int i=0; i< customerId.size(); i++ ) 
            if ( customerId[i] > '9' || customerId[i] < '0' ) 
                return false;

        return customerId < "2147483647";  
    } 

    passbook() : idbook(""), savingType(""), customerName(""), 
        customerId(""), OpeningDate(date(0,0,0)), deposit(0), 
        interestRate(0.0) {}
   

    void nhapdulieu(){
        cout << "Nhap ma so tiet kiem: ";
        while ( true ) {
            getline(cin, idbook);
            if ( valid_idbook() ) 
                break; 
            cout << "Ma so khong hop le, vui long nhap lai: "; 
        }

        cout << "Nhap phuong thuc tiet kiem: ";
        getline(cin, savingType);
        cout << "Nhap ten chu so huu: "; 
        getline(cin, customerName); 

        cout << "Nhap ma CCCD chu so huu: ";
        while ( true ) {
            getline(cin, idbook);
            if ( valid_idbook() ) 
                break; 
            cout << "Ma so khong hop le, vui long nhap lai: "; 
        }


        cout << "Nhap ngay mo so (ngay thang nam): ";
        while (1) {
            cin>>OpeningDate.day>>OpeningDate.month>>OpeningDate.year;
            if(OpeningDate.valid_date())
                break;
            cout << "Ngay khong hop le, vui long nhap lai: ";
        }

        cout << "nhap so tien: ";
        while ( true ) {
            cin >> deposit; 
            if ( deposit >= 0 ) 
                break; 
            cout << "so tien khong hop le, nhap lai: "; 
        }
    } 
}; 
vector < passbook > accounts; 

void display(const passbook& account) {
    cout << "Account ID: " << account.idbook << endl;
    cout << "Savings Type: " << account.savingType << endl;
    cout << "Customer Name: " << account.customerName << endl;
    cout << "ID Card: " << account.customerId << endl;
    cout << "Opening Date: " << account.OpeningDate.day << " " << account.OpeningDate.month << " " << account.OpeningDate.year<< endl;
    cout << "Deposit Amount: " << account.deposit << endl;
}

void calculate_on_interest_rate( const passbook& account){
    cout << " nhap ti le lai suat: " ; 
    double interestRatePerYear; // Chuyển lãi suất từ % sang dạng thập phân
    cin >> interestRatePerYear; 
    interestRatePerYear /= 100; 
    // Kiểm tra loại tiết kiệm
    if (account.savingType == "ngan han" ) {
        // Loại ngắn hạn: Tính lãi cho kỳ hạn nhỏ hơn hoặc bằng 6 tháng
        cout << "lai suat sau 6 thang\n";    
        cout << account.deposit * (interestRatePerYear-double(0.5)) / 2 ;
    } else if (account.savingType == "dai han") {
        // Loại dài hạn: Tính lãi cho kỳ hạn từ 6 tháng trở lên
        cout << "lai suat sau 1 nam\n";    
        cout << account.deposit * interestRatePerYear;
    } else {
        cout << "Loai tiet kiem khong hop le hoac ky han khong phu hop." << endl;
    }
}

int rdn(int y, int m, int d) { 
 if (m < 3)
  y--, m += 12;
 return 365 * y + y / 4 - y / 100 + y / 400 + (153 * m - 457) / 5 + d - 306;
}


void calculate_on_opening_date( const passbook& account){
    time_t t = time(0);
    tm* now = localtime(&t);
    int ngay_hien_tai = now->tm_mday;
    int thang_hien_tai = now->tm_mon + 1; // tm_mon is 0-based
    int nam_hien_tai = now->tm_year + 1900; // tm_year is years since 1900

    int numberOfYear = rdn(nam_hien_tai, thang_hien_tai, ngay_hien_tai) - rdn(account.OpeningDate.year, account.OpeningDate.month, account.OpeningDate.day); 
    numberOfYear = numberOfYear / 365; 

    double result = account.deposit; 
    for ( int i =1; i<= numberOfYear; i++ ) 
        result = result + result * account.interestRate; 
    cout << "Lai suat hien tai: "; 
    cout << result << "\n"; 

}

void withdrawal_function( const passbook& account, long long amount){
    time_t t = time(0);
    tm* now = localtime(&t);
    int ngay_hien_tai = now->tm_mday;
    int thang_hien_tai = now->tm_mon + 1; // tm_mon is 0-based
    int nam_hien_tai = now->tm_year + 1900; // tm_year is years since 1900

    int numberOfYear = rdn(nam_hien_tai, thang_hien_tai, ngay_hien_tai) - rdn(account.OpeningDate.year, account.OpeningDate.month, account.OpeningDate.day); 
    numberOfYear = 2 * numberOfYear / 365; 

    if ( (numberOfYear < 1 && account.savingType == "ngan han") 
            || (numberOfYear < 2 && account.savingType == "dai han") ) {

        cout << "Rut truoc han bij tru 0.5\% lai suat, ban co chac chan khong"; 
        char confirm = 'Y'; 
        cin >> confirm; 
        if ( confirm == 'N' ) return ; 
    }

    calculate_on_interest_rate( account ); 

}   

void list_saving_account(){
    int fromyear, frommonth, fromday, toyear, tomonth, today;  
    cout << "nhap khoang thoi gian: "; 
    for ( passbook &account: accounts) {
        if ( rdn(fromyear, frommonth, fromday) <= rdn(account.OpeningDate.year, account.OpeningDate.month, account.OpeningDate.day) 
            && rdn(account.OpeningDate.year, account.OpeningDate.month, account.OpeningDate.day) < rdn(toyear, tomonth, today) 
        )

        display(account); 
    }  
}

void list_saving_account_deposit_decrease(){

    sort( accounts.begin(), accounts.end(), []( const passbook& A, const passbook& B){
        return A.deposit < B.deposit; 
    }); 
    for ( passbook &account: accounts) 
        display(account); 

}

int main() {
    #define task "i"
    if ( fopen(task".inp","r") ){
        freopen(task".inp" ,"r",stdin ) ;
        //freopen(task".out" ,"w",stdout ) ;
    }


    return 0 ;
}

