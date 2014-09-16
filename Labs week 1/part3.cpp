#include <iostream>;
using namespace std;
double hoursWorked;
double hourlyRate;
double salary;
int main()
{
	cout << "Please enter the hours worked and the hourly rate:" << endl;
	cin >> hoursWorked >> hourlyRate;
	if (hoursWorked <= 40)
	{
		salary = hoursWorked * hourlyRate;
	}
	else
	{
		salary = (40 * hourlyRate) + ((hoursWorked - 40)*(hourlyRate * 1.5));
	}
	cout << "Salary: " << salary << endl;
	system("pause");

	return 0;
}