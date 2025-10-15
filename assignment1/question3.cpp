#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int num1, num2, num3;
	cout << "Enter three numbers: ";
	cin >> num1 >> num2 >> num3;
	//integer type variables declared/initialized
	
	if (num1 > num2 && num1 > num3)
		cout << "largest : " << num1  << endl;
	else if (num2 > num1 && num2 > num3)
		cout << "largest : " << num2  << endl;
    else if (num3>num2 && num3>num1)
		cout << "largest : " << num3 << endl;
    else 
    cout<< "none of them is largest"<<endl;
//  for printing the larger num

	if (num1 < num2 && num1 <num3)
		cout << "smallest r: " << num1 << endl;
	else if (num2 < num1 && num2 < num3)
		cout << "smallest : " << num2 << endl;
	else if (num3<num1 && num3<num2)
		cout << "smallest : " << num3 << endl;
    else 
    cout<< "none of them is smaller"<<endl;
// for printing the small num

	if (num1 == num2 && num1 == num3 )
		cout << "All numbers are equal." << endl;
	else
		cout << "All three numbers are not equal." << endl;

		//  for checking weather the numbers are equal/not
	return 0;
}
