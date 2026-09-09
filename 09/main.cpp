#include "Date.h"

int main(){
	Date d1;
	Date d2(2010,2,11);

	cout << d1.toString() << " " << d2.toString() << endl;

	d1.nextDate();
	d2.prevDate();
	cout << d1.toString() << " " << d2.toString() << endl;
}