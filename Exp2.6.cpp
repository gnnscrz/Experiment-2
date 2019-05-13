#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a; int sum;
    do
        {   
            
            cout << "Enter a positive integer: ";
            cin >> a;
            sum = 0;
            for (int i = 1; i <= a; ++i) 
                {
                    sum += i;  
                }
                    if (a > 0)
                        {
                            cout << "The sum of all whole numbers from 1 to " << a << " is " << sum << "." << endl;
                        }
                    if (a == 0)
              	        {
              	            cout << "Thank you!" << endl;
			               
              	        }
        }
    while(a != 0);
   
	
	_getch();
	 return 0;
}