#include<bits/stdc++.h>
using namespace std;
void sumTriangle(int a[],int n){
    if(n<1)
        return;
    int temp[n-1];
    for(int i=0;i<n-1;i++){
        int x=a[i]+a[i+1];
        temp[i]=x;
    }
    sumTriangle(temp,n-1);
    for(int i=0;i<n;i++){
        if(i==n-1)
            cout<<a[i]<<" ";
        else    
            cout<<a[i]<<",";
    }
    cout<<endl;
}
int main(){
    int a[]={1,2,3,4,5};
    int n=5;
    sumTriangle(a,n);
    return 0;
}