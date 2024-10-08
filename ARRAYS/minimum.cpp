#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,67,89,8};
    int size=6;
    int smallest=INT16_MAX;
    for(int i=0;i<size;i++){
       smallest=min(arr[i],smallest);
    }
    cout<<"minimum or smallest values is :"<<smallest;
    return 0;
}