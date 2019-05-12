#include <iostream> 
#include <conio.h>
#include <cmath> 
#include <cstdlib>
#include <iomanip> 

using namespace std; 

int main()
{
cout << "This program computes for the value of V." << endl;

int x, y;
const double z = 2.5;

cout << "Enter value of x:"; cin >> x;
cout << "Enter value of y:"; cin >> y;


switch (x) 
{
	case 1 : 
		{if (y>1 && y<5)
			{
			cout << setw(10) << setprecision(2) << fixed << "V:" << " " << x * y * z << endl;	
			}
		else 
			{
			cout << setw(10) << setprecision(2) << fixed << "V:" << " " << x + y / z << endl;
			}
		}
		
	break; 

	case 2 : 
		{if (y<=5)
			{
			cout << setw(10) << setprecision(2) << fixed << "V:" << " " << abs((x - y) / z) << endl;
			}
		else 
			{
			cout << setw(10) << setprecision(2) << fixed << "V:" << " " << x - sqrt(y - z) << endl;	
			}
		}
		
		break;

	default : 
		 
	cout << setw(10) << setprecision(2) << fixed << "V:" << " " << x + y + z << endl;
}



_getch();
return 0;
}