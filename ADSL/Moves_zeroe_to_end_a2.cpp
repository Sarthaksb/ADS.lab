#include<iostream>
using namespace std;

int main() {
    
    int arr[10], arr1[10];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the array elements to sort zeroes:\n";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            
            arr1[j]=arr[i];
            j++;
        }
    }
    
    for (int i=j;i<n;i++){
        arr1[i]=0;
    }
    
    cout<<"Sorted array zeroes moved to end:";
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<"\t";
    }
    
    return 0;
}
