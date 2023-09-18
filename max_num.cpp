#include<iostream>
using namespace std;


int max(){

    int arr[]={94,88,63,7,85};
    int max = arr[0];
    int min = arr[0];
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<size ; i++){
        if(arr[i]>max)
        max = arr[i];

        
    }

    return max;
}
int main(){
   cout<< max();
}