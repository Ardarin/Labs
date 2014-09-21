
#include <iostream>;
#include <fstream>;
using namespace std;
ifstream inStream;
ofstream outStream;
double previousPay;
double annualPay;
double monthlyPay;
double backPay;
const double increase = 7.6;
int main()
{
	inStream.open("file.txt");
	inStream >> previousPay;
	backPay = ((previousPay / 2)*increase) / (100);
	annualPay = ((previousPay*increase) / 100) + previousPay;
	monthlyPay = annualPay / 12;
	inStream.close();
	outStream.open("file.txt");
	outStream << "BackPay: "  << backPay << "\nAnnual Pay: " << annualPay << "\nMonthly Pay: " << monthlyPay;
	outStream << previousPay;
	outStream.close();
	system("pause");
	return 0;
}