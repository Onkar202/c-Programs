#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter number to divide: ";
    cin>>n1;
    cout<<"Enter a divider number: ";
    cin>>n2;

    cout<<"Quotient is "<<n1/n2<<" and reminder is "<<n1 % n2;

    return 0;
}