// C++ program to demonstrate
// the atanh() function
// string passed
#include <iostream>
#include <conio.h>
#include <cmath>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah 
	I.D.E : VS2019 
*/

using namespace std;

int main() {
	string x = "gfg";

	// Function call to calculate atanh(x) value
	double result = atanh(x);

	cout << "atanh(50.0) = " << result << " radians" << endl;
	cout << "atanh(50.0) = " << result * 180 / 3.141592 << " degrees" << endl;

	_getch();
	return 0;
}
