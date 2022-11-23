#include <iostream>
#include <math.h>
using namespace std;

void checkSNT(int b);
void tachSo(int a);

int main() {
	int n;
	cin >> n;
	tachSo(n);
}

void tachSo(int a) {
	int index = a;
	int arr[100];
	int dem = 0;
	while (index > 0) {
		index /= 10;
		dem++;
	}
	for (int i = 0; i < dem; i++) {
		arr[dem - i - 1] = a % 10;
		a /= 10;
	}
	for (int i = 0; i < dem; i++) {
		checkSNT(arr[i]);
	}
}

void checkSNT(int b) {
	bool check = true;
	if (b < 2) {
		check = false;
	}
	else {
		for (int i = 2; i <= sqrt(b); i++) {
			if (b % i == 0) {
				check = false;
			}
		}
		if (check == true) {
			cout << b << " ";
		}
	}
}
