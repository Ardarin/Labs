#include <iostream>;
using namespace std;
double killDose;
double mouseWeight;
double dWeight;
double dDose;
double sodaAllowed;
int main()
{
	cout << "PLease enter the kill dose, mouse weight and the weight of the dieter(the deisred weight after dieting)." << endl;
	cin >> killDose >> mouseWeight >> dWeight;
	dDose = (dWeight / mouseWeight) * killDose;
	sodaAllowed = dDose * 10;
	cout << "Soda Allowed:" << sodaAllowed << endl;
	system("PAUSE");
	return 0;
}