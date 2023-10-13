#include<iostream>
using namespace std;
/*Function can be accessed from anywhere in the program
lets define a function that add two numbers*/
int Add_Numbers(int a,int b){
    int result =  a + b;
    return result;
}
//function that subtracts two numbers
int Subtract(int a ,int b){
 int result = a-b;
 return result;
}
int main(){

    int first_number{3};//Statement
    int second_number{15};

    cout<<"First Number = "<<first_number<<endl;
    cout<<"Second Number = "<<second_number<<endl;

    int sum = first_number + second_number;
    cout<<"Sum = "<<sum<<endl;

    sum = Add_Numbers(14,15);
    cout<<"Sum = "<<sum<<endl;

    sum = Add_Numbers(140,100);
    cout<<"Sum = "<<sum<<endl;

    sum = Add_Numbers(1,2);
    cout<<"Sum = "<<sum<<endl;

    int sub = Subtract(12,110);
    cout<<"Sub = "<<sub<<endl;

    return 0;
}