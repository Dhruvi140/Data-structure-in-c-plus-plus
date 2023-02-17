//sum of all sub arrays 
#include<iostream>
using namespace std;

int main()
{ 
    int n;
    cout<<"enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"enter the element of an array "<<endl;
    for (int i = 0; i <n; i++)
    {
       cin>>arr[i];
    }
    cout<<"finding sum of an array"<<endl;
    int sum=0;
    for (int i = 0; i <n; i++)
    {   
        
        for (int j = i; j < n; j++)
        {
          sum=sum+arr[j];
        }
        
    }
    cout<<"sum of all subarrays is "<<sum<<endl;
    
    return 0;
}