#include<iostream>
using namespace std;
int main(){
    int length=5;
    int breadth=8;
    int AOR=length*breadth;
    cout<<AOR<<endl;
    int POR=2*(length+breadth);
    cout<<POR<<endl;
    if (AOR>POR){
        cout<<"yes,area is greater";
    }
    else{
        cout<<"perimeter is greater";
    }
    
}