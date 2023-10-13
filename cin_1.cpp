#include <iostream>
using namespace std;
int main(){
/*int age1;
string name;
cout<<"Please enter your Name and age : "<<endl;
cin>>name;
cin>>age1;
cout<<"Hello "<<name<<" you are "<<age1<<" years old!"<<endl;*/
// for inputting data with spaces we use getline(cin,variable name that contains the input with spaces);
string full_name;
int age2;
cout<<"please enter your full name and age! "<<endl;
getline(cin,full_name);
cin>>age2;
cout<<"Hello "<<full_name<<" you are "<<age2<<" years old!"<<endl;

return 0;
}