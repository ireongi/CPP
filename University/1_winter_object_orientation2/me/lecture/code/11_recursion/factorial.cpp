#include <iostream>
using namespace std;

/// 반복문
int fact_iter(int n){
    int r = 1;
    for(int i=n; i>0; i--)
        r = r * i;
    return r;
}

/// 재귀문
int fact_recu(int n){
    if(n==1)
        return 1;
    return fact_recu(n-1)*n;
}

int main(){

    cout << fact_iter(5) << endl;
    cout << fact_recu(5) << endl;

    return 0;
}
