#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    while(sum > 9 || n > 0){
        int digit = n % 10;
        sum += digit;
        n /= 10;
        if(n == 0 && sum > 9){
            n = sum;
            sum = 0;
        }
    }
    cout<<sum;
}