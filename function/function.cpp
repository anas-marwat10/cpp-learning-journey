#include<iostream>
using namespace std;

void fct1(){
    cout<< "hello world"<<endl;
}
int fct2(){
    cout<<"wassup dawg"<<endl;
    return 3;
}
int main(){
   fct1();
   int value=fct2();
   cout<<value<<endl;


return 0;
}