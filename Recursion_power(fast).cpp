#include<iostream>
using namespace std;
int power(int n,int m){
    if(m==0){
        return 1;
    }
    if(m%2!=0){
        return n*power(n,m-1);
    }
    else{
        return power(n*n,m/2);
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    int s=power(n,m);
    cout<<s<<endl;
}