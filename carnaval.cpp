#include <iostream>
using namespace std;

int main(){
	float a,b,c,d,e;
	cin >> a>> b>> c>>d>>e;
	float z = a;
	float y = a;
	if(b >= z){
		z = b;
	}
	if(c >= z){
		z = c;
	}
	if(d >= z){
		z = d;
	}
	if(e >= z){
		z = e;
	}
	if(b <= y){
		y = b;
	}
	if(c <= y){
		y = c;
	}
	if(d <= y){
		y = d;
	}
	if(e <= y){
		y = e;
	}
	cout.precision(1);
	cout.setf(ios::fixed);
	cout << a + b + c + d + e - z - y;
}
