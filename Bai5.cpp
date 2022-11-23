#include <iostream>
using namespace std;

void doiHe10SangHe2(int a);

int main() {
	int n;
	cin >> n;
	doiHe10SangHe2(n);
}

void doiHe10SangHe2(int a) {
	int index = a;
	int dem = 0;
	int arr[100];
	// Dem so lan chia => Do dai day nhi phan.
	while (index > 0) {
		index /= 2;
		dem++;
	}
	// Duyet tung phan tu he 10 sang he 2
	for (int i = 0; i < dem; i++) {

		arr[dem - i - 1] = a % 2;
		a /= 2;
	}
	for (int i = 0; i < dem; i++) {
		cout << arr[i];
	}
}
