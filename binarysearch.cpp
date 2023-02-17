#include<iostream>
using namespace std;
int binarysearch(int arr[],int n, int key){
int s=0;
int e=n;
    while(s<=e){
        int mid =(s+e)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (key<arr[mid])
        {
            e=mid-1;
        }
        else if (key>arr[mid]){
            s=mid+1;
        }
        else {
            return -1;
        }
        
        
    }
    
}
int main()
{
    int n;
    int key;
    cout<<"how much  of the element"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element you want to add"<<endl;
    for (int i = 0; i <n; i++)
    {
       cin>>arr[i];
    }
    cout<<"enter the position of  element you want to find"<<endl;
    cin>>key;
    int k= binarysearch(arr,n,key);
    if(k==-1){
        cout<<"searched element not found "<<endl;
    }
    else{
    cout<<"the position of the element is "<<k+1<<endl;
    }  
    return 0;
}