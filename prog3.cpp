#include<iostream>
using namespace std;

// Transpose of 2D arrays

int main()
{
    int a[3][3],b[3][3],i,j;

    cout<<"Enter array A"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"Enter a["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }
    }

    cout<<endl<<"Array A"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }

    cout<<endl<<"Enter array B"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            b[j][i] = a[i][j];
        }
    }


    cout<<endl<<"The Transpose of matrix is:"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<b[i][j]<<" ";

        }
        cout<<endl;
    }
    return 0;
}