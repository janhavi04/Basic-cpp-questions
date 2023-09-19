#include<iostream>
using namespace std;
int main(){

    int n,q,count=0,result=0,cnt,rem,mul=1;
    cout<<"Enter a number:";
    cin>>n;
    q=n;
    while(q!=0){
        q = q/10;
        count++;
    }
    cnt = count;
    q=n;
    while(q!=0){
        rem = q%10;
        while(cnt!=0){
            mul = mul*rem;
            cnt--;
        }
        result=result+mul;
        cnt = count;
        mul=1;
        q=q/10;
    }
    if(result == n){
        cout<<n<<" is an armstrong number";
    }
    else
    cout<<n<<" is not an armstrong number";
    
}