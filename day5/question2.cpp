// write a cpp program that having 10% discount using reference update the original value
#include <iostream>
using namespace std;
int main(){

    double price;
    cout<<"Enter the price: ";
    cin>>price;

    double discount=price*0.1;
    price=price-discount;

    cout<<"Price after 10% discount: "<<price<<endl;

    return 0;
}