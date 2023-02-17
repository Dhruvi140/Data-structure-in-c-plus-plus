#include<iostream>
using namespace std;
int selectionsort(int arr[],int n){
    for (int i = 0; i <n-1; i++)
    {
       for (int j =i+1; j<n; j++)
       {
         if (arr[j]<arr[i])
         {
            int temp;
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
         }
         
       }
       
    }
    
   cout<<"sorted array are"<<endl;
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
    int k=selectionsort(arr,n);
}