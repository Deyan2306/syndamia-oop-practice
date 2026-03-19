#include <iostream>
#include "temperature.h"

Temperature readTemperature() {
	double degrees;
	std::cin >> degrees;

	char scale;
	std::cin >> scale;

	Temperature temperature;
	switch (scale) {
		case 'C': temperature.fromCelsius(degrees); break;
		case 'F': temperature.fromFahrenheit(degrees); break;
		case 'K': temperature.fromKelvin(degrees); break;
	}

	return temperature;
}

void printTemperature(const Temperature & temp) {
	std::cout << temp.C << "C | " << temp.F << "F | " << temp.K << "K" << std::endl;
}

int main(void) {

	Temperature first = readTemperature();
	Temperature second = readTemperature();

	printTemperature(first.Sum(second));
	
	return 0;
}
