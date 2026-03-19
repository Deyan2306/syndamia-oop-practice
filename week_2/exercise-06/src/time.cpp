#include "../header/time.h"

unsigned int timeToMilliseconds(const Time & time) {
	return (time.hour * 60 * 60 + time.minutes * 60 + time.seconds) * 1000;
}

void Time::Advance(const Time & other) {
	*this = millisecondsToTime(timeToMilliseconds(*this) + timeToMilliseconds(other));
}

Time millisecondsToTime(unsigned int milliseconds) {
	Time time;
	time.hour = 	(milliseconds / 1000 / 60 / 60) % 24;
	time.minutes = 	(milliseconds / 1000 / 60) % 60;
	time.seconds = 	(milliseconds / 1000) % 60;

	return time;
}
