//
// Created by Alessandro on 2019-04-12.
//

#ifndef DATA_DATA_H
#define DATA_DATA_H

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <ctime>

class Date {

public:
// Dafault Constructor, set the date to the actual date
	Date();
// Constructor, pass the date in the form of dd,mm,yyyy
// Note that the program crashes if the date is not valid...
	Date(const int &d, const int &m, const int &y);
// Copy Constructor
	Date(const Date & to_copy);
// Getters
	int year() const;
	int month() const;
	int day() const;
// return the year from the date d, if d it not passed, it returns the year from now.
// Usefull to compute the age of a person, where this is the person’s birth date
	int yearsFrom(const Date &d = Date()) const;
// return the date as a string in the form dd/mm/yyyy
// Useful to print on the screen
	std::string str() const;
// overload of the << operator for the Data class.
// the fried keyword is mandatory to define the overload
	Date& operator= (const Date & to_assign);
	Date operator+(const Date & to_add) const;
	bool operator==(const Date & to_compare) const;
	bool operator!=(const Date & to_compare) const;

	friend std::ostream& operator<< (std::ostream& stream, const Date& d);
private:
	int _year; int _month;
	int _day;
};


#endif //DATA_DATA_H
