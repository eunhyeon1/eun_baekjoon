#include <iostream>
#include <vector>
using namespace std;

int main() {	
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.precision(3); cout.setf(ios::showpoint);
	int c = 0;
	int e = 0;
	float sc = 0;
	float sum = 0;
	int e_sum = 0;
	cin >> c;
	for (int d = 0; d < c; d++) {
		sc = 0;
		string a;
		string b;
		cin >> b >> e >> a;
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
		sum += sc * e;
		e_sum += e;
	}
	cout << sum / e_sum << endl;
	return 0;
}