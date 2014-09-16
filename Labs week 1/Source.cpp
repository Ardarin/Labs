#include <iostream>
using namespace std;
double ounces;
double metricTon = 35273.92;
double converted;
double boxes;
int main()
{
	cout << "Type in the weight in ounces" << endl;
	cin >> ounces;
	converted = ounces / metricTon;
	boxes = metricTon / ounces;
	cout << ounces << " ounces is " << converted << " in metric  tons."<<endl;
	cout << "Boxes needed: " << boxes << endl;
        std::cin.get();


	return 0;
}
