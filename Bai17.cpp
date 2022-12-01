#include <iostream>
using namespace std;

void sumM(int arr[], int check,int n) {
	if (n >= 0) {
		cout << arr[check] << " ";
		sumM(arr, check + 1, n - 1);
	}
}

int main() {
	int arr[1000];
	int n;
	int check = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
    sumM(arr, check,n-1);
}
