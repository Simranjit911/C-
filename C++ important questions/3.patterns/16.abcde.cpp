#include<iostream>
using namespace std;
// A
// BB
// CCC
// DDDD
// EEEEE
// A
// BB
// CCC
// DDDD
// EEEEE
int main(){

    int n;
    cout<<"Enter:";
    cin>>n;
    // char cht='A';
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<i;j++){
    //         cout<<cht;
    //     }
    //     cout<<cht++;
    //     cout<<endl;
    // }
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<ch;
        }ch++;
        cout<<endl;
    }
}

