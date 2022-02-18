#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	if (1 == n) {
		cout << "SciComLove";
	}
	else {
		cout << "SciComLove\nSciComLove";
	}

	return 0;
}