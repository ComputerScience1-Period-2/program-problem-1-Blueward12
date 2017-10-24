/* 
Kevin Ward - September 21 - Period 2
Assignment Name: DisplayText
Introduction to C++ Visual Studios 2015
*/

#include <iostream>
#include <conio.h>
using namespace std; 

void pause() {
	cout << "Press any key to continue..." << endl;
	while (!_kbhit());
	cout << "\n"; 
}

void main() {
	char two = '2'; //this can also be stored as an int and added to a string
		cout << "Period " << two << endl;
		cout << "Hello World!" << endl;
	pause();
	return;
}
