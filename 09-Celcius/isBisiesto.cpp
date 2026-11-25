#include <cassert>
#include <iostream>


bool isBisiesto (int year);



int main() {
    assert(isBisiesto(2000) == true);
    assert(isBisiesto(2004) == true);
    assert(isBisiesto(2008) == true);
    assert(isBisiesto(1900) == false);
    assert(isBisiesto(2001) == false);
    assert(isBisiesto(2002) == false);

}

bool isBisiesto (int year){

    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))? true : false;
}


