#include <iostream>

using namespace std;

int main(){
    int min, max;
    cin >> min >> max;
    int num[max+1];
    fill_n(num, max+1, 0);
    int i=2;
    //기본적으로 0, 1은 소수 아님
    num[0]=1;
    num[1]=1;
    while (i*i <=max)
    {
        int j=2;
        while (i*j<=max)
        {
            num[i*j]=1;
            j++;
        }
        i++;
    }
    for (int i=min;i<=max; i++){
        if(num[i]!=1){
            cout << i << '\n';
        }
    }
    


}