#include <iostream>
using namespace std;

void PrintName(string Name)
{
	cout << Name << endl; 

}
string ReadName()
{
	string Name; 

	cout << "Please Enter Your Name:\n";
	cin >> Name;

	return Name;
}
void PrintHeader()
{
	cout << "*************************\n";

	cout << "First Name: " << endl;

	cout << "Last Name: " << endl;

	cout << "Phone Number: " << endl;
}
int main()
{
	//cout << "Your Name is: " << ReadName() << endl;

	PrintHeader();

	system("Pause");
	/*cout << "My Name is: ";
	PrintName("Nawaf");
   */
}