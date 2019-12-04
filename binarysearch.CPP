#include <iostream>
#include <conio.h>
using namespace std;

int binarySearch(int arr[],int first,int last,int num){
    if(last>=first){
    int mid=(first+last)/2;
    if(arr[mid]==num){
        return mid;
    }
    else if(num>arr[mid]){
        return binarySearch(arr,mid+1,last,num);
    }
    else{
        return binarySearch(arr,first,mid-1,num);
    }
    }
    return -1;
}

int main() {
    int num,first,last,mid,n;
    int arr[100];
    
    cout<<"Enter number of elements";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    first=0;
    last=n-1;
    cout<<"Enter element to be searched: ";
    cin>>num;
    cout<<binarySearch(arr,first,last,num)+1;
    getch();
}
