#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,7,8,8};
    int size=8;
    int largest=INT16_MIN;
    for(int i=0;i<size;i++){
        largest=max(arr[i],largest);
    }
    cout<<"largest array element is :"<<largest;
}