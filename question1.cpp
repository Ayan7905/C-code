// Return the array with double content using recursion

#include<iostream>
using namespace std;
void doubleArrayt(int arr[], int size,int index){
    if(index>=size){
        return;
    }
    arr[index]= arr[index]*2;

    doubleArrayt(arr,size,index+1);
}
int main(){
    int arr[]={10,20,30,40,50};
    int size = 5;
    int index = 0;
    cout<<"Array before doubling"<<endl;
    // for each loop
    for(int num:arr){
        cout<<num<<" ";
    }
    cout<<endl;
    doubleArrayt(arr,size,index);
    cout<<"Array after doubling"<<endl;
    // for each loop
    for(int num:arr){
        cout<<num<<" ";
    }
    cout<<"abcccc"<<endl;
    return 0;
}