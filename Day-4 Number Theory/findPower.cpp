#include <bits/stdc++.h>
using namespace std;

long long getPower(long long base, long long power){
    int res = 1;

    while(power > 0){
        if(power %2 == 1){
            res *= base;
        }
        base = base * base;
        power /= 2;
    }

    return res;
}


int main(){
    long long base, power; 
    cin >> base >> power;

    cout << getPower(base , power) << endl;   
    return 0;
}
