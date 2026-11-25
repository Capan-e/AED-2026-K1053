#include <iostream>
#include <cassert>

double celcius(double f);
double fahrenheit(double c);
bool areaNear (double a, double b, double tolerance);


int main() {
    assert(areaNear(celcius(32), 0, 0.0001));
    assert(areaNear(celcius(212), 100, 0.0001));
    assert(areaNear(fahrenheit(0), 32, 0.0001));   
    assert(areaNear(fahrenheit(100), 212, 0.0001));
    assert(areaNear(celcius(fahrenheit(100)), 100, 0.0001));
    assert(areaNear(fahrenheit(celcius(100)), 100, 0.0001));

    return 0;
};




double celcius(double f) {
    return (f - 32) * 5.0 / 9.0;
}


double fahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32;
}

bool areaNear (double a, double b, double tolerance) {
    return std::abs(a - b) <= tolerance;
}
