#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {	
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a = 0, n1 = 0, n2 = 0, n3 = 0, mon = 0, max = 0;
	cin >> a;
	for (int b = 0; b < a; b++) {
		vector <int> k = {};
		cin >> n1 >> n2 >> n3;
		k.push_back(n1);
		k.push_back(n2);
		k.push_back(n3);
		sort(k.begin(), k.end());
		if (k[0] == k[1] && k[0] == k[2]) {
			mon = 10000 + k[0] * 1000;
		}
		else if (k[0] == k[1]) {
			mon = 1000 + k[0] * 100;
		}
		else if (k[1] == k[2]) {
			mon = 1000 + k[1] * 100;
		}
		else {
			mon = k[2] * 100;
		}

		if (max < mon) {
			max = mon;
		}
		mon = 0;
	}

	cout << max << endl;
	return 0;
}