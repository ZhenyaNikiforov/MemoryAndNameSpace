#include <iostream>
using namespace std;

/*-- Задача 1. Считающая функция. --*/

void counting_function();

int main() {
    
    for (int i = 0; i < 15; i++) {
        counting_function();
    }
    
    return 0;
}

void counting_function(){
    
    static int count = 1;
    cout<<"Количество вызовов функции counting_function(): "<<count<<"\n";
    count++;
    
    return;
}