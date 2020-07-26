#include<iostream>
using namespace std;
bool IsPalinRec(string s,int m,int n){
    if(m==n)
        return true;
    if(s[m]!=s[n])
        return false;
    if(m<=n)
        return IsPalinRec(s,m+1,n-1);
    return true;
}
bool IsPalindrome(string s){
    int n=s.length();
    if(n==0)
        return true;
    return IsPalinRec(s,0,n-1);
}
int main(){
    string s;
    cin>>s;
    bool t=IsPalindrome(s);
    if(t==true)
        cout<<"YES";
    else    
        cout<<"NO";
}