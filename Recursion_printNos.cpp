#include <iostream>
using namespace std;

int recur_print(int a,int n){
    if(n<a){
        return 1;
    }
    cout<<a<<endl;
    return recur_print(a+1,n);
}
int main() {
	//code
	int n;
	cin>>n;
	recur_print(1,n);
	return 0;
}