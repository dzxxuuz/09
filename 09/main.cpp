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
}