// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n,k;
    cin>>n>>k;
    while(k--){
        if(n%10!=0){
            n--;
        }else
        n=n/10;
    }
    cout<<n;
    return 0;
}