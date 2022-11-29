// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void daoNguoc(int a) {
    if (a != 0) {
        cout << a%10;
        daoNguoc(a/10);
    }
}

int main() {
    // Write C++ code here
    int n;
    cin >> n;
    daoNguoc(n);
}
