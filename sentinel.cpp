#include<iostream>
using namespace std;

int sentinel(int arr[],int x) {
    int i=0;
    arr[10]=x;
    while(arr[i]!=x)
        i++;
    if(i==10)
        return -1;
    return i;
}

int main() {
    int arr[]={12,65,24,2,74,15,88,6,31,40};
    cout<<sentinel(arr,3)<<endl;
    cout<<sentinel(arr,31)<<endl;
    return 0;
}