// Create a project named "Operator" that takes 4 numbers separated by whitespace as input.  
// Create output that shows the results of these operators for all 3 combinations of types.


#include "stdafx.h"
#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::setw;
using std::left;


int main()
{
	int i0{ 0 };
	int i1{ 0 };
	double d0{ 0 };
	double d1{ 0 };

	cin >> i0 >> i1 >> d0 >> d1;
	// cout << "i0 =" << i0 << "\n" << "i1 =" << i1 << "\n" << "d0 =" << d0 << "\n" << "d1 =" << d1 << "\n" << endl;
	
	cout << "i0 * i1 == " << setw(15) << left << i0 * i1 << "\n";
	cout << "i0 * d0 == " << setw(15) << left << i0 * d0 << "\n";
	cout << "d0 * d1 == " << setw(15) << left << d0 * d1 << "\n";

	cout << "i0 / i1 == " << setw(15) << left << i0 / i1 << "\n";
	cout << "i0 / d0 == " << setw(15) << left << i0 / d0 << "\n";
	cout << "d0 / d1 == " << setw(15) << left << d0 / d1 << "\n";

	cout << "i0 % i1 == " << setw(15) << left << i0 % i1 << "\n";

	cout << "i0 + i1 == " << setw(15) << left << i0 + i1 << "\n";
	cout << "i0 + d0 == " << setw(15) << left << i0 + d0 << "\n";
	cout << "d0 + d1 == " << setw(15) << left << d0 + d1 << "\n";

	cout << "i0 - i1 == " << setw(15) << left << i0 - i1 << "\n";
	cout << "i0 - d0 == " << setw(15) << left << i0 - d0 << "\n";
	cout << "d0 - d1 == " << setw(15) << left << d0 - d1 << endl;


    return 0;
}

