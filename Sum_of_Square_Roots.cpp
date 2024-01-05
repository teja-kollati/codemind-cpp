#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    float sum = 0;
    for(int i = a; i <= b; i++){
        sum += sqrt(i);
    }
    cout<<setprecision(2)<<fixed<<sum;
    return 0;
}