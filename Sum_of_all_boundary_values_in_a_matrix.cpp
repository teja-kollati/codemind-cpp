#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int mat[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>mat[i][j];
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == 0 || j == 0 || i == n - 1 || j == m - 1){
                sum += mat[i][j];
            }
        }
    }
    cout<<sum;
}