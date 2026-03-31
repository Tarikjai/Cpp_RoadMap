
#include <iostream>
using namespace std;
#include <vector>


int main() {

	struct StEmployee {
		string Name;
		int Salary;
	};

	StEmployee Employee, * ptr;

	Employee.Name = "Claude";
	Employee.Salary = 999;

	cout << Employee.Name << endl;
	cout << Employee.Salary << endl;

	cout << "Using pointer: " << endl;

	ptr = &Employee;
	cout << ptr->Name << endl;
	cout << ptr->Salary << endl;

}