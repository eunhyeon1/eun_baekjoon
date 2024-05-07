#include <iostream>
using namespace std;

int main() {	
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.precision(2); cout.setf(ios::showpoint);
	float sc = 0.0;
	string a;
	cin >> a;
	if (a[0] == 'A') {
		sc += 4;
	}
	else if (a[0] == 'B') {
		sc += 3;
	}
	else if (a[0] == 'C') {
		sc += 2;
	}
	else if (a[0] == 'D') {
		sc += 1;
	}

	if (a[1] == '+') {
		sc += 0.3;
	}
	else if (a[1] == '-') {
		sc -= 0.3;
	}
	
	if (sc < 1&& sc!=0) {
		cout.precision(1);
	}

	cout << sc<<endl;
	return 0;
}