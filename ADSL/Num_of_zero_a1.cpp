#include<iostream>
using namespace std;
int main(){
    //find no of zer0 and one
    int arr[10];
    int n;
    cout<<"Enteer the size of array:\n";
    cin>>n;
    cout<<"Enter the array elements :\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int one=0,zero=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            one++;
        }
        else if(arr[i]==0){
            zero++;
        }
    }
    cout<<"Number of one's is "<<one<<"\n and Number of zero's is "<<zero;
    return 0;
}