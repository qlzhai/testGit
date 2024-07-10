#include <iostream>

using namespace std;

void addFun(){
    int a = 10;
    int b = 20;
    cout << "The sum is: " << a + b << endl;    
}

void minFun(){
    int a = 10;
    int b = 20;
    cout << "The difference is: " << a - b << endl;
}

void mulFun(){
    int a = 10;
    int b = 20;
    cout << "The product is: " << a * b << endl;    
}

void divFun(){
    int a = 10;
    int b = 20;
    if(b == 0){
        cout << "Error: Division by zero is not allowed." << endl;
    } else {
        cout << "The quotient is: " << a / b << endl;
    }   
}

//本文件用于测试和学习git
int main() {
    cout << "hello" << endl;
    cout << "world" << endl;
    system("pause");
    return 0; // End the program with a return code of 0
}
