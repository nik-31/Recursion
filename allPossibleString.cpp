#include<iostream>
using namespace std;
void print(char str[],string ans,int ind,bool flag){
    if(str[ind]=='\0'){
        cout<<ans<<"$";
        return;
    }
    if(str[ind]){
        print(str,ans+str[ind],ind+1,true);   
        if(flag)                            //if flag==true means previous added char was not space 
        print(str,ans+" ",ind,false);      //so now we can add space and for next recursion,make it false to avoid addition of space.
 
    }
}
void  printSpace(char str[]){
    string ans="";
    ans+=str[0];
    print(str,ans,1,true);
}
int main(){
    string s;
    cin>>s;
    printSpace(s);
}