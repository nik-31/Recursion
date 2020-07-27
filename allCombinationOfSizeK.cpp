#include<bits/stdc++.h>
using namespace std;
void printCombinationUtil(int a[],int n,int r,int index,int data[],int i){
    if(index==r){
        for(int j=0;j<r;j++){
            cout<<data[j]<<" ";
        }
        cout<<endl;
        return;
    }
    if (i >= n)  
        return;  
    data[index] = a[i];  
    printCombinationUtil(a,n,r,index+1,data,i+1);   
    printCombinationUtil(a,n,r,index,data,i+1);   
}
void printCombination(int a[],int n,int r){
    int data[r];
    printCombinationUtil(a,n,r,0,data,0);
}
int main(){
    int a[]={1,2,3,4,5};
    int r=3;
    int n=sizeof(a)/sizeof(a[0]);
    printCombination(a,n,r);
}