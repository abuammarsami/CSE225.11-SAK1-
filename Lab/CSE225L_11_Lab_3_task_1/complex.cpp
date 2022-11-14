#include "complex.h"
#include <iostream>
using namespace std;

Complex::Complex() {
    Real = 15;
    Imaginary = 10;
}

Complex::Complex(double r, double i) {
    Real = r;
    Imaginary = i;
}

Complex Complex::operator+(Complex a) {
    Complex t;
    t.Real = Real + a.Real;
    t.Imaginary = Imaginary + a.Imaginary;
    return t;
}

Complex Complex::addition(Complex a) {
    Complex t;
    t.Real = this->Real + a.Real;
    t.Imaginary = Imaginary + a.Imaginary;
    return t;
}

bool Complex::operator==(Complex a){
    if(this->Real == a.Real && this->Imaginary == a.Imaginary)
        return true;
    else
        return false;
}

void Complex::Print() {
    cout << Real << endl;
    cout << Imaginary << endl;
}









//Complex Complex::operator*(Complex a) {
//    Complex t;
//    t.Real = Real * a.Real;
//    t.Imaginary = Imaginary * a.Imaginary;
//    return t;
//}
//bool Complex::operator==(Complex a) {
//    if(this->Real!=a.Real){
//        return false;
//    }else if(this->Imaginary!=a.Imaginary){
//        return false;
//    }
//    return true;
//}

