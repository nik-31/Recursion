#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printAllSubsetSum(int a[],int l,int r,int sum=0){
    if(l>r){
        cout<<sum<<" ";
        return;
    }
    printAllSubsetSum(a,l+1,r,sum+a[l]);
    printAllSubsetSum(a,l+1,r,sum);
}
int main(){
    int a[]={2,3,5};
    int n=3;
    printAllSubsetSum(a,0,n-1);
}