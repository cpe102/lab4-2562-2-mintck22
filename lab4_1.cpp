#include<iostream>
#include<cmath>

using namespace std;

double funcY(double x){
    return 3*x*x*x+2*2.71828+pow(2,2*x+1)+sqrt(x*x+1);
}

int main()
{
	double x;
	cout << "Enter x = ";
    cin >> x;

    cout << "Result y = " << funcY(x);

	
	
	return 0;
}
