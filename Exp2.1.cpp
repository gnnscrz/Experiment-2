#include <iostream>
#include <conio.h>
#include <string> 

using namespace std;

int main()

{

	char a, b, c, A, B, C, p;  
	float hours, price;

	cout << "Internet Service Provider" << endl;

	cout << " " << endl; 
	
	cout << "Choose a subscription package." << " " << endl;
	cin >> p;
	cout << " " << endl;

	cout << "Number of hours used" << " " << endl;
	cin >> hours;
	cout << " " << endl;

	switch (p)
	{
		
		case 'a' : 
		case 'A' :
		if (hours > 10) {
			price  = 995 + ((hours - 10) * 20); }
		else {
			price = 995;	}
		cout << "Total Amount Due:" << " " << "P" << " " << price << endl; 
		break; 
 
		case 'b' :
		case 'B' :
		if (hours > 20) {
			price  = 1495 + ((hours - 20) * 10); }
		else {
			price = 1495; }
		cout << "Total Amount Due:" << " " << "P" << " " << price << endl;
		break;

		case 'c' : 
		case 'C' :
			price = 1995;
			cout << "Total Amount Due:" << " " << "P" << " " << price << endl; 
		break;

		default: 
		cout << "Invalid package" << endl; 

}

	
 



_getch();
return 0;
}