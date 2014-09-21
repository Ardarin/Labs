#include <iostream>;
#include <fstream>;
#include <string>
using namespace std;
ifstream inStream;
ofstream outStream;
double previousPay;
double annualPay;
double monthlyPay;
double backPay;
string name, lastN;
const double increase = 7.6;

int main()
{
	inStream.open("file.txt");
	outStream.open("file1.txt");
	
	while (inStream.eof() == false)
	{
		inStream >> name>> lastN>> previousPay;
		
		backPay = ((previousPay / 2)*increase) / (100);
		annualPay = ((previousPay*increase) / 100) + previousPay;
		monthlyPay = annualPay / 12;
		outStream << name << lastN << "BackPay: " << backPay << "\nAnnual Pay: " << annualPay << "\nMonthly Pay: " << monthlyPay<<"\n";
		
	}
	
	
	inStream.close();
	outStream.close();

	return 0;
}