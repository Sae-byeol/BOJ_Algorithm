#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int max=0;
    int min=0;
    if (a>=b){
        for(int i=1;i<=b;i++){
            if (a%i==0 && b%i ==0 && max < i){
                max=i;
            }
        }
        for (int i=1;i<=a;i++){
            if ((b*i)%a==0){
                min=b*i;
                break;
            }
        }

    }else{
        for(int i=1;i<=a;i++){
            if (a%i==0 && b%i ==0 && max < i){
                max=i;
            }
        }
        for (int i=1;i<=a;i++){
            if ((a*i)%b==0){
                min=a*i;
                break;
            }
        }
    }
    cout<< max << "\n"<< min;
}