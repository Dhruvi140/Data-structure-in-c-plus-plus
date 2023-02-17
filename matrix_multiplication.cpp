
#include<iostream>
using namespace std;

int main()
{
    int r,c;
     cout<<"enter the no of rows you want to print\n";
     cin>>r;
     cout<<"enter no of columns required \n";
     cin>>c;
     int arr[r][c];
    int mul[10][10];
     cout<<"enter the value of an matrix\n";
     for (int i =0; i <r; i++)
     {
        for (int j = 0; j <c; j++)
        {
            cin>>arr[i][j];
            
        }
     }
     int a;
     int b;
     cout<<"enter the row for matrix required\n";
     cin>>a;
     cout<<"enter the column for 2nd matrix required\n";
     cin>>b;
     int m[a][b];
     cout<<"enter the value for 2nd matrix\n";
     for (int i =0; i <a; i++)
     {
        for (int j = 0; j <b; j++)
        {
            cin>>m[i][j];
        }
     }
     cout<<"printing the value of an matrix\n";
      for (int i =0; i <r; i++)
     {
        for (int j = 0; j <c; j++)
        {
            cout<<arr[i][j];
            cout<<" ";
        }
        cout<<endl;
     }
     cout<<"printing the value of an matrix 2\n";
      for (int i =0; i <a; i++)
     {
        for (int j = 0; j <b; j++)
        {
            cout<<m[i][j];
            cout<<" ";
        }
        cout<<endl;
     }
    cout<<"multiplication start\n";
     for (int i = 0; i<a&&i<r; i++)
     {   
        for (int j = 0; j<b&&j<c; j++)
        { 
         mul[i][j]=0;
         for (int k = 0; k<a;k++)
         {
            mul[i][j]+=(arr[i][k]*m[k][j]);
         }     
        }
     }
     cout<<"prinitng the multiplication of two number\n";
     for (int i = 0; i<a&&i<r; i++)
     {
        for (int j = 0; j<b&&j<c; j++)
        {
         cout<<mul[i][j];
         cout<<" ";
            
        }
        cout<<endl;
     }
     
     
    return 0;
}