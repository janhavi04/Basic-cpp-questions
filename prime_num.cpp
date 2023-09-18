#include<iostream>
using namespace std;

int main(){

int n;
int flag = false;
cout<<"ENter a number:";
cin>>n;

for(int i =2; i<=n/2;i++ ){
    if(n % i == 0){
        flag = true;
        break;

    }

}
if(!flag){
    cout<<n<<" is a prime number.";

}
else
cout<<n<<" is not a prime number.";

}