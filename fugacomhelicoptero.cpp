# include <iostream>
using namespace std;
int main(){
    int H,P,F,D;
    cin>>H>>P>>F>>D;
    if (D == -1) {
        if (F > H && H > P) {
            cout << "S";
        } else if (P > F && F > H) {
            cout << "S";
        } else if (H > P && P > F) {
            cout << "S";
        } else {
            cout << "N";
        }
    } else {
        if (F > P && P > H) {
            cout << "S";
        } else if (P > H && H > F) {
            cout << "S";
        } else if (H > F && F > P) {
            cout << "S";
        } else {
            cout << "N";
        }
    }
    return 0;
}
