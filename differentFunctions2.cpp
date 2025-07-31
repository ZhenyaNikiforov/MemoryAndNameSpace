#include <iostream>
using namespace std;

namespace sum {
    void operation(int a, int b){
        cout<<"Сложение: "<<a + b<<"\n";
        return;
    }
}

namespace inc {
    void operation(int a, int b){
        cout<<"Вычитание: "<<a - b<<"\n";
        return;
    }
}

namespace mul {
    void operation(int a, int b){
        cout<<"Умножение: "<<a * b<<"\n";
        return;
    }
}

namespace diw {
    void operation(int a, int b){
        cout<<"Деление: "<<a / b<<"\n";
        return;
    }
}

int main(){
    
    int firstNumber = 6;
    int secondNumber = 9;
    
    cout<<"x = "<<firstNumber<<", y = "<<secondNumber<<"\n";
    
    sum::operation(firstNumber, secondNumber);
    inc::operation(firstNumber, secondNumber);
    mul::operation(firstNumber, secondNumber);
    diw::operation(firstNumber, secondNumber);
    
    return 0;
}