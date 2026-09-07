#include <iostream>

int adicion (int, int);


int main(){
    int num1 = 0;
    int num2 = 0;
    std::cin >> num1 >> num2;
    adicion (num1,num2);
  
};


int adicion (int a, int b){
    std::cout << a + b << endl;
};
