#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=4;i<n;i++){
        cout<<i<<" ";
        i=i+2;
    }
}