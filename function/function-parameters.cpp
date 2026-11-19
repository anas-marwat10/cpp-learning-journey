#include<iostream>
#include<cmath>
using namespace std;


int main() {

int base, exp;
cout<< "Enter base" << endl;
cin>> base;
cout<< "Enter Exponent" << endl;
cin>> exp;

//cout<< pow(base, exp);

double x = pow(base, exp);
cout<< x;
}