#include<iostream>
using namespace std;

class Rectangle{
private:
    int length;
    int breadth;

public:
    Rectangle(): length(1), breadth(1) {} // Constructor
    
    Rectangle(int l, int b): length(l), breadth(b) {} // Overloaded constructor
    
    ~Rectangle() {} // Destructor
    
    void setLength(int l){
        this->length = l;
    }
    
    void setBreadth(int b){
        this->breadth = b;
    }
    
    int area(){
        return length * breadth;
    }
};

int main(){
    int l = 0, b = 0;
    Rectangle rect;
    cout << "Enter the length: ";
    cin >> l;
    cout << "Enter the breadth: ";
    cin >> b;
    rect.setLength(l);
    rect.setBreadth(b);
    cout << "Area of rectangle: " << rect.area() << endl;
    return 0;
}
