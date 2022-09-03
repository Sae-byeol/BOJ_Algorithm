#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;

    while(1){
        cin >> n;
        int a=0,b=0;
        if (n == 0)
            break;
        //에라토스테네스의 체로 소수부터 구하기
        int num[n+1];
        fill_n(num, n+1, 0);
        num[0]=1; num[1]=1; //0,1은 원래 소수아님
        int i=2;
        while(i*i<=n){
            int j=2;
            while( i * j <= n){
                num[i*j]=1;
                j++;
            }
            i++;
        }//0인게 소수
       
       for (int i=3;i<(n+1)/2;i=i+2){ //i=1,3,5 ... 홀수만
            if(num[i]==0){
                //홀수 소수 이고
                if (num[n-i] == 0){
                    //상대도 소수라면 
                    a=i;
                    b=n-i;
                    break;
                }
            }
       }
       if (a==0 && b==0){
        //답이 없다면 
        cout<<  "Goldbach's conjecture is wrong."<< "\n";
       }
       cout << n << " = " << a << " + "<< b <<"\n";

    }
}