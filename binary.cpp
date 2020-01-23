#include<iostream>
using namespace std;

int itbinary(int arr[],int x) {
    int l=0,u=9;
    int m=int((l+u)/2);
    while(l<u && arr[m]!=x) {
        if(x>arr[m])
            l=m+1;
        else
            u=m-1;
        m=int((l+u)/2);
    }
    if(arr[m]==x)
        return m;
    return -1;
}

int recbinary(int arr[],int x,int l,int u) {
    int m=int((l+u)/2);
    if(l>u)
        return -1;
    if(arr[m]==x)
        return m;
    if(arr[m]>x)
        return recbinary(arr,x,l,m-1);
    return recbinary(arr,x,m+1,u);
}

int main() {
    int arr[]={2,6,12,15,24,31,40,65,74,88};
    cout<<itbinary(arr,3)<<endl;
    cout<<itbinary(arr,6)<<endl;
    cout<<recbinary(arr,56,0,9)<<endl;
    cout<<recbinary(arr,65,0,9)<<endl;
    return 0;
}