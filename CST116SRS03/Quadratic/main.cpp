// Calculate the roots of a quadratic equation.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cassert>

using std::cin;
using std::cout;
using std::endl;
using std::setw;
using std::left;

int main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	double x1 = 0;
	double x2 = 0;
	double sq_rt1 = 0;
	double sq_rt2 = 0;

	cout << "Quadratic calculations \n" << "Please enter three vales for a, b, and c. \n (Avoid zero and negative values to avoid imaginary results)" << endl;
	cin >> a >> b >> c;

	sq_rt1 = sqrt(pow(b, 2.0) - 4 * a*c);
	assert(sq_rt1 >= 0);
	x1 = (-b + sq_rt1)/(2*a);

	sq_rt2 = sqrt(pow(b, 2.0) - 4 * a*c);
	assert(sq_rt2 >= 0);
	x2 = (-b - sq_rt2) / (2 * a);

	cout << "The roots are: " << "\n";
	cout << x1 << "\n";
	cout << x2 << endl;

    return 0;
}

