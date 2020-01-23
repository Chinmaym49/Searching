#include<iostream>
using namespace std;

int linear(int arr[],int x) {
    int i=0;
    for(;i<10;i++) 
        if(arr[i]==x)
            break;
    if(i==10)
        return -1;
    return i;
}

int main() {
    int arr[]={12,65,24,2,74,15,88,6,31,40};
    cout<<linear(arr,3)<<endl;
    cout<<linear(arr,74)<<endl;
    return 0;
}