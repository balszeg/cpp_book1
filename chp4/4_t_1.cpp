#include <iostream>

int main() {
	constexpr double jpy_to_usd = 0.007;
	constexpr double eur_to_usd = 1.02;
	constexpr double gbp_to_usd = 1.16;
	double amount = 1;
	char currency = ' ';
	std::cout << "Please enter an amount followed by a currency (y, e, p):\n";
	std::cin >> amount >> currency;
	if (currency == 'y')
		std::cout << amount << " JPY = " << jpy_to_usd * amount << " USD\n";
	else if (currency == 'e')
		std::cout << amount << " EUR = " << eur_to_usd * amount << " USD\n";
	else if (currency == 'p')
		std::cout << amount << " GBP = " << gbp_to_usd * amount << " USD\n";
	else
		std::cout << "Sorry, I don't know a valute called '" << currency << "'\n";

	return 0;
}