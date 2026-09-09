#pragma once
#include <iostream>
#include <ctime>
#include <string>
#define dateWindows 1
using namespace std;

class Date
{
	int year;
	int month;
	int day;
public:
	//--------- КОНСТРУКТОРИ та ДЕСТРУКТОРИ ---------
	Date(); // За замовчуванням - поточна дата
	Date(int year, int month, int day); // З параметрами - задана дата
	//Конструктор копіювання, оператор присвоювання чи потрібні?  

	bool isLeapYear()const; //Перевірка на високосний рік
	int monthDays()const; //Кількість днів за місяцем
	void nextDate(); // Наступна дата
	void prevDate(); // Попередня дата

	//--------- АКСЕСОРИ ---------
	void setYear(int year);
	int getYear()const;
	void setMonth(int month);
	int getMonth()const;
	void setDay(int day);
	int getDay()const;

	void showDate()const;
	bool valid()const; // Перевірка дати на коректність
	string toString() const;
};

