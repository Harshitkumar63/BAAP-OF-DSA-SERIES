#include<iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1;
    cout<<endl;
    cin>>x2>>y2;
    cout<<endl;
    cin>>x3>>y3;
    cout<<endl;

    if(x1==y1 && x2==y2 && x3==y3){
        cout<<"yes straight line";
    }
    else{
        cout<<"not an straight line";
    }
}