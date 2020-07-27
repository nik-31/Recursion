#include<bits/stdc++.h>
using namespace std;
string copyString(string s,int n,string temp){
    temp+=s[n];
    if(s.length()==n){
        return temp;
    }
    return copyString(s,n+1,temp);
}
int main(){
    string s;
    cin>>s;
    cout<<copyString(s,0,"");
}