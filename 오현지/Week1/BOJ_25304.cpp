#include <iostream>
using namespace std;
int main() {
	int original_total_price;
	int number_of_item_types;
	int price;
	int number;
	int calculated_total_price = 0;


	cin >> original_total_price >> number_of_item_types;

	for (int i = 0; i < number_of_item_types; i++) {
		cin >> price >> number;
		calculated_total_price += price * number;
	}
	if (calculated_total_price == original_total_price) cout << "Yes";
	else cout << "No";
	return 0;
}