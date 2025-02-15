#include<iostream>
using namespace std;

// Largest Elements in 2D arrays

int main()
{
    int arr[3][3],i,j,large;

    cout<<"Arr Element"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"Enter arr["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }

    cout<<endl;
    large = arr[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if (arr[i][j] > large){
                large = arr[i][j]; 
            }
        }
    }

    cout<<"Largest Elments in 2D arrays is: "<<large;

    return 0;
}