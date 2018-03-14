#include <iostream>
using namespace std;

int main(){
    int P, R;
    cin>>P>>R;
    if(P == 0){
        cout << "C";
    }
    if(P == 1){
        if(R == 0){
            cout << "B";
        }
        if(R == 1){
            cout << "A";
        }
    }
    return 0;
}
