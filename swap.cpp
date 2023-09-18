#include<iostream>
using namespace std;
// using third variable
/*
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
*/

//without using third variable

int main(){
    int x , y;
    x = 4;
    y = 5;
    x = x+y; // 9
    y = x-y; // 4
    x = x-y; // 5
    cout<<x<<"    " <<y<<endl;
}