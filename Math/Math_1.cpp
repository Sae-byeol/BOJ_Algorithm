#include <iostream>

using namespace std;
int main(){
    int a, b, c;
    cin >> a>>b>>c;
    cout << (a+b)%c;
    cout << "\n";
    cout << ((a%c)+(b%c))%c;
    cout << "\n";
    cout << (a*b)%c;
    cout << "\n";
    cout << ((a%c)*(b%c))%c;
}