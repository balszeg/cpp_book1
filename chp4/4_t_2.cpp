#include <iostream>

int main() {
	constexpr double jpy_to_usd = 0.007;
	constexpr double eur_to_usd = 1.02;
	constexpr double gbp_to_usd = 1.16;
	constexpr double cny_to_usd = 0.14;
	constexpr double dkk_to_usd = 0.14;
	double amount = 1;
	char currency = ' ';
	std::cout << "Please enter an amount followed by a currency (y, e, p, c, k):\n";
	std::cin >> amount >> currency;
	switch (currency) {
	case 'y':
		std::cout << amount << " JPY = " << jpy_to_usd * amount << " USD\n";
		break;
	case 'e':
		std::cout << amount << " EUR = " << eur_to_usd * amount << " USD\n";
		break;
	case 'p':
		std::cout << amount << " GBP = " << gbp_to_usd * amount << " USD\n";
		break;
	case 'c':
		std::cout << amount << " CNY = " << cny_to_usd * amount << " USD\n";
		break;
	case 'k':
		std::cout << amount << " DKK = " << dkk_to_usd * amount << " USD\n";
		break;
	default:
		std::cout << "Sorry, I don't know a valute called '" << currency << "'\n";
		break;
	}	

	return 0;
}