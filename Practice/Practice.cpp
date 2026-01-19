#include <iostream>
#include <string>
using namespace std;

void PrintName(string name)
{
    cout << "Your Name is : " << name << endl;
}

string ReadName(string message)
{
    string input;
    cout << message << endl;
    getline(cin, input);
    return input;
}

void PrintName(string name)
{
    cout << "Your Name is : " << name << endl;
}

void PrintHeader(string FirstName, string LastName, string City, string Country)
{
    cout << "*************************\n";
    cout << "First Name: " << FirstName << endl;
    cout << "Last Name: " << LastName << endl;
    cout << "City: " << City << endl;
    cout << "Country: " << Country << endl;
    cout << "*************************\n";
}

int main()
{
    string FirstName = ReadName("Enter First Name:");
    string LastName = ReadName("Enter Last Name:");
    string City = ReadName("Enter City:");
    string Country = ReadName("Enter Country:");

    PrintHeader(FirstName, LastName, City, Country);

    return 0;
}
