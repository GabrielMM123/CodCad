#include <iostream>
using namespace std;

int main(){
    int L1, A1, L2, A2;
    cin >>L1>>A1>>L2>>A2;
    if(L1 * A1 > L2 * A2){
        cout << "Primeiro";
    }
    if(L2 * A2 > L1 * A1){
        cout << "Segundo";
    }
    if(L1 * A1 == L2 * A2){
        cout << "Empate";
    }
    return 0;
}
