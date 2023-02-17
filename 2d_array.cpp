#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"enter the no of raw you want in your matrix\n";
    cin>>n;
    cout<<"enter the numberof the column you want in your matrix";
    cin>>m;
    int arr[n][m];
    cout<<"please enter the value of an matrix";
    for (int  i = 0; i <n; i++)
    {
        for (int j= 0; j<m; j++)
        {
            cin>>arr[i][j];
            
        }
        cout<<endl;
    }
    cout <<"printing the 2d array\n";
     for (int  i = 0; i <n; i++)
    {
        for (int j= 0; j<m; j++)
        {
            cout<<arr[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}