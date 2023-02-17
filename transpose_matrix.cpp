
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
     cout<<"enter the value of an matrix\n";
     for (int i =0; i <r; i++)
     {
        for (int j = 0; j <c; j++)
        {
            cin>>arr[i][j];
            
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
     cout<<"transposing the matrix\n";
     for (int i =0; i <r; i++)
     {
        for (int j = 0; j <c; j++)
        {
           if (i>j)
           { 
            int p;
            p=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=p;
           }
           
        }
        

     }
     cout<<"printing the transpose matrix\n";
     for (int i =0; i <r; i++)
     {
        for (int j = 0; j <c; j++)
        {
            cout<<arr[i][j];
            cout<<" ";
        }
       cout<<endl; 
     }
    return 0;
}