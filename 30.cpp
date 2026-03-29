#include <iostream>
#include <vector>

using namespace std;

struct Employee {
	string Name;
	string Lastname;
	int Salary;
};

void ReadEmployeesInfo(vector <Employee>& vInfo) {
	string ReadMore = "Y";

	while (ReadMore == "Y" || ReadMore == "y") {
		Employee tempEmployee;

		cout << "Please enter the employee name: " ;
		cin >> tempEmployee.Name;
		cout << "Please enter the employee Lastname: " ;
		cin >> tempEmployee.Lastname;
		cout << "Please enter the employee Salary: " ;
		cin >> tempEmployee.Salary;
		vInfo.push_back(tempEmployee);

		cout << "\n\nWanna add more employees (Y/N)? ";
		cin >> ReadMore;
		
		cout << endl;
	}
}
;

void PrintEmployeesInfo(vector <Employee> & vInfo) {

	for (Employee & i : vInfo) {
		cout  << endl;
		  cout << "FirstName: " << i.Name << endl;
		  cout << "Lastname: " << i.Lastname << endl;
		  cout << "Salary: " << i.Salary << endl;

	}
}


int main() {
	vector <Employee> vEmployee;

	ReadEmployeesInfo(vEmployee);
	PrintEmployeesInfo(vEmployee);
}








/*
struct Student {
	string Name;
	int Age;
	int Mark;
};

short HowManyStudent() {
	short StdNbr;
	cout << "How much student you want to enter: " << endl;
	cin >> StdNbr;
	return StdNbr;
}

void readInput(vector <Student>& vClasse) {
	 
	short StdNbr = HowManyStudent();
	 
	for (int i = 0; i < StdNbr; i++) {
		Student e;
		cout << "Enter the name of the student "<< i+1 <<" : " ;
		cin >> e.Name;
		cout << "Enter the age of the student " << i + 1 << " : " ;
		cin >> e.Age;
		cout << "Enter the result of the student " << i + 1 << " : " ;
		cin >> e.Mark;
		vClasse.push_back(e);
		cout << endl;
	}

}

void PrintInput(vector <Student>& vClasse) {
	 
	 
	for (int i = 0; i < vClasse.size(); i++) {
		cout << "Name of the student " << i + 1 << " : " ;
		cout << vClasse[i].Name << endl;
		cout << "Age of the student " << i + 1 << " : ";
		cout << vClasse[i].Age << endl;
		cout << "Result of the student " << i + 1 << " : " ;
		cout << vClasse[i].Mark << endl;
		cout << endl;
	}
	cout << endl;
}



int main() {
	 
	
	vector <Student> vClasse;

	readInput(vClasse);
	PrintInput(vClasse);
		




}*/