#include <iostream>
#include "header/time.h"

int main() {
	Time first = { 13, 4, 15 }, second = { 1, 59, 45 };
	first.Advance(second);

	std::cout << first.hour << ' ' << first.minutes << ' ' << first.seconds << std::endl;
}
