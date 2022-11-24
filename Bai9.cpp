#include <iostream>
#include <math.h>
using namespace std;

void duongKinh(float r);
void dienTich(float r);
void chuVi(float r);


int main() {
	float r;
	cin >> r;
	duongKinh(r);
	dienTich(r);
	chuVi(r);
}

void duongKinh(float r) {
	cout << "Duong kinh la: " << r * 2 << endl;
}

void dienTich(float r) {
	cout << "Dien tich hinh tron la: " << pow(r, 2) * 3.14 << endl;
}
void chuVi(float r) {
	cout << "Chu vi hinh tron la: " << 2 * 3.14 * r << endl;
}
