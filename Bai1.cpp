#include <iostream>
using namespace std;

bool checkChanLe(int n);

int main() {
    int n;
    cin >> n;
    if(checkChanLe(n) == true) {
        cout << n << " la so chan";
    }
    else {
        cout << n << " la so le";
    }
}

bool checkChanLe(int n) {
    if (n % 2 ==0) {
        return true;
    }
    else {
        return false;
    }
}
