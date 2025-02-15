#include<iostream>
using namespace std;

// Negative Elements in 1D array

int main()
{
    int arr[5],i;

    for( i=0;i<5;i++)
    {
        cout<<"arr["<<i<<"]: ";
        cin>>arr[i];

    }

    cout<<endl;
    cout<<"Array Element"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<"arr["<<i<<"]= "<<arr[i]<<endl;
    }

    return 0;
}