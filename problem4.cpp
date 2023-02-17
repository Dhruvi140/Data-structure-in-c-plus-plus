//finding out total record breaking day
/*
case1: no of people must be more than all previos day
case2: day must be last or prole must be more than following (1 day) day 
*/
#include<iostream>
using namespace std;

int main()
{ 
    int n;
    int arr[n];
    int mx=arr[0];
    int rb=0;//record breaking day
    cout<<"enter the size of an array\n";
    cin>>n;
    cout<<"enter the element of an array\n";
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i <n; i++)
    {
        if (arr[i]>mx && arr[i]>arr[i+1])
        {
            mx=arr[i];
            rb++;
            cout<<i+1<<" is record breaking day"<<endl;
        }
        
    }
    cout<<"total record breaking days are "<<rb;
    return 0;
}