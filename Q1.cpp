//Define a function that multiplies two numbers 
#include<iostream>
using namespace std;
 int Mul(int a, int b){
    int result= a*b;
    return result;
 }
 int main(){
    int A = Mul(12,14);
    cout<<"result = "<<A<<endl;
 }