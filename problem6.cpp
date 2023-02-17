//find out subarrray with given sum as S 
#include<iostream>
using namespace std;

int main()
{
    
    int n;
     int s;
     int arr[n];
      int i=0,j=0,st=-1,en=-1,sum=0;
     cout<<"enter the size of an array\n";
     cin>>n;
    cout<<"enter the sum you want \n";
    cin>>s;
    cout<<"enter the array you want to print\n";
    for ( i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    while (j<n && sum+arr[j]<=s)
    {
         sum+=arr[j];
         j++;
    }
    if (sum==s)
    {
       cout<<i+1<<" "<<j<<endl;
       return 0;
    }
    while(j<n)
    {
        sum+=arr[j];
        while (sum>s)
        {
            sum-=arr[i];
            i++;
        }
        if(sum==s)
        {
            st=i+1;
            en=i+1;
            break;
        }
    j++;    
    }
   cout<<st<<" "<<en<<endl; 
    return 0;
}