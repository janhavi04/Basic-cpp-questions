#include<iostream>
using namespace std;
void swap(int *x, int *y){

    int temp ;
    temp = *x;
    *x = *y;
    *y = temp;

    
}
int main(){
    int a , b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    swap(&a,&b);
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b:"<<b;
}