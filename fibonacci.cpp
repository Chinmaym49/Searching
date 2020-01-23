#include<iostream>
using namespace std;

int fibonacci(int arr[],int n,int f,int f1,int f2,int x) {
    int off=-1,i;
    while(f2!=0 || f1!=1) {
        if(off+f2>n-1)
            i=n-1;
        else
            i=off+f2;
        if(arr[i]>x) {
            f-=f1;
            f1-=f2;
            f2=f-f1;
        }
        else if(arr[i]<x){
            off=i;
            f-=f2;
            f2=f1-f2;
            f1=f-f2;
        }
        else
            return i;
    }
    return -1;
}

int main() {
    int arr[]={2,6,12,15,24,31,40,65,74,88};
    int f2=0,f1=1,n=10;
    while(f2+f1<n) {
        int temp=f1;
        f1+=f2;
        f2=temp;
    }
    int f=f1+f2;
    cout<<fibonacci(arr,10,f,f1,f2,3)<<endl;
    cout<<fibonacci(arr,10,f,f1,f2,6)<<endl;
    cout<<fibonacci(arr,10,f,f1,f2,31)<<endl;
    return 0;
}