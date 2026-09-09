#include "Date.h"
#include <iomanip>

int main(){
	Date d1;
	Date d2(2010,2,11);

	cout << d1.toString() << " " << d2.toString() << endl;

	d1.nextDate();
	d2.prevDate();
	cout << d1.toString() << " " << d2.toString() << endl;

	cout << "-------------------------" << endl;
	cout << d1.toString() << " == " << d2.toString() << " = " << boolalpha << (d1 == d2) << endl;
	cout << d1.toString() << " != " << d2.toString() << " = " << boolalpha << (d1 != d2) << endl;
	cout << d1.toString() << " > " << d2.toString() << " = " << boolalpha << (d1 > d2) << endl;
	cout << d1.toString() << " < " << d2.toString() << " = " << boolalpha << (d1 < d2) << endl;
	cout << d1.toString() << " >= " << d2.toString() << " = " << boolalpha << (d1 >= d2) << endl;
	cout << d1.toString() << " <= " << d2.toString() << " = " << boolalpha << (d1 <= d2) << endl;

	cout << "-------------------------" << endl;
	cout << d1.toString() << " + 15 days = ";
	d1 += 15;
	cout << d1.toString() << endl;

	cout << d1.toString() << " +15 months = ";
	d1 += 15.0f;
	cout << d1.toString() << endl;

	cout << d1.toString() << " +15 years= ";
	d1 += 15L;
	cout << d1.toString() << endl;

	cout << d1.toString() << " + 15 days = ";
	d1 += 15;
	cout << d1.toString() << endl;

	cout << "-------------------------" << endl;
	cout << d1.toString() << "-15 days = " << (d2 - 15).toString() << endl;
	cout << d1.toString() << "-15 months = " << (d2 - 15.0f).toString() << endl;
	cout << d1.toString() << "-15 years = " << (d2 - 15L).toString() << endl;
}