#include <iostream>
#include <cstdlib>

using namespace std;

int number = 1;
int positive = 0;
int negative = 0;

int getUserNumber();
void results();
void clearScreen();

int main(void) {

	while (number != 0) {
        clearScreen();
		cout << "Insert some positive and negative integers. End with 0: ";
		number = getUserNumber();
		if (number > 0) {
			positive++;
		}
		else if (number < 0) {
			negative++;
		}

	}
	results();
	return(0);
}

void results() {

    clearScreen();
	int total = positive + negative;
	int negativePros = (double)negative / (double)total * 100.0;
	int positivePros = (double)positive / (double)total * 100.0;
	cout << "You entered the following integers:" << endl;
	cout << "Positive numbers: " << positive << endl;
	cout << "Positive number percentage: " << positivePros << "%" << endl;
	cout << "Negative numbers: " << negative << endl;
	cout << "Negative number percentage: " << negativePros << "%" << endl;
	cout << "Total numbers: " << total << endl;
	cout << "Total percentage: " << positivePros + negativePros << endl;
}

int getUserNumber() {

	cin >> number;
	return number;
}
void clearScreen(){
    system("CLS");
}
