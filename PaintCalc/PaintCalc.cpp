#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	const float PainterConstant = 0.004;
	const float WasteExpected = 1.2;
	int NumberOfChildren;
	float SurfaceToBePainted;
	int NumberOfDaysExpected;


	cout << "Welcome to the paint calculator" << endl;
	cout << "What is the number of the children to be painted?" << endl;
	cin >> NumberOfChildren;

	cout << "Please enter the surface are to be painted " << endl;
	cin >> SurfaceToBePainted;

	cout << "How many days to expected to finish the job?" << endl;
	cin >> NumberOfDaysExpected;

	float NumberOfGallons = ((PainterConstant * NumberOfChildren * SurfaceToBePainted) + WasteExpected) * (1 + 1 / NumberOfDaysExpected);
	int intNumberOfGallons = ceil(NumberOfGallons);
	cout << "The number of gallons of paint needed (rounded up): " << intNumberOfGallons << endl;
	return 0;
}