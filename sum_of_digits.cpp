#include<iostream>
using namespace std;

int main(){
    int num,rem;
    int sum = 0;
    cout<<"Enter the number";
    cin>>num;

    while(num>0){
        rem = num%10;
        num = num/10;
        sum += rem;
    }
    cout<<sum;

}