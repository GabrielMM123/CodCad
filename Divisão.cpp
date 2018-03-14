#include <iostream>
using namespace std;

int main(){
	double a, b, s;
	cin >> a;
	cin >> b;
	s = a / b;
	cout.precision(2);
	cout.setf(ios::fixed);
	cout << s;
}