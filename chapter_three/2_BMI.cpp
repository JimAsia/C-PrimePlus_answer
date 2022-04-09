#include <iostream>

const int transform_feet = 12;
const double transform_meter = 0.0254;
const double transform_kg = 2.2;
double getFeet(double inch);
double getMeter(double feet);
double getKg(double pound);
double getBMI(double meter, double kg);

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	
	double inch, feet, pound, meter, kg, BMI;
	cout << "Please enter your height(inch and feet) and weight(pound): \n";
	cout << "Your height(inch): ____\b\b\b\b";
	cin >> inch;
	cout << "Your height(feet): ____\b\b\b\b";
	cin >> feet;
	cout << "Your weight(pound): ____\b\b\b\b";
	cin >> pound;
	feet = feet + getFeet(inch);
	meter = getMeter(feet);
	kg = getKg(pound);
	BMI = getBMI(meter, kg);
	cout << "Your BMI is " << BMI << endl;
	
	return 0;
}

double getFeet(double inch)
{
	return transform_feet * inch;
}

double getMeter(double feet)
{
	return transform_meter * feet;
}

double getKg(double pound)
{
	return pound / transform_kg;
}

double getBMI(double meter, double kg)
{
	return kg / (meter * meter);
}
