#include <iostream>
using namespace std;

int sumM(int arr[], int n) {
	if (n == 0) {
		return arr[0];
	}
	else {
		return arr[n] + sumM(arr, n - 1);
	}
}

int main() {
	int arr[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << sumM(arr, n-1);
}
