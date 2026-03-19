#ifndef __DATE_H__
#define __DATE_H__

struct Date {
	unsigned day;
	unsigned month;
	unsigned year;
};

void printDate(const Date & date);

Date readDate();

#endif //!__DATE_H__
