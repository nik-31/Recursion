#include<bits/stdc++.h> 
using namespace std; 
stack<char> st; 
string ns;  
char reverse(char x) { 
    if(st.size() == 0) 
    st.push(x); 
    else{ 
        char a = st.top(); 
        st.pop(); 
        reverse(x); 
        st.push(a); 
    } 
} 
int main() 
{ 
    st.push('1'); 
    st.push('2'); 
    st.push('3'); 
    st.push('4'); 
      
    cout<<"Original Stack"<<endl; 
    cout<<"1"<<" "<<"2"<<" "<<"3"<<" "<<"4"<<endl; 
    while(!st.empty()){
        reverse(st.top()); 
        st.pop();
    }
    cout<<"Reversed Stack"<<endl; 
    while(!st.empty()){
        cout<<st.top()<<" "<<endl;
        st.pop();
    }
    return 0; 
} 