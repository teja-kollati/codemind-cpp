#include<iostream>
using namespace std;
class sum{
    private:
       int a,b,x,y;
    public:
       sum(int i,int j,int k,int n){
           a = i;
           b = j;
           x = k;
           y = n;
       }
       void display(){
           int s = 0;
           for(int i = a; i <= b; i++){
               if(i%x == 0 && i%y != 0){
                   s += i;
               }
           }
           cout<<s;
       }
};
int main(){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    sum obj(a,b,x,y);
    obj.display();
    return 0;
}