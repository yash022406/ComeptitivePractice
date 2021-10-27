// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   int n,i,pass=0,min,t;
   cin>>n;
   for(i=0;i<n;i++){
       int a,b;
       cin>>a>>b;
       pass+=b;
       pass-=a;
       if(i==0){
           min=pass;
       }
       else{
           if(min<pass){
               min=pass;
               
           }
       }
   }
   cout<<min;
    return 0;
}
