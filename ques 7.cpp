#include <iostream>
using namespace std;
main() {
 int a = 20;
 int c ;
 c = a++; 
 cout << "Line 1 - Value of a++ is :" << c << endl ;
 cout << "Line 2 - Value of a is :" << a << endl ;
 c = ++a; 
 cout << "Line 3 - Value of ++a is :" << c << endl ;
 return 0;
}

