#include<bits/stdc++.h>
using namespace std;

bool armstrongNumber(int n) {
    int p = to_string(n).length();
    int sum = 0;
    int num = n;
    
    while(num > 0){
        int d = num % 10;
        sum += pow(d, p);
        num/=10;
    }
    return sum == n;
}

int main(){
    int n = 1634;
    cout << armstrongNumber(n);
}