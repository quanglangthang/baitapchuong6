#include <iostream>
#include <string>
using namespace std;

int fact(int a);
int catSo(int b);

int main() {
	int check;
	int a, b;
	cout << "Nhap doan [a,b]: ";
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		check = catSo(i);
		if (check == i) {
			cout << i << " ";
		}
	}
}

int fact(int a) {
	int temp = 1;
	if (a == 0) {
		return temp;
	}
	else {
		for (int i = 1; i <= a; i++) {
			temp *= i;
		}
		return temp;
	}
}

int catSo(int b) {
	int temp = 0;
	int index = 0;
	while (b > 0) {
		temp += fact(b%10);
		b /= 10;
	}
	return temp;
}
