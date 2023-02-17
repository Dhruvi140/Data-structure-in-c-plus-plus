//spiral order matrix traversal/
//writing matrix value in spiral order traversing form 
#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cout<<"enter the no of the row you want to print\n";
    cin>>r;
    cout<<"enter the no of columns you want in your matrix\n";
    cin>>c;
    cout<<"enter the matrix value\n";
    int arr[r][c];
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>arr[i][j];
           

        }
       
    }
    cout<<"matrix is "<<endl;
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j];
            cout<<" ";

        }
       cout<<endl;
    }

    cout<<"spiral_order_matrix is "<<endl;
    int row_start=0,row_end=r-1,column_start=0,column_end=c-1;
    while (row_start<=row_end && column_start<=column_end)
    {
       //from left to right ..for //for row starts
    for (int col = column_start; col<=column_end; col++)
    {
       cout<<arr[row_start][col]<<" "; 
    }
    row_start++;
      //from top to bottom on right side//for column ends
      for (int row = row_start; row<=row_end; row++)
      {
        cout<<arr[row][column_end]<<" ";
      }
      column_end--;
      //from  right to left in bottom // for row ends side
      for (int  col =column_end; col >=column_start; col--)
      {
        cout<<arr[row_end][col]<<" ";
      }
      row_end--;
      //from bottom to top //from column start side
      for (int  row = row_end; row >=row_start; row--)
      {
        cout<<arr[row][column_start]<<" ";
      }
      column_start++;
    return 0;
    }
}