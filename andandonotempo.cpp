#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	cin>>a>>b>>c;
	if(a == b or a == c or b == c or a + b == c or a + c == b or b + c == a){
		cout << "S";
	}
	else{
		cout << "N";
	}
}
