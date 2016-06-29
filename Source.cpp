// To fast travel use ->  find --> Co
// Use Comments to blocks some code
//-----------------------------------//
//001 - Ask name & age. Enter name & age. Print all
//002 - Write an isPositive function that returns true when the double parameter passed to it is indeed positive
//-----------------------------------//


#include <iostream>
#include <string>

using namespace std;


//Co001 - Ask name & age. Enter name & age. Print all.
int main() {
	int age;
	string name;
	int x = 6;
	int y = 8;

	cout << "Is x equal to y? C++ says: " << boolalpha << (x == y) << endl;
	cout << "What you Name?" << endl;
	cin >> name;
	cout << "Have you old?" << endl;
	cin >> age;
	cout << "You name - " << name << " \nYou age - " << age << endl;
	
	system("pause");
	return 0;
}


///////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


//Co002 - Write an isPositive function that returns true when the double parameter passed to it is indeed positive
bool isPositive(double dParam)
{
	return dParam > 0;
}

int main() {

	double myDouble;

	cout << "Enter a Number" << endl;
	cin >> myDouble;
	cout << myDouble << " is positive ? \nAnswer : " <<  boolalpha << isPositive(myDouble) << endl;

	system("pause");
	return 0;
}


///////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


//Co003 - function returns true when the magnitude of 'a' is equal to the magnitude of 'b' (absolute value)
bool isEqual(int a, int b)
{
	if (a < 0)
		a = 0 - a;
	if (b < 0)
		b = 0 - b;

	return a == b;
}

int main() {

	int a, b;

	cout << "Enter First number" << endl;
	cin >> a;
	cout << "Enter Second number" << endl;
	cin >> b;
	
	cout << a << " and " << b << boolalpha << " is equal ? \nAnswer : " << isEqual(a,b) << endl;
	system("pause");
	return 0;
}


///////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


