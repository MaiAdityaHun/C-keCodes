#include <iostream>
using namespace std;
 
int main () {
 
   char grade;
   cout<<"Enter your Grade: ";
   cin>>grade;

   switch(grade) {
      case 'O' :
         cout << "Outstanding!" << endl; 
         break;
      case 'A' :
      	cout << "Very nice" << endl; 
         break;
      case 'B' :
         cout << "Nice Performance, keep it up" << endl;
         break;
      case 'D' :
         cout << "You Need Some Hard work" << endl;
         break;
      case 'F' :
         cout << "Sorry, You Have failed" << endl;   
         break;
      default :
         cout << "Invalid grade" << endl;
   }
   cout << "Your grade is " << grade << endl;
 
   return 0;
}

