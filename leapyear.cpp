#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the year";
    cin>>n;
    if(n%400==0 && (n%4==0 && n%100==0)){
        cout<<"yes,that is leap year";
    }
    else{
        cout<<"no,that's not leap year";
    }
}