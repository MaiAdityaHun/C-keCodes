#include <iostream>
using namespace std;
void printNumbers()
{
int n = 11;
label:
cout << n << " ";
n++;
if (n <= 15)
goto label;
}
int main()
{
printNumbers();
return 0;
}
