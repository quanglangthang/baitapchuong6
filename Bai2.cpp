#include <iostream>
#include <math.h>
using namespace std;

bool checkSoNT(int a);
bool checkArmStrong(int b);

int main() {
	int n;
	cout << "0. Thoat" << endl;
	cout << "1. Kiem tra so nguyen to" << endl;
	cout << "2. Kiem tra so Armstrong" << endl;
	cout << "Vui long nhap lua chon: ";
	cin >> n;
	switch (n) {

	case 0: 
		exit(0);
		break;
	case 1: 
		int a;
		cout << "Nhap so can kiem tra: ";
		cin >> a;
		if (checkSoNT(a) == true) {
			cout << "La so nguyen to";
		}
		else {
			cout << "Khong phai so nguyen to";
		}
		break;

	case 2:
		int b;
		cout << "Nhap so can kiem tra: ";
		cin >> b;
		if (checkArmStrong(b) == true) {
			cout << b << " la so Armstrong";
		}
		else {
			cout << b << " ko phai so Armstrong";
		}

	default:
		cout << "Sai cu phap";
		break;
	}
}

bool checkSoNT(int a) {
	bool check = true;
	if (a < 2) {
		return false;
	}
	else {
		for (int i = 2; i <= sqrt(a); i++) {
			if (a % i == 0) {
				check = false;
			}
		}
		if (check == true) {
			return true;
		}
	}
}

bool checkArmStrong(int b) {
	int index, index1;
	int dem = 0, temp = 0;
	index = index1 = b;
	while (index > 0) {
		index /= 10;
		dem++;
	}
	while (index1 > 0) {
		temp += pow(index1 % 10, dem);
		index1 /= 10;
	}
	if (temp == b) {
		return true;
	}
	else {
		return false;
	}
}
