#include <iostream>
using namespace std;
int main() {
	int total = 0;
	int subtotal = 0;
	int input;
	bool hit = false;
	while (true) {
		cin >> input;
		if (input > 0) {
			hit = false;
			subtotal += input;
		} else if (input == 0 and not hit) {
			total += subtotal;
			cout << "Subtotal " << subtotal << endl;
			subtotal = 0;
			hit = true;
		} else {
			cout <<"Total " << total << endl;
			return 0;
		}
	}
}