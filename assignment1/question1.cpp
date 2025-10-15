#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float num1, num2;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	//  floating variables declared and intialized.

	cout << fixed << showpoint << setprecision(3);
	// setting precision.

	float sum = num1 + num2;
	cout << "Sum: " << sum << endl;
float Difference=num1-num2;
		cout << "Difference: " << Difference << endl;

	float product = num1 * num2;
	cout << "Product: " << product << endl;
float Quotient=num1/num2;
		cout << "Quotient: " << Quotient << endl;
		// printed sum,product,difference and quotient as floating values.
	
	int num11 = (int)num1, num22 = (int)num2;
	//type casted
	int sum2 = num11 + num22;
	cout << "\nSum: " << sum2 << endl;
    int diff=num11-num22;
		cout << "Difference: " << diff<< endl;

	int product2 = num11 * num22;
	cout << "Product: " << product2 << endl;
    int quot=num11/num22;
		cout << "Quotient: " << quot<< endl;
		// same things with integer data type
	
	return 0;
}
