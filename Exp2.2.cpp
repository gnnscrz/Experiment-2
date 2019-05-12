#include <iostream>
#include <conio.h>
#include <iomanip> 

using namespace std ;

int main()

{

double usedGallons, pastMonth, totalAmount;

cout << "Enter unpaid balance from the past month: "; cin >> pastMonth;
cout << "Enter number of gallons consumed in the current month: "; cin >> usedGallons; 

if (pastMonth < 0 && usedGallons < 0){
totalAmount = 0; 
cout << "Total Amount Due:" << "P" << " " << totalAmount << endl; 
}

else if (pastMonth > 0)
{
totalAmount = 35 + (1.10 * usedGallons) + pastMonth + 20;
cout << setw(10) << setprecision(2) << fixed << "Total Amount Due:" << "P" << " " << totalAmount << endl; 
}

else 
{
totalAmount = 35 + (1.10 * usedGallons); 
cout << setw(10) << setprecision(2) << fixed << "Total Amount Due: " << " " << "P" << " " << totalAmount << endl; 
}


_getch(); 
return 0; 
}