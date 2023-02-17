//max till i th we have to replace all element by max til that index 
#include<iostream>
using namespace std;

int main()
{   int n;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element of an array"<<endl;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i <n; i++)
    {
        if (arr[i]<arr[i-1])
        {
           arr[i]=arr[i-1];
        }    
    }
    
    cout<<"the result will be"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}