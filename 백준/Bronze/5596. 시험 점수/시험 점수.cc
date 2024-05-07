#include <iostream>
using namespace std;

int main() {	
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int min = 0, man = 0, sc = 0;
	for (int a = 0; a < 4; a++) {
		cin >> sc;
		min += sc;
	}

	for (int b = 0; b < 4; b++) {
		cin >> sc;
		man += sc;
	}

	if (min > man || min == man) {
		cout << min << endl;
	}
	else {
		cout << man << endl;
	}
	return 0;
}