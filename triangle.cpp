#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    cout<<"enter c";
    cin>>c;
    if(a==b && b==c){
        cout<<"equilateral triangle";
    }
    else if((a==b) || (a==c) || (b==c) ){
        cout<<"isosceles triangle";
    }
    else{
        cout<<"scalene triangle";
    }

    

    

}