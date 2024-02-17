//Sum of numbers using recursion
#include<iostream>
using namespace std;

int fun(int n){
  
    if(n > 0){
        return fun(n-1)+n;
    }
    return 0;
}

int main(){
    cout << fun(5);
}
