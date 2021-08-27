#include<iostream>
using namespace std;
int main(){
    int n2,reverse=0,rem;
    cout<<"Enter a number: ";
    cin>>n2;

   while(n2 != 0){
       rem = n2 % 10;
       reverse = reverse * 10 + rem;
       n2 /= 10;
   }
   
   cout<<reverse;
}