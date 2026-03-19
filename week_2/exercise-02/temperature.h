#ifndef __TEMPERATURE_H__
#define __TEMPERATURE_H__

struct Temperature {
	double C;
	double F;
	double K;

	void fromCelsius(double C);
	void fromFahrenheit(double F);
	void fromKelvin(double K);

	Temperature Sum(const Temperature & other);
};

#endif //!__TEMPERATURE_H__
