#include <iostream>
using namespace std;

void lapPhuong(int n);

int main() {
	int n;
	cin >> n;
	lapPhuong(n);
}


void lapPhuong(int n) {
	int temp = 1;
	for (int i = 1; i <= 3; i++) {
		temp *= n;
	}
	cout << temp;
}
