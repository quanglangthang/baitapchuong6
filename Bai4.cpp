#include <iostream>
using namespace std;

void doiHe2Sang10(int a);

int main() {
	int n;
  cin >> n;
	doiHe2Sang10(n);
}

void doiHe2Sang10(int a) {
	int index = a;
	int sum = 0, dem = 0;
	int arr[100];
	//  Dem do dai cua day so
	while (index > 0) {
		index /= 10;
		dem++;
	}
	// Dao phan tu
	for (int i = 0; i < dem; i++) {
		arr[dem - i - 1] = a % 10;
		a /= 10;
	}
	// Duyet tung phan tu va cong vao sum
	for (int i = 0; i < dem; i++) {
		sum = sum + (arr[i] * pow(2, dem - 1 - i));
	}
	cout << sum << endl;
}
