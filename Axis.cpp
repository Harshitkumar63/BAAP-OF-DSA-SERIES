#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    if(x==0){
        cout<<"point lies on y axis";

    }
    else if(y==0){
        cout<<"point lies on x axis";
    }
    else if(x==0 && y==0){
        cout<<"point lies on origin";
    }
    else{
        cout<<"point not lies on any axis";
    }
}