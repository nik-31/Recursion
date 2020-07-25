#include<iostream>
using namespace std;
void reverseString(string s,int n){
    if(n==0){
        cout<<s[n];
        return;
    }
    cout<<s[n];
    return reverseString(s,n-1);
}
int main(){
    string s;
    cin>>s;
    int n=s.length();
    reverseString(s,n-1);
}