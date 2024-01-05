#include<iostream>
using namespace std;
int main(){
    while(1){
        int n;
        cin>>n;
        if(n == -1){
            break;
        }
        else{
            cout<<n * n<<endl;
        }
    }
    return 0;
}