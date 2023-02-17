#include<iostream>
using namespace std;
int linearsearch(int arr[],int n, int key){
    for (int i = 0; i <n; i++)
    {
        if (arr[i]==key)
        {
            return i;
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
    cout<<"enter the element you want to find"<<endl;
    cin>>key;
    int k= linearsearch(arr,n,key);
    cout<<"the position of the element is "<<k+1<<endl;
    
    
    
    return 0;
}