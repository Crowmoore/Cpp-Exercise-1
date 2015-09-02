#include <iostream>

using namespace std;

int number = 1;
int positive = 0;
int negative = 0;
int total = 0;

int getUserNumber();
void results();

int main(void) {



	while (number != 0) {
		system("CLS");
		cout << "Insert an integer: ";
		number = getUserNumber();
		if (number > 0) {
			positive++;
		}
		else if (number < 0) {
			negative++;
		}

	}
	system("CLS");
	results();
	return(0);
}

void results() {
	
	total = positive + negative;
	int negativePros = (double)negative / (double)total * 100.0;
	int positivePros = (double)positive / (double)total * 100.0;
	cout << "You entered the following integers:" << endl;
	cout << "Positive integers: " << positive << endl;
	cout << "Positive number percentage: " << positivePros << "%" << endl;
	cout << "Negative integers: " << negative << endl;
	cout << "Negative number percentage: " << negativePros << "%" << endl;
	cout << "Total integers: " << total << endl;
	cout << "Total percentage: 100%" << endl;
}

int getUserNumber() {

	cin >> number;
	return number;
}