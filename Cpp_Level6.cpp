#include<iostream>
using namespace std;

 

void check()
{
	string result;
	int  Number = 0;

	  
	result = (Number > 0) ? "Postive" : ((Number == 0) ? "Zero" : "Negative");

	cout << "\nResult is: " << result << "\n";


}
int main()
{ 
	check();
}