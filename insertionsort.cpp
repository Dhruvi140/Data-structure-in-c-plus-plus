#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"how many element you want to add to the array"<<endl;
    cin>>n;
    cout<<"enter the element you want to sort "<<endl;
    int arr[50];
    for (int  i = 0; i <n; i++)
    {
       cin>>arr[i];
    }
    
    for (int  i = 1; i <n; i++)
    {
        int current =arr[i];
        int j=i-1;
        while (arr[j]>arr[i]&&j>=0)
        {
           arr[j+1]=arr[j];
           j--;
        }
        arr[j+1]=current;
    }
    cout<<"sorted array is "<<endl; 
    for (int i = 0; i<n; i++)
    {
       cout <<arr[i]<<endl;
    }
    
    
    return 0;
}
