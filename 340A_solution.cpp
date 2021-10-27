// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n,steps=0;
    cin>>n;
    steps=n/5;
    n=n%5;
    if(n==0){
        cout<<steps;
        return 0;
    }
    else{
        cout<<steps+1;
    }
    return 0;
}