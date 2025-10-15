#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int subject1, subject2, subject3, subject4, subject5, total;
	float percent;
	string grade;
	// variables of different data types to store values


	cout << "Enter marks of 5 subjects: ";
	cin >> subject1 >> subject2 >> subject3 >> subject4 >> subject5;
    if (subject1>100||subject2>100||subject3>100||subject4>100||subject5>100)
    cout<<"invalid input";
// input of marks taken and checked 
else{
	total = subject1 + subject2 + subject3 + subject4 + subject5;
	percent = total / 5.0;
	if (percent >= 90)
		grade = "A+";
	else if (percent >= 80)
		grade = "A";
	else if (percent >= 70)
		grade = "B";
	else if (percent >= 60)
		grade = "C";
	else if (percent >= 50)
		grade = "D";
	else
		grade = "F";
	//  conditions for assigning grades.

	cout << fixed << showpoint << setprecision(2);
    cout<<left<<setw(15)<<"\n sub1"<<left<<setw(15)<<"sub2"<<left<<setw(15)<<"sub3"<<left<<setw(15)<<"sub4"<<left<<setw(15)<<"sub5"<<endl;
    cout<<left<<setw(15)<<subject1<<left<<setw(15)<<subject2<<left<<setw(15)<<subject3<<left<<setw(15)<<subject4<<left<<setw(15)<<subject5<<endl;


	cout << left << setw(10) << "obtained" << setw(15) << "percentage" << setw(10) << "grade" << endl;
	cout << left << setw(10) << total << setw(15) << percent << setw(10) << grade << endl;
	//  a table to show result

	cout << ((percent >= 50) ? "pass" : "fail");
	// ternary operator to print weather the student passed or failed


	return 0;
}
}
