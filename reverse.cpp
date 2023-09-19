#include<iostream>
using namespace std;
int main(){

    int n ,rem, new_num = 0,num ;
    cout<<"Enter a number:";
    cin>>n;
    num = n;
    while(n>0){
        rem = n %10;
        new_num = new_num*10+rem;
        n = n/10;

    }
    cout<<new_num<<endl;

//to check if number is palindrome or not
if(num == new_num)
cout<<num<<" is a palindrome number.";
else
cout<<num<<" is not a palindrome number.";
}