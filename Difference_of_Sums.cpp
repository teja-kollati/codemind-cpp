#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum1 = n*(n+1) / 2;
    int sum2 = n*(n+1)*(2*n +1) / 6;
    cout<<abs(sum2 - (sum1 * sum1));
    return 0;
}