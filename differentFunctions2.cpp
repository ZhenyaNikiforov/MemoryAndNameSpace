#include <iostream>
using namespace std;

/*-- Задание 2. Одинаковые, но разные функции --*/

namespace sum {
    int operation(int a, int b){
        return a + b;
    }
}

namespace inc {
    int operation(int a, int b){
        return a - b;
    }
}

namespace mul {
    int operation(int a, int b){
        return a * b;
    }
}

namespace diw {
    int operation(int a, int b){
        return a / b;
    }
}

int main(){
    
    int firstNumber = 6;
    int secondNumber = 9;
    
    cout<<"x = "<<firstNumber<<", y = "<<secondNumber<<"\n";
    
    cout<<"Сложение: "<<sum::operation(firstNumber, secondNumber)<<"\n";
    cout<<"Вычитание: "<<inc::operation(firstNumber, secondNumber)<<"\n";
    cout<<"Умножение: "<<mul::operation(firstNumber, secondNumber)<<"\n";
    cout<<"Деление: "<<diw::operation(firstNumber, secondNumber)<<endl;
    
    return 0;
}