// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void Chan(int a) {
    if (a >= 0) {
        if (a % 2 == 0) {
            cout << a << " ";
            Chan(a - 2);
        }
        else {
            a -= 1;
            cout << a << " ";
            Chan(a - 2);
        }
    }
}

void Le(int a) {
    if (a >= 0) {
        if (a % 2 != 0) {
            cout << a << " ";
            Le(a - 2);
        }
        else {
            a -= 1;
            cout << a << " ";
            Le(a - 2);
        }
    }
}

int main() {
    int opt, n;
    bool check = true;
    do {
        system("cls");
        cout << "0. Thoat" << endl;
        cout << "1. Chan" << endl;
        cout << "2. Le" << endl;
        cout << "Nhap lua chon: ";
        cin >> opt;
        switch (opt) {
        case 0:
            exit(0);
        case 1:
            cout << "Nhap n: ";
            cin >> n;
            Chan(n);
            break;
        case 2:
            cout << "Nhap n: ";
            cin >> n;
            Le(n);
            break;

        default:
            check = false;

        }
    } while (check == false);
    
    return 0;
}
