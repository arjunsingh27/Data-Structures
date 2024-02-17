#include<iostream>
using namespace std;

void tail(int n){
    if(n>0){
        cout<<n<<endl;
        tail(n-1);
    }
}
void head(int n){
    if(n>0){
        head(n-1);
        cout<<n<<endl;
       
    }
}



int main(){
    cout<<"Tail Recursion "<<endl;
    tail(5);
    cout<<"Head Recursion "<<endl;
    head(5);
}
