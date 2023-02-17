//important asked in google interview
//find out longest arithmatic array:means where common diffference between two consecutive array must be same minimum 2 value
//find out simillarly longest length of an common difference consecutivily
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    cout<<"enter the length of an array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"finding arithmatic arrray\n";
    int ans=2;
    int pd=arr[1]-arr[0];
    int j=2;
    int current=2;
    for (int j = 2; j<n; j++)
    {
        if (pd==arr[j]-arr[j-1])
        {
          current++;
        }
        else{
          pd==arr[j]-arr[j-1];
          current=2;

        }
      ans=max(ans,current); 
       
    }
    cout<<"the length of  longest arithmatic array is"<<ans<<endl;
    return 0;
}