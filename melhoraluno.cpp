#include <iostream>
using namespace std;

int main(){
    double a, b;
    cin>>a>>b;
    if(a < b){
        cout << "Pedro";
    }
    if(b < a){
        cout << "Paulo";
    }
    if(b == a){
        cout << "Pedro";
    }
    return 0;
}
