#include<iostream>
#include<math.h>
using namespace std;
double func(double x)
{
	return x-exp(-x);
}

double c;

void bisection(double a,double b)

{
	int count=0;
	if(func(a)*func(b)>=0)
	{
		cout<<"Incorrect value of a & b";
	}

    c=a;
    while ((b-a)>=0.001)
    {
    	c=(a+b)/2;
    	if (func(c)==0)
    	{break;}
    	else if(func(c)*func(a)<0)
    	{
    		b=c;
    		cout<<"iteration"<<count<<" a: "<<a<<" b: "<<b<<endl;
    		count++;
		}
		else
		{
			a=c;
			cout<<"iteration"<<count<<" a: "<<a<<" b: "<<b<<endl;
    		count++;
		}
	}
}

int main()
{
	double a,b;
	cout<<"Input Value of a: ";
	cin>>a;
	cout<<"Input Value of b: ";
	cin>>b;
	bisection(a,b);
	cout<<"\n";
	cout<<"The value of root is a "<<c<<endl;
	
	return 0;
}

