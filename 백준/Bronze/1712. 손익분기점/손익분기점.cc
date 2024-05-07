#include <iostream>
#include <vector>
using namespace std;

int main() {	
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a = 0, b = 0, c = 0, m = 0;
	cin >> a >> b >> c;
	m = c - b;
	if (m <= 0) {
		cout << "-1" << endl;
	}

	else {
		cout << (a / m) + 1 << endl;
	}

	return 0;
}