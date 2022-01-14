#pragma once
#include <iostream>
#include <conio.h>
using namespace std;

class date // creating class date
{
private: // declaring data type int
	int day;
	int month;
	int year;
public:
	date() {}
	date(int day, int month, int year) // creating constructor
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
	void print() const //creating function to print the date
	{
		cout << day << '/' << month << '/' << year;
	}
	
};

class Time
{
	int hour;
	int minute;
	int sec;
public:
	Time(int hour = 0, int minute = 0, int sec = 0)
	{
		this->hour = hour;
		this->minute = minute;
		this->sec = sec;
	}
	void Display()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};