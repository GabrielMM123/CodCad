#include <iostream>
using namespace std;

int main(){
    float a, b, s;
    cin>>a>>b;
    s = (a+b)/2;
    if(s >= 7){
        cout << "Aprovado";
    }
    else if(s < 7){
        if(s >= 4){
            cout << "Recuperacao";
        }
        else{
            cout << "Reprovado";
        }
    }
}
