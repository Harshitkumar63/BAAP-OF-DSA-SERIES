#include<iostream>
using namespace std;
int main(){
    int A,B,C;
    cin>>A>>B>>C;
    if(A<B && B<C){
        cout<<"A scoring least marks";
    }
    else if(A>B && B>C){
        cout<<"C scoring least marks";
    }
    else{
        cout<<"B scoring least marks";
    }
}