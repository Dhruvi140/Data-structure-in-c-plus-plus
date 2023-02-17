#include<iostream>
using namespace std;
int bubblesort(int arr[],int n){
    int counter=1;
    while (counter<n)
    {
     
    
    for (int i = 0; i <n-counter; i++)
    {
        if (arr[i+1]<arr[i])
        {
            int temp;
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
        
    }
    counter++;
  }   
cout<<"sorted array is "<<endl;
 for (int i = 0; i <n; i++)
 {
    cout<<arr[i]<<endl;
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
    int k= bubblesort(arr,n);   
    return 0;
}