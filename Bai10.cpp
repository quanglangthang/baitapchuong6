#include <iostream>
using namespace std;

void soHoanHao(int a);

int main() {
	int a, b;
	cout << "Nhap doan [a,b]: ";
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		soHoanHao(i);
	}
}

void soHoanHao(int a) {
	int temp = 0;
	if (a > 1) {
		for (int i = 1; i < a; i++) {
			if (a % i == 0) {
				temp += i;
			}
		}
		if (temp == a) {
			cout << a << " ";
		}
	}
}
