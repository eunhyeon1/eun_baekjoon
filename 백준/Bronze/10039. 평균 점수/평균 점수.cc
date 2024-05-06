#include <iostream>
using namespace std;

int main() {	
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a = 0, sum = 0;
	for (int b = 0; b < 5; b++) {
		cin >> a;
		if (a < 40) {
			a = 40;
		}
		sum += a;
	}

	cout << sum / 5 << endl;
	return 0;
}