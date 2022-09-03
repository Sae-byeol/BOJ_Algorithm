#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    int max, min;
    int n;
    cin >> n;
    max=n;
    min=n;
    for (int i=1;i<num;i++){
        cin >> n;
        if (max < n){
            max=n;
        }
        if (min > n){
            min =n;
        }
    }
    cout<< max*min;
}