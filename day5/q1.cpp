// write a function that takes number of coke bottle, print the total volume of the coke if in each bottle there is 250ml coke.

// #include <iostream>
// using namespace std;    

// int cokevol(int n){
//     return n*250;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<cokevol(n)<<endl;;
// }

#include <iostream>
using namespace std;

void cokevol(int n){
    cout<<n*250<<endl;
}
int main(){
    int n;
    cin>>n;
    cokevol(n);
    return 0;
}

