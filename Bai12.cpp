// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int sum (int a) {
    if (a == 1) {
        return 1;
    }
    else {
        return a + sum(a-1);
    }
}

int main() {
    // Write C++ code here
    int n;
    cin >> n;
    cout << sum(n);

    return 0;
}


// #include <iostream>
// using namespace std;

// int sum(int a, int b) {
//     if (a == b) {
//         return a;
//     }
//     else {
//         return a+sum(a+1,b);
//     }
// }

// int main() {
//     int a,b;
//     cin >> a >> b;
//     cout << sum(a,b);

//     return 0;
// }
