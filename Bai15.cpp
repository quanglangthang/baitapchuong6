#include <iostream>
#include <algorithm> // Thu vien dung __gcd => ucll
using namespace std;

int UCLL(int a, int b) {
	if (a == b) {
		return a;
	}
	else {
		if (a > b) {
			return UCLL(a-b,b);
		}
		else {
			return UCLL(a,b-a);
		}
	}
}

int main() {
	int a,b;
	cin >> a >> b;
	cout << "BCNN la: " << a*b/UCLL(a,b);
}
