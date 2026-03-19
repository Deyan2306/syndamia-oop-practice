#ifndef __TIME_H__
#define __TIME_H__

struct Time {
	unsigned int hour;
	unsigned int minutes;
	unsigned int seconds;

	void Advance(const Time & other);
};

Time millisecondsToTime(unsigned int milliseconds);

#endif //!__TIME_H__
