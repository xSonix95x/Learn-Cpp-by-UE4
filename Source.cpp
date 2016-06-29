// To fast travel use ->  find --> Co
// Use Comments to blocks some code
//-----------------------------------//
//001 - Ask name & age. Enter name & age. Print all
//002 - Write an isPositive function that returns true when the double parameter passed to it is indeed positive
//003 - function returns true when the magnitude of 'a' is equal to the magnitude of 'b' (absolute value)
//004 - Write a getGrade() function that accepts an integer value (marks out of 100) and returns the grade(either A, B, C, D, or F).
//005 - A mathematical function is of the form f(x) = 3x + 4. Write a C++ function that returns values for f(x).
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


/////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


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


/////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


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


/////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


//Co004 - Write a getGrade() function that accepts an integer value (marks out of 100) and returns the grade(either A, B, C, D, or F).
string getGrade(int a)
{
	string grade = "";
	
	if (a < 20)
		grade += "F";
	else if (a < 40)
		grade += "D";
	else if (a < 60)
		grade += "C";
	else if (a < 80)
		grade += "B";
	else grade += "A";

	return grade;
}

int main() {

	int a;

	cout << "Enter number" << endl;
	cin >> a;

	if (a < 0)
		cout << "Less then 0" << endl;
	else if ( a > 100)
		cout << "More then 100" << endl;
	else
		cout << "You get the grade - " << getGrade(a) << endl;
	system("pause");
	return 0;
}


/////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


//Co005 - A mathematical function is of the form f(x) = 3x + 4. Write a C++ function that returns values for f(x).
int getAnswer(int x)
{
	return 3 * x + 4;
}

int main() {

	int x;

	cout << "Enter number" << endl;
	cin >> x;

	cout << "f(x) = 3 * x + 4 = " << getAnswer(x) << endl;
	system("pause");
	return 0;
}


///////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


