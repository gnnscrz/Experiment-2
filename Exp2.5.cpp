#include <iostream>
#include <conio.h>

using namespace std;

int main()

{

int t1 = 0, t2 = 1, i = 1, n, nextTerm; 

cout << "Fibonacci Numbers:" << endl; 

for (i = 1; i <=22; ++i)
{

cout << t1 << ", "; 
nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

}





_getch();
return 0; 
}