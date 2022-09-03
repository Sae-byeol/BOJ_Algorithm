#include <iostream>

using namespace std;

int main(){
    int num;
    int cnt=0; // 소수 아닌애들
    cin >> num;
    for (int i=0;i<num;i++){
        int n;
        cin >> n;
       if (n==1){
            cnt++;
       }else{
        for(int j=2;j<n;j++){
            if( n %j==0){
                cnt++;
                break;
            }
        }
       }
        
    }
    cout<< num-cnt;
}