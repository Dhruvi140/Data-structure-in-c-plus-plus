//finding out index of  1st repeating element
//we will create one array and initialize it with -1 and then keep reolacing
//value of main array as index of array with initailized -1 value
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the sizee of an array\n";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[n];
    }
    const int a=1e6+2;
    int index[a];
    for (int i = 0; i <a; i++)
    {
      index[a]=-1;
    }
    int min_index=INT_MAX;
    for (int i = 0; i <n; i++)
    {
        if(index[i]!=-1){
            min_index= min (min_index,index[arr[i]]);


        }
        else{
            index[arr[i]]=i;
        }
    }
    if (min_index==INT_MAX)
    {
       cout<<"-1"<<endl;
    }
    else{
        cout<<min_index+1<<endl;
    }
    

    
    return 0;
}